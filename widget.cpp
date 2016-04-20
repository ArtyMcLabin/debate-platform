#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::Widget)
{
	ui->setupUi(this);



	Node* root = new Node(this);
	root->show();



}

Widget::~Widget()
{
	delete ui;
}
