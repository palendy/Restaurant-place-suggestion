#ifndef PRACTICE_H
#define PRACTICE_H

#include <QtGui/QMainWindow>
#include "ui_practice.h"

class practice : public QMainWindow
{
	Q_OBJECT

public slots:
	//square connect function
	void clickSquare1_1();
	void clickSquare1_2();
	void clickSquare1_3();
	void clickSquare1_4();

	void clickSquare2_1();
	void clickSquare2_2();
	void clickSquare2_3();
	void clickSquare2_4();

	void clickSquare3_1();
	void clickSquare3_2();
	void clickSquare3_3();
	void clickSquare3_4();

	void clickSquare4_1();
	void clickSquare4_2();


	//rec connect function
	void clickRec1_1();
	void clickRec1_2();
	void clickRec1_3();
	void clickRec1_4();
	void clickRec1_5();
	void clickRec1_6();
	void clickRec1_7();
	void clickRec1_8();
	void clickRec1_9();
	void clickRec1_10();
	void clickRec1_11();
	void clickRec1_12();

	void clickRec2_1();
	void clickRec2_2();
	void clickRec2_3();
	void clickRec2_4();
	void clickRec2_5();
	void clickRec2_6();
	void clickRec2_7();
	void clickRec2_8();
	void clickRec2_9();
	void clickRec2_10();
	void clickRec2_11();
	void clickRec2_12();

	//input person
	void input1();
	void input2();
	void input3();
	void input4();
	void input5();
	void input6();
	void input7();
	void input8();
	//change color ->blue
	void changeColor();
	void clearBlue();
	void checkedRed();
	void inputClear();	
	void Init();
	//void setCheckable();
	void checkableFalse();
	void checkableTrue();
public:
	practice(QWidget *parent = 0, Qt::WFlags flags = 0);
	~practice();

private:
	Ui::practiceClass ui;


};


#endif // PRACTICE_H
