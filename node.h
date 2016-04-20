#ifndef NODE_H
#define NODE_H

#include <QWidget>
#include <QPainter>
#include <QCheckBox>

class Node : public QWidget
{
	Q_OBJECT

	const int NODE_HEIGHT = 50;
	const int NODE_WIDTH = 100;


	QCheckBox* agreeL = new QCheckBox(this);
	QCheckBox* agreeR = new QCheckBox(this);

public:
	explicit Node(QWidget *parent = 0);

protected:
	void paintEvent(QPaintEvent*);

signals:

public slots:
};

#endif // NODE_H
