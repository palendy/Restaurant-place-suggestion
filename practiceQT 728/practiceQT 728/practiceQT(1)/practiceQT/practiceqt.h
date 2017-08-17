#ifndef PRACTICEQT_H
#define PRACTICEQT_H

#include <QtGui/QMainWindow>
#include "ui_practiceqt.h"

class practiceQT : public QMainWindow
{
	Q_OBJECT

public:
	practiceQT(QWidget *parent = 0, Qt::WFlags flags = 0);
	~practiceQT();

private:
	Ui::practiceQTClass ui;
};

#endif // PRACTICEQT_H
