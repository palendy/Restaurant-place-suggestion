#include "practice.h"
#include "ui_practice.h"
#include <QtGui/QApplication>
#include <QtGui/QPushButton>
#include "include.h"

Manager rest(3,2);
int main(int argc, char *argv[])
{
	
	QApplication a(argc, argv);
	practice w;
	w.show();
	return a.exec();
}
