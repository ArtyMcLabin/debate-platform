#ifndef DEBUG_H
#define DEBUG_H

#include <ui_widget.h>

void setupDebug(Ui::Widget ui);


#ifdef Q_DEBUG
	#define D(x) ui->debug->setText(x);
#else
	#define D(x) //do nothing
#endif



#endif // DEBUG_H
