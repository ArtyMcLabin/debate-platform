#ifndef NODE_H
#define NODE_H

#include <QWidget>
#include <QFrame>
#include <QPainter>
#include <QVector>
#include <QLineEdit>

enum class State {ACCEPTED, DECLINED}; //+



namespace Ui {
class Node;
}

class Node : public QFrame
{
    Q_OBJECT

   // const int NODE_HEIGHT = 50;
   // const int NODE_WIDTH = 100;

	State state;



public:
	explicit Node(QWidget *parent = 0, QString expr = "");


    ~Node();

	QVector<Node*>* proofs = new QVector<Node*>; //upper hierarchy


protected:
    void paintEvent(QPaintEvent*);


private:
    Ui::Node *ui;
};

//+ QVector<Node*>::operator << (Node* node);


#endif // NODE_H
