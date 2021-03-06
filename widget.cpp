#include "widget.h"
#include "ui_widget.h"

//globals
QVector<Node*>* nodes = new QVector<Node*>;
Node* currentNode = NULL;


Widget::Widget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::Widget)
{
	ui->setupUi(this);

	setupDebug(ui);


	Node* root = new Node(this);
	Node* middle = new Node(this,"middle");
	Node* leaf = new Node(this);

	nodes->append(root);
	nodes->append(middle);
	nodes->append(leaf);

	root->move(40,40);
	middle->move(40,300);
	leaf->move(250,500);


	leaf->proofs->append(root);
	leaf->proofs->append(middle);

	middle->proofs->append(root);


}

Widget::~Widget()
{
	delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
	QPainter painter(this);
	Node* node;
	QVector<Node*>::iterator proof;

	painter.setPen(Qt::blue);

	foreach(node,*nodes)
		for(proof = node->proofs->begin(); proof != node->proofs->end(); proof++)
			painter.drawLine((*proof)->pos()+QPoint((*proof)->width()/2,(*proof)->height()), node->pos()+QPoint(node->width()/2,0));

	//foreach(proof,*(node->proofs))
	//

}

void Widget::mouseDoubleClickEvent(QMouseEvent *event)
{
		Node* node = new Node(this);
		nodes->append(node);

		node->move(event->pos());


		currentNode = node;
}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
	if(currentNode != NULL) //set the slected note as proof to the one under release point
	{
		Node* under = NULL;
		if(under = dynamic_cast<Node*>(QApplication::widgetAt(event->pos())) != NULL)
			D("under is Node");


		currentNode = NULL;
	}
}
