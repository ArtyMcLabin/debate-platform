#include "node.h"

Node::Node(QWidget *parent) : QWidget(parent)
{
	this->resize(NODE_WIDTH,NODE_HEIGHT);
    agreeR->move(agreeL->width()/10,0);
}

void Node::paintEvent(QPaintEvent *)
{
	QPainter painter(this);
	painter.drawRect(0,0,this->width()-1,this->height()-1);
}

