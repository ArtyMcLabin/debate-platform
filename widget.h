#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QApplication>

#include "node.h"
#include "debug.h"



namespace Ui {
	class Widget;
}

class Widget : public QWidget
{
	Q_OBJECT

public:
	explicit Widget(QWidget *parent = 0);
	~Widget();

private:
	Ui::Widget *ui;

protected:
	void paintEvent(QPaintEvent*);
	void mouseDoubleClickEvent(QMouseEvent* event);
	void mouseReleaseEvent(QMouseEvent* event);
};

#endif // WIDGET_H
