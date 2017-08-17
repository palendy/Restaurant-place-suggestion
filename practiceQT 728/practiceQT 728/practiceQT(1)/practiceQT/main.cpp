#include "practiceqt.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	practiceQT w;
	w.show();
	return a.exec();
}
