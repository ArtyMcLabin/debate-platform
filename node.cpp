#include "node.h"
#include "ui_node.h"


Node::Node(QWidget *parent, QString expr) :
    QWidget(parent),
    ui(new Ui::Node)
{
    ui->setupUi(this);
	this->resize(NODE_WIDTH,NODE_HEIGHT); //#

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
    QPainter painter(this);
    painter.drawRect(0,0,this->width()-1,this->height()-1);
}
