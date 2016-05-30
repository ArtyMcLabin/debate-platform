#include "node.h"
#include "ui_node.h"


Node::Node(QWidget *parent, QString expr) :
	QFrame(parent),
    ui(new Ui::Node)
{
    ui->setupUi(this);
	//this->resize(NODE_WIDTH,NODE_HEIGHT); //#

	ui->expression->setText(expr);

	show();
}






Node::~Node()
{
	delete ui;
	delete proofs;
}

void Node::paintEvent(QPaintEvent *)
{
	QStyleOption opt;
	opt.init(this);
    QPainter painter(this);

	style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);//ui stylesheet inheritance from QWidget

	//painter.drawRect(0,0,this->width()-1,this->height()-1);
}



//+
//QVector<Node*>::operator<<(Node* node)
//{
//	this->append(node);
//}
