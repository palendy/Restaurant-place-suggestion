#include "practice.h"
#include "include.h"

bool possibleSeat[5][12];
int inputNum;
practice::practice(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	ui.setupUi(this);	
}

void practice::clickSquare1_1() {
	ui.setupUi(this);
}

void practice::clickSquare1_2() {
	ui.setupUi(this);
}
//Sqaure
void practice::clickSquare4_1() {
////////////////////////////////////////////Possible Seat 선택 시///////////////////////////////////////
	if(possibleSeat[0][0]) {

		checkableTrue();

		if(possibleSeat[0][0]) {
			if(rest.SeatStudentIndex(0,0)) {
				ui.Square1_1->setChecked(true);
				ui.Square1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}

		if(possibleSeat[0][1]) {
			if(rest.SeatStudentIndex(0,1)) {
				ui.Square1_2->setChecked(true);
				ui.Square1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}
	
		if(possibleSeat[0][2]) {
			if(rest.SeatStudentIndex(0,2)) {
				ui.Square1_3->setChecked(true);
				ui.Square1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}

		if(possibleSeat[0][3]) {
			if(rest.SeatStudentIndex(0,3)) {
				ui.Square1_4->setChecked(true);
				ui.Square1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}

/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}

	else {
		if(ui.Square1_1->isChecked())  {
			if(rest.SeatStudentIndex(0,0)) 
				ui.Square1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	//빨간색
		}
		else {
			if(rest.OutStudent(0,0)) 
				ui.Square1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	//초록색
			}
		}
	


}


void practice::clickSquare4_2() {
		if(possibleSeat[0][1]) {
			
		checkableTrue();

			if(possibleSeat[0][0]) {
				if(rest.SeatStudentIndex(0,0)) {
					ui.Square1_1->setChecked(true);
					ui.Square1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[0][1]) {
				if(rest.SeatStudentIndex(0,1)) {
					ui.Square1_2->setChecked(true);
					ui.Square1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
	
			if(possibleSeat[0][2]) {
				if(rest.SeatStudentIndex(0,2)) {
					ui.Square1_3->setChecked(true);
					ui.Square1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[0][3]) {
				if(rest.SeatStudentIndex(0,3)) {
					ui.Square1_4->setChecked(true);
					ui.Square1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}

	else {
	
	
		if(ui.Square1_2->isChecked()) {
			if(rest.SeatStudentIndex(0,1))
				ui.Square1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		
		else { 
			if(rest.OutStudent(0,1)) 
				ui.Square1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}
void practice::clickSquare1_3() {
	if(possibleSeat[0][2]) {
		
		checkableTrue();

			if(possibleSeat[0][0]) {
		if(possibleSeat[0][0]) {
			if(rest.SeatStudentIndex(0,0)) {
				ui.Square1_1->setChecked(true);
				ui.Square1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}

		if(possibleSeat[0][1]) {
			if(rest.SeatStudentIndex(0,1)) {
				ui.Square1_2->setChecked(true);
				ui.Square1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}
	
		if(possibleSeat[0][2]) {
			if(rest.SeatStudentIndex(0,2)) {
				ui.Square1_3->setChecked(true);
				ui.Square1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}

		if(possibleSeat[0][3]) {
			if(rest.SeatStudentIndex(0,3)) {
				ui.Square1_4->setChecked(true);
				ui.Square1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}
/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}

}
	else {
		if(ui.Square1_3->isChecked()) {
			if(rest.SeatStudentIndex(0,2))
				ui.Square1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		
		else {
			if(rest.OutStudent(0,2)) 
				ui.Square1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}
void practice::clickSquare1_4() {
	if(possibleSeat[0][3]) {
		
		checkableTrue();

			if(possibleSeat[0][0]) {
		if(possibleSeat[0][0]) {
			if(rest.SeatStudentIndex(0,0)) {
				ui.Square1_1->setChecked(true);
				ui.Square1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}

		if(possibleSeat[0][1]) {
			if(rest.SeatStudentIndex(0,1)) {
				ui.Square1_2->setChecked(true);
				ui.Square1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}
	
		if(possibleSeat[0][2]) {
			if(rest.SeatStudentIndex(0,2)) {
				ui.Square1_3->setChecked(true);
				ui.Square1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}

		if(possibleSeat[0][3]) {
			if(rest.SeatStudentIndex(0,3)) {
				ui.Square1_4->setChecked(true);
				ui.Square1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}

		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}

	}
	else {
		if(ui.Square1_4->isChecked()) {
			if(rest.SeatStudentIndex(0,3))
				ui.Square1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}

		else {
			if(rest.OutStudent(0,3)) 
				ui.Square1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}
void practice::clickSquare2_1() {
	if(possibleSeat[1][0]) {
		
		checkableTrue();

			if(possibleSeat[1][0]) {
		if(possibleSeat[1][0]) {
			if(rest.SeatStudentIndex(1,0)) {
				ui.Square2_1->setChecked(true);
				ui.Square2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}

		if(possibleSeat[1][1]) {
			if(rest.SeatStudentIndex(1,1)) {
				ui.Square2_2->setChecked(true);
				ui.Square2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}
	
		if(possibleSeat[1][2]) {
			if(rest.SeatStudentIndex(1,2)) {
				ui.Square2_3->setChecked(true);
				ui.Square2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}

		if(possibleSeat[1][3]) {
			if(rest.SeatStudentIndex(1,3)) {
				ui.Square2_4->setChecked(true);
				ui.Square2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}

	}

	else {
		if(ui.Square2_1->isChecked()) {
			if(rest.SeatStudentIndex(1,0))
				ui.Square2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		
		else {
			if(rest.OutStudent(1,0)) 
				ui.Square2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickSquare2_2() {
	if(possibleSeat[1][1]) {
		
		checkableTrue();

		
			if(possibleSeat[1][0]) {
				if(rest.SeatStudentIndex(1,0)) {
					ui.Square2_1->setChecked(true);
					ui.Square2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[1][1]) {
				if(rest.SeatStudentIndex(1,1)) {
					ui.Square2_2->setChecked(true);
					ui.Square2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
	
			if(possibleSeat[1][2]) {
				if(rest.SeatStudentIndex(1,2)) {
					ui.Square2_3->setChecked(true);
					ui.Square2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[1][3]) {
				if(rest.SeatStudentIndex(1,3)) {
					ui.Square2_4->setChecked(true);
					ui.Square2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
			/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

		for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
		}

	else {
		if(ui.Square2_2->isChecked()) {
			if(rest.SeatStudentIndex(1,1)) 
				ui.Square2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
			else {
				if(rest.OutStudent(1,1)) 
					ui.Square2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
			}
	}
}
void practice::clickSquare2_3() {
	if(possibleSeat[1][2]) {
		
		checkableTrue();

		if(possibleSeat[1][0]) {
				if(rest.SeatStudentIndex(1,0)) {
					ui.Square2_1->setChecked(true);
					ui.Square2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[1][1]) {
				if(rest.SeatStudentIndex(1,1)) {
					ui.Square2_2->setChecked(true);
					ui.Square2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
	
			if(possibleSeat[1][2]) {
				if(rest.SeatStudentIndex(1,2)) {
					ui.Square2_3->setChecked(true);
					ui.Square2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[1][3]) {
				if(rest.SeatStudentIndex(1,3)) {
					ui.Square2_4->setChecked(true);
					ui.Square2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
			/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
		}

	else {
		if(ui.Square2_3->isChecked()) {
			if(rest.SeatStudentIndex(1,2))
				ui.Square2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(1,2)) 
				ui.Square2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}
void practice::clickSquare2_4() {
	if(possibleSeat[1][3]) {
		
		checkableTrue();

		if(possibleSeat[1][0]) {
				if(rest.SeatStudentIndex(1,0)) {
					ui.Square2_1->setChecked(true);
					ui.Square2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[1][1]) {
				if(rest.SeatStudentIndex(1,1)) {
					ui.Square2_2->setChecked(true);
					ui.Square2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
	
			if(possibleSeat[1][2]) {
				if(rest.SeatStudentIndex(1,2)) {
					ui.Square2_3->setChecked(true);
					ui.Square2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[1][3]) {
				if(rest.SeatStudentIndex(1,3)) {
					ui.Square2_4->setChecked(true);
					ui.Square2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
			/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

		for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}
	else {
		if(ui.Square2_4->isChecked()) {
			if(rest.SeatStudentIndex(1,3))
				ui.Square2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}	
		else {
			if(rest.OutStudent(1,3)) 
				ui.Square2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}
void practice::clickSquare3_1() {
	if(possibleSeat[2][0]) {
		
		checkableTrue();

		if(possibleSeat[2][0]) {
				if(rest.SeatStudentIndex(2,0)) {
					ui.Square3_1->setChecked(true);
					ui.Square3_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[2][1]) {
				if(rest.SeatStudentIndex(2,1)) {
					ui.Square3_2->setChecked(true);
					ui.Square3_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
	
			if(possibleSeat[2][2]) {
				if(rest.SeatStudentIndex(2,2)) {
					ui.Square3_3->setChecked(true);
					ui.Square3_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[2][3]) {
				if(rest.SeatStudentIndex(2,3)) {
					ui.Square3_4->setChecked(true);
					ui.Square3_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
			/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();
		update();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}
	else {
		if(ui.Square3_1->isChecked()) {
			if(rest.SeatStudentIndex(2,0))
				ui.Square3_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(2,0)) 
				ui.Square3_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}
void practice::clickSquare3_2() {
	if(possibleSeat[2][1]) {
		
		checkableTrue();

			if(possibleSeat[2][0]) {
				if(rest.SeatStudentIndex(2,0)) {
					ui.Square3_1->setChecked(true);
					ui.Square3_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[2][1]) {
				if(rest.SeatStudentIndex(2,1)) {
					ui.Square3_2->setChecked(true);
					ui.Square3_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
	
			if(possibleSeat[2][2]) {
				if(rest.SeatStudentIndex(2,2)) {
					ui.Square3_3->setChecked(true);
					ui.Square3_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[2][3]) {
				if(rest.SeatStudentIndex(2,3)) {
					ui.Square3_4->setChecked(true);
					ui.Square3_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
			/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}
	else {
		if(ui.Square3_2->isChecked()) {
			if(rest.SeatStudentIndex(2,1))
				ui.Square3_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(2,1)) 
				ui.Square3_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}
void practice::clickSquare3_3() {
	if(possibleSeat[2][2]) {
		
		checkableTrue();

			if(possibleSeat[2][0]) {
				if(rest.SeatStudentIndex(2,0)) {
					ui.Square3_1->setChecked(true);
					ui.Square3_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[2][1]) {
				if(rest.SeatStudentIndex(2,1)) {
					ui.Square3_2->setChecked(true);
					ui.Square3_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
	
			if(possibleSeat[2][2]) {
				if(rest.SeatStudentIndex(2,2)) {
					ui.Square3_3->setChecked(true);
					ui.Square3_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[2][3]) {
				if(rest.SeatStudentIndex(2,3)) {
					ui.Square3_4->setChecked(true);
					ui.Square3_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
			/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}
	else {
		if(ui.Square3_3->isChecked()) {
			if(rest.SeatStudentIndex(2,2))
				ui.Square3_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(2,2)) 
				ui.Square3_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}
void practice::clickSquare3_4() {
	if(possibleSeat[2][3]) {
		
		checkableTrue();

			if(possibleSeat[2][0]) {
				if(rest.SeatStudentIndex(2,0)) {
					ui.Square3_1->setChecked(true);
					ui.Square3_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[2][1]) {
				if(rest.SeatStudentIndex(2,1)) {
					ui.Square3_2->setChecked(true);
					ui.Square3_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
	
			if(possibleSeat[2][2]) {
				if(rest.SeatStudentIndex(2,2)) {
					ui.Square3_3->setChecked(true);
					ui.Square3_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}

			if(possibleSeat[2][3]) {
				if(rest.SeatStudentIndex(2,3)) {
					ui.Square3_4->setChecked(true);
					ui.Square3_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	
				}
			}
			/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}
	else {
		if(ui.Square3_4->isChecked()) {
			if(rest.SeatStudentIndex(2,3))
				ui.Square3_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(2,3)) 
				ui.Square3_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

//Rec
void practice::clickRec1_1() {
	if(possibleSeat[3][0]) {
		
		checkableTrue();

		if(possibleSeat[3][0]) {
			if(rest.SeatStudentIndex(3,0)) {
				ui.Rec1_1->setChecked(true);
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][1]) {
			if(rest.SeatStudentIndex(3,1)) {
				ui.Rec1_2->setChecked(true);
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][2]) {
			if(rest.SeatStudentIndex(3,2)) {
				ui.Rec1_3->setChecked(true);
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][3]) {
			if(rest.SeatStudentIndex(3,3)) {
				ui.Rec1_4->setChecked(true);
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][4]) {
			if(rest.SeatStudentIndex(3,4)) {
				ui.Rec1_5->setChecked(true);
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][5]) {
			if(rest.SeatStudentIndex(3,5)) {
				ui.Rec1_6->setChecked(true);
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][6]) {
			if(rest.SeatStudentIndex(3,6)) {
				ui.Rec1_7->setChecked(true);
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][7]) {
			if(rest.SeatStudentIndex(3,7)) {
				ui.Rec1_8->setChecked(true);
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][8]) {
			if(rest.SeatStudentIndex(3,8)) {
				ui.Rec1_9->setChecked(true);
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][9]) {
			if(rest.SeatStudentIndex(3,9)) {
				ui.Rec1_10->setChecked(true);
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][10]) {
			if(rest.SeatStudentIndex(3,10)) {
				ui.Rec1_11->setChecked(true);
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][11]) {
			if(rest.SeatStudentIndex(3,11)) {
				ui.Rec1_12->setChecked(true);
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

		for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
			for(int b=0; b<12; b++) {
				possibleSeat[a][b] = false;
			}
		}
		
	}
	else {
		if(ui.Rec1_1->isChecked()) {
			if(rest.SeatStudentIndex(3,0))
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(3,0))
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec1_2() {
	if(possibleSeat[3][1]) {
		
		checkableTrue();

			if(possibleSeat[3][0]) {
			if(rest.SeatStudentIndex(3,0)) {
				ui.Rec1_1->setChecked(true);
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][1]) {
			if(rest.SeatStudentIndex(3,1)) {
				ui.Rec1_2->setChecked(true);
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][2]) {
			if(rest.SeatStudentIndex(3,2)) {
				ui.Rec1_3->setChecked(true);
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][3]) {
			if(rest.SeatStudentIndex(3,3)) {
				ui.Rec1_4->setChecked(true);
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][4]) {
			if(rest.SeatStudentIndex(3,4)) {
				ui.Rec1_5->setChecked(true);
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][5]) {
			if(rest.SeatStudentIndex(3,5)) {
				ui.Rec1_6->setChecked(true);
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][6]) {
			if(rest.SeatStudentIndex(3,6)) {
				ui.Rec1_7->setChecked(true);
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][7]) {
			if(rest.SeatStudentIndex(3,7)) {
				ui.Rec1_8->setChecked(true);
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][8]) {
			if(rest.SeatStudentIndex(3,8)) {
				ui.Rec1_9->setChecked(true);
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][9]) {
			if(rest.SeatStudentIndex(3,9)) {
				ui.Rec1_10->setChecked(true);
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][10]) {
			if(rest.SeatStudentIndex(3,10)) {
				ui.Rec1_11->setChecked(true);
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][11]) {
			if(rest.SeatStudentIndex(3,11)) {
				ui.Rec1_12->setChecked(true);
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
		else {
		if(ui.Rec1_2->isChecked()) {
			if(rest.SeatStudentIndex(3,1))
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(3,1)) 
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec1_3() {
	if(possibleSeat[3][2]) {
		
		checkableTrue();

		if(possibleSeat[3][0]) {
			if(rest.SeatStudentIndex(3,0)) {
				ui.Rec1_1->setChecked(true);
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][1]) {
			if(rest.SeatStudentIndex(3,1)) {
				ui.Rec1_2->setChecked(true);
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][2]) {
			if(rest.SeatStudentIndex(3,2)) {
				ui.Rec1_3->setChecked(true);
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][3]) {
			if(rest.SeatStudentIndex(3,3)) {
				ui.Rec1_4->setChecked(true);
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][4]) {
			if(rest.SeatStudentIndex(3,4)) {
				ui.Rec1_5->setChecked(true);
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][5]) {
			if(rest.SeatStudentIndex(3,5)) {
				ui.Rec1_6->setChecked(true);
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][6]) {
			if(rest.SeatStudentIndex(3,6)) {
				ui.Rec1_7->setChecked(true);
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][7]) {
			if(rest.SeatStudentIndex(3,7)) {
				ui.Rec1_8->setChecked(true);
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][8]) {
			if(rest.SeatStudentIndex(3,8)) {
				ui.Rec1_9->setChecked(true);
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][9]) {
			if(rest.SeatStudentIndex(3,9)) {
				ui.Rec1_10->setChecked(true);
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][10]) {
			if(rest.SeatStudentIndex(3,10)) {
				ui.Rec1_11->setChecked(true);
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][11]) {
			if(rest.SeatStudentIndex(3,11)) {
				ui.Rec1_12->setChecked(true);
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

		for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}
	else {
		if(ui.Rec1_3->isChecked()) {
			if(rest.SeatStudentIndex(3,2))
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(3,2)) 
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec1_4() {
	if(possibleSeat[3][3]) {
		
		checkableTrue();

		if(possibleSeat[3][0]) {
			if(rest.SeatStudentIndex(3,0)) {
				ui.Rec1_1->setChecked(true);
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][1]) {
			if(rest.SeatStudentIndex(3,1)) {
				ui.Rec1_2->setChecked(true);
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][2]) {
			if(rest.SeatStudentIndex(3,2)) {
				ui.Rec1_3->setChecked(true);
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][3]) {
			if(rest.SeatStudentIndex(3,3)) {
				ui.Rec1_4->setChecked(true);
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][4]) {
			if(rest.SeatStudentIndex(3,4)) {
				ui.Rec1_5->setChecked(true);
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][5]) {
			if(rest.SeatStudentIndex(3,5)) {
				ui.Rec1_6->setChecked(true);
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][6]) {
			if(rest.SeatStudentIndex(3,6)) {
				ui.Rec1_7->setChecked(true);
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][7]) {
			if(rest.SeatStudentIndex(3,7)) {
				ui.Rec1_8->setChecked(true);
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][8]) {
			if(rest.SeatStudentIndex(3,8)) {
				ui.Rec1_9->setChecked(true);
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][9]) {
			if(rest.SeatStudentIndex(3,9)) {
				ui.Rec1_10->setChecked(true);
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][10]) {
			if(rest.SeatStudentIndex(3,10)) {
				ui.Rec1_11->setChecked(true);
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][11]) {
			if(rest.SeatStudentIndex(3,11)) {
				ui.Rec1_12->setChecked(true);
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
	else {
		if(ui.Rec1_4->isChecked()) {
			if(rest.SeatStudentIndex(3,3))
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(3,3)) 
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec1_5() {
	if(possibleSeat[3][4]) {
		
		checkableTrue();

		if(possibleSeat[3][0]) {
			if(rest.SeatStudentIndex(3,0)) {
				ui.Rec1_1->setChecked(true);
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][1]) {
			if(rest.SeatStudentIndex(3,1)) {
				ui.Rec1_2->setChecked(true);
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][2]) {
			if(rest.SeatStudentIndex(3,2)) {
				ui.Rec1_3->setChecked(true);
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][3]) {
			if(rest.SeatStudentIndex(3,3)) {
				ui.Rec1_4->setChecked(true);
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][4]) {
			if(rest.SeatStudentIndex(3,4)) {
				ui.Rec1_5->setChecked(true);
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][5]) {
			if(rest.SeatStudentIndex(3,5)) {
				ui.Rec1_6->setChecked(true);
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][6]) {
			if(rest.SeatStudentIndex(3,6)) {
				ui.Rec1_7->setChecked(true);
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][7]) {
			if(rest.SeatStudentIndex(3,7)) {
				ui.Rec1_8->setChecked(true);
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][8]) {
			if(rest.SeatStudentIndex(3,8)) {
				ui.Rec1_9->setChecked(true);
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][9]) {
			if(rest.SeatStudentIndex(3,9)) {
				ui.Rec1_10->setChecked(true);
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][10]) {
			if(rest.SeatStudentIndex(3,10)) {
				ui.Rec1_11->setChecked(true);
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][11]) {
			if(rest.SeatStudentIndex(3,11)) {
				ui.Rec1_12->setChecked(true);
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
	else {
		if(ui.Rec1_5->isChecked()) {
			if(rest.SeatStudentIndex(3,4)) 
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(3,4)) 
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec1_6() {
	if(possibleSeat[3][5]) {
		
		checkableTrue();

		if(possibleSeat[3][0]) {
			if(rest.SeatStudentIndex(3,0)) {
				ui.Rec1_1->setChecked(true);
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][1]) {
			if(rest.SeatStudentIndex(3,1)) {
				ui.Rec1_2->setChecked(true);
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][2]) {
			if(rest.SeatStudentIndex(3,2)) {
				ui.Rec1_3->setChecked(true);
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][3]) {
			if(rest.SeatStudentIndex(3,3)) {
				ui.Rec1_4->setChecked(true);
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][4]) {
			if(rest.SeatStudentIndex(3,4)) {
				ui.Rec1_5->setChecked(true);
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][5]) {
			if(rest.SeatStudentIndex(3,5)) {
				ui.Rec1_6->setChecked(true);
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][6]) {
			if(rest.SeatStudentIndex(3,6)) {
				ui.Rec1_7->setChecked(true);
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][7]) {
			if(rest.SeatStudentIndex(3,7)) {
				ui.Rec1_8->setChecked(true);
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][8]) {
			if(rest.SeatStudentIndex(3,8)) {
				ui.Rec1_9->setChecked(true);
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][9]) {
			if(rest.SeatStudentIndex(3,9)) {
				ui.Rec1_10->setChecked(true);
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][10]) {
			if(rest.SeatStudentIndex(3,10)) {
				ui.Rec1_11->setChecked(true);
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][11]) {
			if(rest.SeatStudentIndex(3,11)) {
				ui.Rec1_12->setChecked(true);
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
	else {
		if(ui.Rec1_6->isChecked()) {
			if(rest.SeatStudentIndex(3,5))
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(3,5)) 
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec1_7() {
	if(possibleSeat[3][6]) {
		
		checkableTrue();

			if(possibleSeat[3][0]) {
			if(rest.SeatStudentIndex(3,0)) {
				ui.Rec1_1->setChecked(true);
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][1]) {
			if(rest.SeatStudentIndex(3,1)) {
				ui.Rec1_2->setChecked(true);
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][2]) {
			if(rest.SeatStudentIndex(3,2)) {
				ui.Rec1_3->setChecked(true);
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][3]) {
			if(rest.SeatStudentIndex(3,3)) {
				ui.Rec1_4->setChecked(true);
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][4]) {
			if(rest.SeatStudentIndex(3,4)) {
				ui.Rec1_5->setChecked(true);
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][5]) {
			if(rest.SeatStudentIndex(3,5)) {
				ui.Rec1_6->setChecked(true);
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][6]) {
			if(rest.SeatStudentIndex(3,6)) {
				ui.Rec1_7->setChecked(true);
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][7]) {
			if(rest.SeatStudentIndex(3,7)) {
				ui.Rec1_8->setChecked(true);
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][8]) {
			if(rest.SeatStudentIndex(3,8)) {
				ui.Rec1_9->setChecked(true);
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][9]) {
			if(rest.SeatStudentIndex(3,9)) {
				ui.Rec1_10->setChecked(true);
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][10]) {
			if(rest.SeatStudentIndex(3,10)) {
				ui.Rec1_11->setChecked(true);
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][11]) {
			if(rest.SeatStudentIndex(3,11)) {
				ui.Rec1_12->setChecked(true);
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();
		update();
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}
	else {
		if(ui.Rec1_7->isChecked()) {
			if(rest.SeatStudentIndex(3,6)) 
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(3,6)) 
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec1_8() {
	if(possibleSeat[3][7]) {
		
		checkableTrue();

			if(possibleSeat[3][0]) {
			if(rest.SeatStudentIndex(3,0)) {
				ui.Rec1_1->setChecked(true);
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][1]) {
			if(rest.SeatStudentIndex(3,1)) {
				ui.Rec1_2->setChecked(true);
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][2]) {
			if(rest.SeatStudentIndex(3,2)) {
				ui.Rec1_3->setChecked(true);
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][3]) {
			if(rest.SeatStudentIndex(3,3)) {
				ui.Rec1_4->setChecked(true);
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][4]) {
			if(rest.SeatStudentIndex(3,4)) {
				ui.Rec1_5->setChecked(true);
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][5]) {
			if(rest.SeatStudentIndex(3,5)) {
				ui.Rec1_6->setChecked(true);
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][6]) {
			if(rest.SeatStudentIndex(3,6)) {
				ui.Rec1_7->setChecked(true);
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][7]) {
			if(rest.SeatStudentIndex(3,7)) {
				ui.Rec1_8->setChecked(true);
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][8]) {
			if(rest.SeatStudentIndex(3,8)) {
				ui.Rec1_9->setChecked(true);
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][9]) {
			if(rest.SeatStudentIndex(3,9)) {
				ui.Rec1_10->setChecked(true);
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][10]) {
			if(rest.SeatStudentIndex(3,10)) {
				ui.Rec1_11->setChecked(true);
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][11]) {
			if(rest.SeatStudentIndex(3,11)) {
				ui.Rec1_12->setChecked(true);
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();
		update();
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
		else {
		if(ui.Rec1_8->isChecked()) {
			if(rest.SeatStudentIndex(3,7))
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(3,7)) 
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec1_9() {
	if(possibleSeat[3][8]) {
		
		checkableTrue();

			if(possibleSeat[3][0]) {
			if(rest.SeatStudentIndex(3,0)) {
				ui.Rec1_1->setChecked(true);
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][1]) {
			if(rest.SeatStudentIndex(3,1)) {
				ui.Rec1_2->setChecked(true);
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][2]) {
			if(rest.SeatStudentIndex(3,2)) {
				ui.Rec1_3->setChecked(true);
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][3]) {
			if(rest.SeatStudentIndex(3,3)) {
				ui.Rec1_4->setChecked(true);
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][4]) {
			if(rest.SeatStudentIndex(3,4)) {
				ui.Rec1_5->setChecked(true);
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][5]) {
			if(rest.SeatStudentIndex(3,5)) {
				ui.Rec1_6->setChecked(true);
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][6]) {
			if(rest.SeatStudentIndex(3,6)) {
				ui.Rec1_7->setChecked(true);
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][7]) {
			if(rest.SeatStudentIndex(3,7)) {
				ui.Rec1_8->setChecked(true);
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][8]) {
			if(rest.SeatStudentIndex(3,8)) {
				ui.Rec1_9->setChecked(true);
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][9]) {
			if(rest.SeatStudentIndex(3,9)) {
				ui.Rec1_10->setChecked(true);
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][10]) {
			if(rest.SeatStudentIndex(3,10)) {
				ui.Rec1_11->setChecked(true);
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][11]) {
			if(rest.SeatStudentIndex(3,11)) {
				ui.Rec1_12->setChecked(true);
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();
		update();
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
	else {
		if(ui.Rec1_9->isChecked()) {
			if(rest.SeatStudentIndex(3,8))
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(3,8)) 
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec1_10() {
	if(possibleSeat[3][9]) {
		
		checkableTrue();

			if(possibleSeat[3][0]) {
			if(rest.SeatStudentIndex(3,0)) {
				ui.Rec1_1->setChecked(true);
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][1]) {
			if(rest.SeatStudentIndex(3,1)) {
				ui.Rec1_2->setChecked(true);
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][2]) {
			if(rest.SeatStudentIndex(3,2)) {
				ui.Rec1_3->setChecked(true);
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][3]) {
			if(rest.SeatStudentIndex(3,3)) {
				ui.Rec1_4->setChecked(true);
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][4]) {
			if(rest.SeatStudentIndex(3,4)) {
				ui.Rec1_5->setChecked(true);
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][5]) {
			if(rest.SeatStudentIndex(3,5)) {
				ui.Rec1_6->setChecked(true);
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][6]) {
			if(rest.SeatStudentIndex(3,6)) {
				ui.Rec1_7->setChecked(true);
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][7]) {
			if(rest.SeatStudentIndex(3,7)) {
				ui.Rec1_8->setChecked(true);
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][8]) {
			if(rest.SeatStudentIndex(3,8)) {
				ui.Rec1_9->setChecked(true);
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][9]) {
			if(rest.SeatStudentIndex(3,9)) {
				ui.Rec1_10->setChecked(true);
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][10]) {
			if(rest.SeatStudentIndex(3,10)) {
				ui.Rec1_11->setChecked(true);
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][11]) {
			if(rest.SeatStudentIndex(3,11)) {
				ui.Rec1_12->setChecked(true);
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();
		update();
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}
	else{
		if(ui.Rec1_10->isChecked()) {
			if(rest.SeatStudentIndex(3,9))
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(3,9)) 
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec1_11() {
	if(possibleSeat[3][10]) {
		
		checkableTrue();

			if(possibleSeat[3][0]) {
			if(rest.SeatStudentIndex(3,0)) {
				ui.Rec1_1->setChecked(true);
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][1]) {
			if(rest.SeatStudentIndex(3,1)) {
				ui.Rec1_2->setChecked(true);
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][2]) {
			if(rest.SeatStudentIndex(3,2)) {
				ui.Rec1_3->setChecked(true);
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][3]) {
			if(rest.SeatStudentIndex(3,3)) {
				ui.Rec1_4->setChecked(true);
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][4]) {
			if(rest.SeatStudentIndex(3,4)) {
				ui.Rec1_5->setChecked(true);
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][5]) {
			if(rest.SeatStudentIndex(3,5)) {
				ui.Rec1_6->setChecked(true);
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][6]) {
			if(rest.SeatStudentIndex(3,6)) {
				ui.Rec1_7->setChecked(true);
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][7]) {
			if(rest.SeatStudentIndex(3,7)) {
				ui.Rec1_8->setChecked(true);
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][8]) {
			if(rest.SeatStudentIndex(3,8)) {
				ui.Rec1_9->setChecked(true);
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][9]) {
			if(rest.SeatStudentIndex(3,9)) {
				ui.Rec1_10->setChecked(true);
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][10]) {
			if(rest.SeatStudentIndex(3,10)) {
				ui.Rec1_11->setChecked(true);
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][11]) {
			if(rest.SeatStudentIndex(3,11)) {
				ui.Rec1_12->setChecked(true);
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();
		update();
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}
	else {
		if(ui.Rec1_11->isChecked()) {
			if(rest.SeatStudentIndex(3,10))
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(3,10)) 
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec1_12() {
	if(possibleSeat[3][11]) {
		
		checkableTrue();

			if(possibleSeat[3][0]) {
			if(rest.SeatStudentIndex(3,0)) {
				ui.Rec1_1->setChecked(true);
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][1]) {
			if(rest.SeatStudentIndex(3,1)) {
				ui.Rec1_2->setChecked(true);
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][2]) {
			if(rest.SeatStudentIndex(3,2)) {
				ui.Rec1_3->setChecked(true);
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][3]) {
			if(rest.SeatStudentIndex(3,3)) {
				ui.Rec1_4->setChecked(true);
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][4]) {
			if(rest.SeatStudentIndex(3,4)) {
				ui.Rec1_5->setChecked(true);
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][5]) {
			if(rest.SeatStudentIndex(3,5)) {
				ui.Rec1_6->setChecked(true);
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][6]) {
			if(rest.SeatStudentIndex(3,6)) {
				ui.Rec1_7->setChecked(true);
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][7]) {
			if(rest.SeatStudentIndex(3,7)) {
				ui.Rec1_8->setChecked(true);
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][8]) {
			if(rest.SeatStudentIndex(3,8)) {
				ui.Rec1_9->setChecked(true);
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][9]) {
			if(rest.SeatStudentIndex(3,9)) {
				ui.Rec1_10->setChecked(true);
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][10]) {
			if(rest.SeatStudentIndex(3,10)) {
				ui.Rec1_11->setChecked(true);
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[3][11]) {
			if(rest.SeatStudentIndex(3,11)) {
				ui.Rec1_12->setChecked(true);
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();
		update();
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
		else {
		if(ui.Rec1_12->isChecked()) {
			if(rest.SeatStudentIndex(3,11)) 
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(3,11)) 
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

//Rec2
void practice::clickRec2_1() {
	if(possibleSeat[4][0]) {
		
		checkableTrue();

		if(possibleSeat[4][0]) {
			if(rest.SeatStudentIndex(4,0)) {
				ui.Rec2_1->setChecked(true);
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][1]) {
			if(rest.SeatStudentIndex(4,1)) {
				ui.Rec2_2->setChecked(true);
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][2]) {
			if(rest.SeatStudentIndex(4,2)) {
				ui.Rec2_3->setChecked(true);
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][3]) {
			if(rest.SeatStudentIndex(4,3)) {
				ui.Rec2_4->setChecked(true);
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][4]) {
			if(rest.SeatStudentIndex(4,4)) {
				ui.Rec2_5->setChecked(true);
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][5]) {
			if(rest.SeatStudentIndex(4,5)) {
				ui.Rec2_6->setChecked(true);
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][6]) {
			if(rest.SeatStudentIndex(4,6)) {
				ui.Rec2_7->setChecked(true);
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][7]) {
			if(rest.SeatStudentIndex(4,7)) {
				ui.Rec2_8->setChecked(true);
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][8]) {
			if(rest.SeatStudentIndex(4,8)) {
				ui.Rec2_9->setChecked(true);
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][9]) {
			if(rest.SeatStudentIndex(4,9)) {
				ui.Rec2_10->setChecked(true);
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][10]) {
			if(rest.SeatStudentIndex(4,10)) {
				ui.Rec2_11->setChecked(true);
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][11]) {
			if(rest.SeatStudentIndex(4,11)) {
				ui.Rec2_12->setChecked(true);
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
		else {
		if(ui.Rec2_1->isChecked()) {
			if(rest.SeatStudentIndex(4,0))
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(4,0)) 
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec2_2() {
	if(possibleSeat[4][1]) {
		
		checkableTrue();

				if(possibleSeat[4][0]) {
			if(rest.SeatStudentIndex(4,0)) {
				ui.Rec2_1->setChecked(true);
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][1]) {
			if(rest.SeatStudentIndex(4,1)) {
				ui.Rec2_2->setChecked(true);
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][2]) {
			if(rest.SeatStudentIndex(4,2)) {
				ui.Rec2_3->setChecked(true);
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][3]) {
			if(rest.SeatStudentIndex(4,3)) {
				ui.Rec2_4->setChecked(true);
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][4]) {
			if(rest.SeatStudentIndex(4,4)) {
				ui.Rec2_5->setChecked(true);
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][5]) {
			if(rest.SeatStudentIndex(4,5)) {
				ui.Rec2_6->setChecked(true);
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][6]) {
			if(rest.SeatStudentIndex(4,6)) {
				ui.Rec2_7->setChecked(true);
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][7]) {
			if(rest.SeatStudentIndex(4,7)) {
				ui.Rec2_8->setChecked(true);
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][8]) {
			if(rest.SeatStudentIndex(4,8)) {
				ui.Rec2_9->setChecked(true);
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][9]) {
			if(rest.SeatStudentIndex(4,9)) {
				ui.Rec2_10->setChecked(true);
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][10]) {
			if(rest.SeatStudentIndex(4,10)) {
				ui.Rec2_11->setChecked(true);
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][11]) {
			if(rest.SeatStudentIndex(4,11)) {
				ui.Rec2_12->setChecked(true);
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
	else {
		if(ui.Rec2_2->isChecked()) {
			if(rest.SeatStudentIndex(4,1))
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(4,1)) 
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec2_3() {
	if(possibleSeat[4][2]) {
		
		checkableTrue();

				if(possibleSeat[4][0]) {
			if(rest.SeatStudentIndex(4,0)) {
				ui.Rec2_1->setChecked(true);
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][1]) {
			if(rest.SeatStudentIndex(4,1)) {
				ui.Rec2_2->setChecked(true);
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][2]) {
			if(rest.SeatStudentIndex(4,2)) {
				ui.Rec2_3->setChecked(true);
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][3]) {
			if(rest.SeatStudentIndex(4,3)) {
				ui.Rec2_4->setChecked(true);
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][4]) {
			if(rest.SeatStudentIndex(4,4)) {
				ui.Rec2_5->setChecked(true);
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][5]) {
			if(rest.SeatStudentIndex(4,5)) {
				ui.Rec2_6->setChecked(true);
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][6]) {
			if(rest.SeatStudentIndex(4,6)) {
				ui.Rec2_7->setChecked(true);
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][7]) {
			if(rest.SeatStudentIndex(4,7)) {
				ui.Rec2_8->setChecked(true);
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][8]) {
			if(rest.SeatStudentIndex(4,8)) {
				ui.Rec2_9->setChecked(true);
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][9]) {
			if(rest.SeatStudentIndex(4,9)) {
				ui.Rec2_10->setChecked(true);
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][10]) {
			if(rest.SeatStudentIndex(4,10)) {
				ui.Rec2_11->setChecked(true);
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][11]) {
			if(rest.SeatStudentIndex(4,11)) {
				ui.Rec2_12->setChecked(true);
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
	else {
		if(ui.Rec2_3->isChecked()) {
			if(rest.SeatStudentIndex(4,2)) 
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(4,2)) 
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec2_4() {
	if(possibleSeat[4][3]) {
		
		checkableTrue();

				if(possibleSeat[4][0]) {
			if(rest.SeatStudentIndex(4,0)) {
				ui.Rec2_1->setChecked(true);
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][1]) {
			if(rest.SeatStudentIndex(4,1)) {
				ui.Rec2_2->setChecked(true);
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][2]) {
			if(rest.SeatStudentIndex(4,2)) {
				ui.Rec2_3->setChecked(true);
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][3]) {
			if(rest.SeatStudentIndex(4,3)) {
				ui.Rec2_4->setChecked(true);
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][4]) {
			if(rest.SeatStudentIndex(4,4)) {
				ui.Rec2_5->setChecked(true);
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][5]) {
			if(rest.SeatStudentIndex(4,5)) {
				ui.Rec2_6->setChecked(true);
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][6]) {
			if(rest.SeatStudentIndex(4,6)) {
				ui.Rec2_7->setChecked(true);
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][7]) {
			if(rest.SeatStudentIndex(4,7)) {
				ui.Rec2_8->setChecked(true);
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][8]) {
			if(rest.SeatStudentIndex(4,8)) {
				ui.Rec2_9->setChecked(true);
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][9]) {
			if(rest.SeatStudentIndex(4,9)) {
				ui.Rec2_10->setChecked(true);
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][10]) {
			if(rest.SeatStudentIndex(4,10)) {
				ui.Rec2_11->setChecked(true);
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][11]) {
			if(rest.SeatStudentIndex(4,11)) {
				ui.Rec2_12->setChecked(true);
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
	else {
		if(ui.Rec2_4->isChecked()) {
			if(rest.SeatStudentIndex(4,3))
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(4,3)) 
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec2_5() {
	if(possibleSeat[4][4]) {
		
		checkableTrue();

				if(possibleSeat[4][0]) {
			if(rest.SeatStudentIndex(4,0)) {
				ui.Rec2_1->setChecked(true);
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][1]) {
			if(rest.SeatStudentIndex(4,1)) {
				ui.Rec2_2->setChecked(true);
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][2]) {
			if(rest.SeatStudentIndex(4,2)) {
				ui.Rec2_3->setChecked(true);
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][3]) {
			if(rest.SeatStudentIndex(4,3)) {
				ui.Rec2_4->setChecked(true);
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][4]) {
			if(rest.SeatStudentIndex(4,4)) {
				ui.Rec2_5->setChecked(true);
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][5]) {
			if(rest.SeatStudentIndex(4,5)) {
				ui.Rec2_6->setChecked(true);
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][6]) {
			if(rest.SeatStudentIndex(4,6)) {
				ui.Rec2_7->setChecked(true);
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][7]) {
			if(rest.SeatStudentIndex(4,7)) {
				ui.Rec2_8->setChecked(true);
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][8]) {
			if(rest.SeatStudentIndex(4,8)) {
				ui.Rec2_9->setChecked(true);
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][9]) {
			if(rest.SeatStudentIndex(4,9)) {
				ui.Rec2_10->setChecked(true);
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][10]) {
			if(rest.SeatStudentIndex(4,10)) {
				ui.Rec2_11->setChecked(true);
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][11]) {
			if(rest.SeatStudentIndex(4,11)) {
				ui.Rec2_12->setChecked(true);
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
	else {
		if(ui.Rec2_5->isChecked()) {
			if(rest.SeatStudentIndex(4,4))
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(4,4)) 
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec2_6() {
	if(possibleSeat[4][5]) {
		
		checkableTrue();

				if(possibleSeat[4][0]) {
			if(rest.SeatStudentIndex(4,0)) {
				ui.Rec2_1->setChecked(true);
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][1]) {
			if(rest.SeatStudentIndex(4,1)) {
				ui.Rec2_2->setChecked(true);
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][2]) {
			if(rest.SeatStudentIndex(4,2)) {
				ui.Rec2_3->setChecked(true);
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][3]) {
			if(rest.SeatStudentIndex(4,3)) {
				ui.Rec2_4->setChecked(true);
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][4]) {
			if(rest.SeatStudentIndex(4,4)) {
				ui.Rec2_5->setChecked(true);
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][5]) {
			if(rest.SeatStudentIndex(4,5)) {
				ui.Rec2_6->setChecked(true);
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][6]) {
			if(rest.SeatStudentIndex(4,6)) {
				ui.Rec2_7->setChecked(true);
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][7]) {
			if(rest.SeatStudentIndex(4,7)) {
				ui.Rec2_8->setChecked(true);
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][8]) {
			if(rest.SeatStudentIndex(4,8)) {
				ui.Rec2_9->setChecked(true);
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][9]) {
			if(rest.SeatStudentIndex(4,9)) {
				ui.Rec2_10->setChecked(true);
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][10]) {
			if(rest.SeatStudentIndex(4,10)) {
				ui.Rec2_11->setChecked(true);
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][11]) {
			if(rest.SeatStudentIndex(4,11)) {
				ui.Rec2_12->setChecked(true);
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
	else {
		if(ui.Rec2_6->isChecked()) {
			if(rest.SeatStudentIndex(4,5))
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(4,5)) 
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec2_7() {
	if(possibleSeat[4][6]) {
		
		checkableTrue();

				if(possibleSeat[4][0]) {
			if(rest.SeatStudentIndex(4,0)) {
				ui.Rec2_1->setChecked(true);
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][1]) {
			if(rest.SeatStudentIndex(4,1)) {
				ui.Rec2_2->setChecked(true);
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][2]) {
			if(rest.SeatStudentIndex(4,2)) {
				ui.Rec2_3->setChecked(true);
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][3]) {
			if(rest.SeatStudentIndex(4,3)) {
				ui.Rec2_4->setChecked(true);
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][4]) {
			if(rest.SeatStudentIndex(4,4)) {
				ui.Rec2_5->setChecked(true);
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][5]) {
			if(rest.SeatStudentIndex(4,5)) {
				ui.Rec2_6->setChecked(true);
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][6]) {
			if(rest.SeatStudentIndex(4,6)) {
				ui.Rec2_7->setChecked(true);
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][7]) {
			if(rest.SeatStudentIndex(4,7)) {
				ui.Rec2_8->setChecked(true);
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][8]) {
			if(rest.SeatStudentIndex(4,8)) {
				ui.Rec2_9->setChecked(true);
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][9]) {
			if(rest.SeatStudentIndex(4,9)) {
				ui.Rec2_10->setChecked(true);
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][10]) {
			if(rest.SeatStudentIndex(4,10)) {
				ui.Rec2_11->setChecked(true);
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][11]) {
			if(rest.SeatStudentIndex(4,11)) {
				ui.Rec2_12->setChecked(true);
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
	else {
		if(ui.Rec2_7->isChecked()) {
			if(rest.SeatStudentIndex(4,6))
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(4,6)) 
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec2_8() {
	if(possibleSeat[4][7]) {
		
		checkableTrue();

				if(possibleSeat[4][0]) {
			if(rest.SeatStudentIndex(4,0)) {
				ui.Rec2_1->setChecked(true);
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][1]) {
			if(rest.SeatStudentIndex(4,1)) {
				ui.Rec2_2->setChecked(true);
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][2]) {
			if(rest.SeatStudentIndex(4,2)) {
				ui.Rec2_3->setChecked(true);
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][3]) {
			if(rest.SeatStudentIndex(4,3)) {
				ui.Rec2_4->setChecked(true);
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][4]) {
			if(rest.SeatStudentIndex(4,4)) {
				ui.Rec2_5->setChecked(true);
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][5]) {
			if(rest.SeatStudentIndex(4,5)) {
				ui.Rec2_6->setChecked(true);
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][6]) {
			if(rest.SeatStudentIndex(4,6)) {
				ui.Rec2_7->setChecked(true);
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][7]) {
			if(rest.SeatStudentIndex(4,7)) {
				ui.Rec2_8->setChecked(true);
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][8]) {
			if(rest.SeatStudentIndex(4,8)) {
				ui.Rec2_9->setChecked(true);
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][9]) {
			if(rest.SeatStudentIndex(4,9)) {
				ui.Rec2_10->setChecked(true);
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][10]) {
			if(rest.SeatStudentIndex(4,10)) {
				ui.Rec2_11->setChecked(true);
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][11]) {
			if(rest.SeatStudentIndex(4,11)) {
				ui.Rec2_12->setChecked(true);
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
	else {
		if(ui.Rec2_8->isChecked()) {
			if(rest.SeatStudentIndex(4,7))
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(4,7)) 
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec2_9() {
	if(possibleSeat[4][8]) {
		
		checkableTrue();

				if(possibleSeat[4][0]) {
			if(rest.SeatStudentIndex(4,0)) {
				ui.Rec2_1->setChecked(true);
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][1]) {
			if(rest.SeatStudentIndex(4,1)) {
				ui.Rec2_2->setChecked(true);
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][2]) {
			if(rest.SeatStudentIndex(4,2)) {
				ui.Rec2_3->setChecked(true);
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][3]) {
			if(rest.SeatStudentIndex(4,3)) {
				ui.Rec2_4->setChecked(true);
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][4]) {
			if(rest.SeatStudentIndex(4,4)) {
				ui.Rec2_5->setChecked(true);
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][5]) {
			if(rest.SeatStudentIndex(4,5)) {
				ui.Rec2_6->setChecked(true);
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][6]) {
			if(rest.SeatStudentIndex(4,6)) {
				ui.Rec2_7->setChecked(true);
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][7]) {
			if(rest.SeatStudentIndex(4,7)) {
				ui.Rec2_8->setChecked(true);
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][8]) {
			if(rest.SeatStudentIndex(4,8)) {
				ui.Rec2_9->setChecked(true);
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][9]) {
			if(rest.SeatStudentIndex(4,9)) {
				ui.Rec2_10->setChecked(true);
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][10]) {
			if(rest.SeatStudentIndex(4,10)) {
				ui.Rec2_11->setChecked(true);
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][11]) {
			if(rest.SeatStudentIndex(4,11)) {
				ui.Rec2_12->setChecked(true);
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}
	else {
		if(ui.Rec2_9->isChecked()) {
			if(rest.SeatStudentIndex(4,8))
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(4,8)) 
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec2_10() {
	if(possibleSeat[4][9]) {
		
		checkableTrue();

				if(possibleSeat[4][0]) {
			if(rest.SeatStudentIndex(4,0)) {
				ui.Rec2_1->setChecked(true);
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][1]) {
			if(rest.SeatStudentIndex(4,1)) {
				ui.Rec2_2->setChecked(true);
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][2]) {
			if(rest.SeatStudentIndex(4,2)) {
				ui.Rec2_3->setChecked(true);
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][3]) {
			if(rest.SeatStudentIndex(4,3)) {
				ui.Rec2_4->setChecked(true);
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][4]) {
			if(rest.SeatStudentIndex(4,4)) {
				ui.Rec2_5->setChecked(true);
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][5]) {
			if(rest.SeatStudentIndex(4,5)) {
				ui.Rec2_6->setChecked(true);
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][6]) {
			if(rest.SeatStudentIndex(4,6)) {
				ui.Rec2_7->setChecked(true);
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][7]) {
			if(rest.SeatStudentIndex(4,7)) {
				ui.Rec2_8->setChecked(true);
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][8]) {
			if(rest.SeatStudentIndex(4,8)) {
				ui.Rec2_9->setChecked(true);
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][9]) {
			if(rest.SeatStudentIndex(4,9)) {
				ui.Rec2_10->setChecked(true);
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][10]) {
			if(rest.SeatStudentIndex(4,10)) {
				ui.Rec2_11->setChecked(true);
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][11]) {
			if(rest.SeatStudentIndex(4,11)) {
				ui.Rec2_12->setChecked(true);
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}
	else {
		if(ui.Rec2_10->isChecked()) {
			if(rest.SeatStudentIndex(4,9))
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(4,9)) 
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec2_11() {
	if(possibleSeat[4][10]) {
		
		checkableTrue();

				if(possibleSeat[4][0]) {
			if(rest.SeatStudentIndex(4,0)) {
				ui.Rec2_1->setChecked(true);
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][1]) {
			if(rest.SeatStudentIndex(4,1)) {
				ui.Rec2_2->setChecked(true);
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][2]) {
			if(rest.SeatStudentIndex(4,2)) {
				ui.Rec2_3->setChecked(true);
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][3]) {
			if(rest.SeatStudentIndex(4,3)) {
				ui.Rec2_4->setChecked(true);
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][4]) {
			if(rest.SeatStudentIndex(4,4)) {
				ui.Rec2_5->setChecked(true);
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][5]) {
			if(rest.SeatStudentIndex(4,5)) {
				ui.Rec2_6->setChecked(true);
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][6]) {
			if(rest.SeatStudentIndex(4,6)) {
				ui.Rec2_7->setChecked(true);
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][7]) {
			if(rest.SeatStudentIndex(4,7)) {
				ui.Rec2_8->setChecked(true);
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][8]) {
			if(rest.SeatStudentIndex(4,8)) {
				ui.Rec2_9->setChecked(true);
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][9]) {
			if(rest.SeatStudentIndex(4,9)) {
				ui.Rec2_10->setChecked(true);
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][10]) {
			if(rest.SeatStudentIndex(4,10)) {
				ui.Rec2_11->setChecked(true);
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][11]) {
			if(rest.SeatStudentIndex(4,11)) {
				ui.Rec2_12->setChecked(true);
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}
	else {
		if(ui.Rec2_11->isChecked()) {
			if(rest.SeatStudentIndex(4,10))
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(4,10)) 
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}

void practice::clickRec2_12() {
	if(possibleSeat[4][11]) {
		
		checkableTrue();

				if(possibleSeat[4][0]) {
			if(rest.SeatStudentIndex(4,0)) {
				ui.Rec2_1->setChecked(true);
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][1]) {
			if(rest.SeatStudentIndex(4,1)) {
				ui.Rec2_2->setChecked(true);
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][2]) {
			if(rest.SeatStudentIndex(4,2)) {
				ui.Rec2_3->setChecked(true);
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][3]) {
			if(rest.SeatStudentIndex(4,3)) {
				ui.Rec2_4->setChecked(true);
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][4]) {
			if(rest.SeatStudentIndex(4,4)) {
				ui.Rec2_5->setChecked(true);
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][5]) {
			if(rest.SeatStudentIndex(4,5)) {
				ui.Rec2_6->setChecked(true);
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][6]) {
			if(rest.SeatStudentIndex(4,6)) {
				ui.Rec2_7->setChecked(true);
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][7]) {
			if(rest.SeatStudentIndex(4,7)) {
				ui.Rec2_8->setChecked(true);
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][8]) {
			if(rest.SeatStudentIndex(4,8)) {
				ui.Rec2_9->setChecked(true);
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][9]) {
			if(rest.SeatStudentIndex(4,9)) {
				ui.Rec2_10->setChecked(true);
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][10]) {
			if(rest.SeatStudentIndex(4,10)) {
				ui.Rec2_11->setChecked(true);
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		if(possibleSeat[4][11]) {
			if(rest.SeatStudentIndex(4,11)) {
				ui.Rec2_12->setChecked(true);
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
			}
		}
		/////////////////////////초기화/////////////////////////	
		clearBlue();
		checkedRed();

	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	}
	else {
		if(ui.Rec2_12->isChecked()) {
			if(rest.SeatStudentIndex(4,11))
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
		}
		else {
			if(rest.OutStudent(4,11)) 
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
	}
}
void practice ::changeColor() {
	bool seatOccupied[12];
	for(int loop=0; loop<12; loop++){
		seatOccupied[loop] = false;
		for(int loop2=0; loop2<5; loop2++){
			possibleSeat[loop2][loop] = false;   //파란색으로 변한 것 카운트 하기위해 모두 false로 초기화 해줌.
		}
	}

	if(rest.getInfo(0).isSuccess){
		int temp = rest.getInfo(0).personNum;
		for(int loop=0; loop<temp; loop++){
			seatOccupied[rest.getInfo(0).seatNum[loop]] = true;
		}

		for(int loop=0; loop<SQUARE_NUM; loop++){
			if(seatOccupied[loop]){
				// blue
				if(loop==0) {
					ui.Square1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[0][0]=true;
				}
				if(loop==1) {
					ui.Square1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[0][1]=true;
				}
				if(loop==2) {
					ui.Square1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[0][2]=true;
				}
				if(loop==3) {
					ui.Square1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[0][3]=true;
				}
			}
		}

	

	}

	checkableFalse();


	for(int loop=0; loop<12; loop++){
		seatOccupied[loop] = false;
	}
	if(rest.getInfo(1).isSuccess){
		int temp = rest.getInfo(1).personNum;
		for(int loop=0; loop<temp; loop++){
			seatOccupied[rest.getInfo(1).seatNum[loop]] = true;
		}

		for(int loop=0; loop<SQUARE_NUM; loop++){
			if(seatOccupied[loop]){
				// blue
				if(loop==0) {
					ui.Square2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[1][0]=true;
				}
				if(loop==1) {
					ui.Square2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[1][1]=true;
				}
				if(loop==2) {
					ui.Square2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[1][2]=true;
				}
				if(loop==3) {
					ui.Square2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[1][3]=true;
				}
			}
		}
	}
	
	checkableFalse();

	for(int loop=0; loop<12; loop++){
		seatOccupied[loop] = false;
	}
	if(rest.getInfo(2).isSuccess){
		int temp = rest.getInfo(2).personNum;
		for(int loop=0; loop<temp; loop++){
			seatOccupied[rest.getInfo(2).seatNum[loop]] = true;
		}

		for(int loop=0; loop<SQUARE_NUM; loop++){
			if(seatOccupied[loop]){
				// blue
				if(loop==0) {
					ui.Square3_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[2][0]=true;
				}
				if(loop==1) {
					ui.Square3_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[2][1]=true;
				}
				if(loop==2) {
					ui.Square3_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[2][2]=true;
				}
				if(loop==3) {
					ui.Square3_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[2][3]=true;
				}
			}
		}
	}
	
	checkableFalse();

	for(int loop=0; loop<12; loop++){
		seatOccupied[loop] = false;
	}
	if(rest.getInfo(3).isSuccess){
		int temp = rest.getInfo(3).personNum;
		for(int loop=0; loop<temp; loop++){
			seatOccupied[rest.getInfo(3).seatNum[loop]] = true;
		}

		for(int loop=0; loop<RECT_NUM; loop++){
			if(seatOccupied[loop]){
				// blue
				if(loop==0) {
					ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));	
					possibleSeat[3][0]=true;
				}
				if(loop==1) {
					ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[3][1]=true;
				}
				if(loop==2) {
					ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[3][2]=true;
				}
				if(loop==3) {
					ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[3][3]=true;
				}
				if(loop==4) {
					ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[3][4]=true;
				}
				if(loop==5) {
					ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[3][5]=true;
				}
				if(loop==6) {
					ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[3][6]=true;
				}
				if(loop==7) {
					ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[3][7]=true;
				}
				if(loop==8) {
					ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[3][8]=true;
				}
				if(loop==9) {
					ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[3][9]=true;
				}
				if(loop==10) {
					ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[3][10]=true;
				}
				if(loop==11) {
					ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[3][11]=true;
				}
			}
		}
	}
	
	checkableFalse();

	for(int loop=0; loop<12; loop++){
		seatOccupied[loop] = false;
	}
		if(rest.getInfo(4).isSuccess){
		int temp = rest.getInfo(4).personNum;
		for(int loop=0; loop<temp; loop++){
			seatOccupied[rest.getInfo(4).seatNum[loop]] = true;
		}

		for(int loop=0; loop<RECT_NUM; loop++){
			if(seatOccupied[loop]){
				// blue
				if(loop==0) {
					ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));	
					possibleSeat[4][0]=true;
				}
				if(loop==1) {
					ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[4][1]=true;
				}
				if(loop==2) {
					ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[4][2]=true;
				}
				if(loop==3) {
					ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[4][3]=true;
				}
				if(loop==4) {
					ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[4][4]=true;
				}
				if(loop==5) {
					ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[4][5]=true;
				}
				if(loop==6) {
					ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[4][6]=true;
				}
				if(loop==7) {
					ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[4][7]=true;
				}
				if(loop==8) {
					ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[4][8]=true;
				}
				if(loop==9) {
					ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[4][9]=true;
				}
				if(loop==10) {
					ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[4][10]=true;
				}
				if(loop==11) {
					ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(73, 186, 254) }"));
					possibleSeat[4][11]=true;
				}
			}
		}
	}
		
	checkableFalse();

	/////////////////////////만약 전 테이블에 possibleSeat이 존재하지 않을 경우, setCheckable(False)를 (True)로 변경한다. => 고를 수 있는 PossibleSeat통해 setCheckable(True)로 못바꾸므로
int possiblecheck=0;
	for(int loop=0; loop<12; loop++){
		for(int loop2=0; loop2<5; loop2++){
		possiblecheck+=possibleSeat[loop2][loop];
		}
	}
	if(possiblecheck==0)
	  checkableTrue();


	//	if(rest.getInfo(0).seatNum[0]==0)
}

void practice::input1() {
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	inputClear();
	if(rest.findSeat(1))
		changeColor();

}

void practice::input2() {
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	inputClear();
	inputNum=2;
	if(rest.findSeat(2))
		changeColor();
}

void practice::input3() {
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	inputClear();
	inputNum=3;
	if(rest.findSeat(3))
		changeColor();
}

void practice::input4() {
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	inputClear();
	inputNum=4;
	if(rest.findSeat(4))
		changeColor();
}

void practice::input5() {
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	inputClear();
	if(rest.findSeat(5))
		changeColor();
}

void practice::input6() {
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	inputClear();
	if(rest.findSeat(6))
		changeColor();
}

void practice::input7() {
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	inputClear();
	if(rest.findSeat(7))
		changeColor();
	
}

void practice::input8()  {
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	inputClear();
	if(rest.findSeat(8))
		changeColor();
}


////////////////////////////////////////////
void practice::clearBlue() {
//////////Suare1
		if(possibleSeat[0][0]) {
				ui.Square1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[0][1]) {
				ui.Square1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[0][2]) {
				ui.Square1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[0][3]) {
				ui.Square1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}

//////////Square2
		if(possibleSeat[1][0]) {
				ui.Square2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[1][1]) {
				ui.Square2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[1][2]) {
				ui.Square2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[1][3]) {
				ui.Square2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
//////////Square3
		if(possibleSeat[2][0]) {
				ui.Square3_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[2][1]) {
				ui.Square3_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[2][2]) {
				ui.Square3_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[2][3]) {
				ui.Square3_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
//////////Rec1
		if(possibleSeat[3][0]) {
				ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[3][1]) {
				ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[3][2]) {
				ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[3][3]) {
				ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[3][4]) {
				ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[3][5]) {
				ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[3][6]) {
				ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[3][7]) {
				ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[3][8]) {
				ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[3][9]) {
				ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[3][10]) {
				ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[3][11]) {
				ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
//////////Rec2
		if(possibleSeat[4][0]) {
				ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[4][1]) {
				ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[4][2]) {
				ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	
		}
		if(possibleSeat[4][3]) {
				ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[4][4]) {
				ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[4][5]) {
				ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[4][6]) {
				ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[4][7]) {
				ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[4][8]) {
				ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[4][9]) {
				ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[4][10]) {
				ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}
		if(possibleSeat[4][11]) {
				ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
		}

		for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}

	}

void practice::checkedRed() {

	if(ui.Square1_1->isChecked())
		ui.Square1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Square1_2->isChecked())
		ui.Square1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));		
	if(ui.Square1_3->isChecked())
		ui.Square1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Square1_4->isChecked())
		ui.Square1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));	

	if(ui.Square2_1->isChecked())
		ui.Square2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Square2_2->isChecked())
		ui.Square2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Square2_3->isChecked())
		ui.Square2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Square2_4->isChecked())
		ui.Square2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));

	if(ui.Square3_1->isChecked())
		ui.Square3_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Square3_2->isChecked())
		ui.Square3_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Square3_3->isChecked())
		ui.Square3_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Square3_4->isChecked())
		ui.Square3_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));

	if(ui.Rec1_1->isChecked())
		ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec1_2->isChecked())
		ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec1_3->isChecked())
		ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec1_4->isChecked())
		ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec1_5->isChecked())
		ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec1_6->isChecked())
		ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec1_7->isChecked())
		ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec1_8->isChecked())
		ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec1_9->isChecked())
		ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec1_10->isChecked())
		ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec1_11->isChecked())
		ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec1_12->isChecked())
		ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));

	if(ui.Rec2_1->isChecked())
		ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec2_2->isChecked())
		ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec2_3->isChecked())
		ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec2_4->isChecked())
		ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec2_5->isChecked())
		ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec2_6->isChecked())
		ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec2_7->isChecked())
		ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec2_8->isChecked())
		ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec2_9->isChecked())
		ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec2_10->isChecked())
		ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec2_11->isChecked())
		ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));
	if(ui.Rec2_12->isChecked())
		ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(208, 16, 5) }"));

}

void practice::inputClear() {
	if(ui.Square1_1->isChecked()!=true)
		ui.Square1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Square1_2->isChecked()!=true)
		ui.Square1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));		
	if(ui.Square1_3->isChecked()!=true)
		ui.Square1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Square1_4->isChecked()!=true)
		ui.Square1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));	

	if(ui.Square2_1->isChecked()!=true)
		ui.Square2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Square2_2->isChecked()!=true)
		ui.Square2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Square2_3->isChecked()!=true)
		ui.Square2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Square2_4->isChecked()!=true)
		ui.Square2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));

	if(ui.Square3_1->isChecked()!=true)
		ui.Square3_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Square3_2->isChecked()!=true)
		ui.Square3_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Square3_3->isChecked()!=true)
		ui.Square3_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Square3_4->isChecked()!=true)
		ui.Square3_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));

	if(ui.Rec1_1->isChecked()!=true)
		ui.Rec1_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec1_2->isChecked()!=true)
		ui.Rec1_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec1_3->isChecked()!=true)
		ui.Rec1_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec1_4->isChecked()!=true)
		ui.Rec1_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec1_5->isChecked()!=true)
		ui.Rec1_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec1_6->isChecked()!=true)
		ui.Rec1_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec1_7->isChecked()!=true)
		ui.Rec1_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec1_8->isChecked()!=true)
		ui.Rec1_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec1_9->isChecked()!=true)
		ui.Rec1_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec1_10->isChecked()!=true)
		ui.Rec1_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec1_11->isChecked()!=true)
		ui.Rec1_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec1_12->isChecked()!=true)
		ui.Rec1_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));

	if(ui.Rec2_1->isChecked()!=true)
		ui.Rec2_1->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec2_2->isChecked()!=true)
		ui.Rec2_2->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec2_3->isChecked()!=true)
		ui.Rec2_3->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec2_4->isChecked()!=true)
		ui.Rec2_4->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec2_5->isChecked()!=true)
		ui.Rec2_5->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec2_6->isChecked()!=true)
		ui.Rec2_6->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec2_7->isChecked()!=true)
		ui.Rec2_7->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec2_8->isChecked()!=true)
		ui.Rec2_8->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec2_9->isChecked()!=true)
		ui.Rec2_9->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec2_10->isChecked()!=true)
		ui.Rec2_10->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec2_11->isChecked()!=true)
		ui.Rec2_11->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
	if(ui.Rec2_12->isChecked()!=true)
		ui.Rec2_12->setStyleSheet(QString::fromUtf8("QPushButton { color: white; background-color: rgb(102, 176, 54) }"));
}

void practice::checkableFalse() {
			//////////Square1
	if(ui.Square1_1->isChecked()!=true){
		if(possibleSeat[0][0]==false) {
			ui.Square1_1->setCheckable(false);	
		}
	}
	if(ui.Square1_2->isChecked()!=true){
		if(possibleSeat[0][1]==false) {
			ui.Square1_2->setCheckable(false);	
		}
	}
	if(ui.Square1_3->isChecked()!=true){
		if(possibleSeat[0][2]==false) {
			ui.Square1_3->setCheckable(false);	
		}
	}
	if(ui.Square1_4->isChecked()!=true){
		if(possibleSeat[0][3]==false) {
			ui.Square1_4->setCheckable(false);	
		}
	}
			//////////Square2
	if(ui.Square2_1->isChecked()!=true){
		if(possibleSeat[1][0]==false) {
			ui.Square2_1->setCheckable(false);	
		}
	}
	if(ui.Square2_2->isChecked()!=true){
		if(possibleSeat[1][1]==false) {
			ui.Square2_2->setCheckable(false);	
		}
	}
	if(ui.Square2_3->isChecked()!=true){
		if(possibleSeat[1][2]==false) {
			ui.Square2_3->setCheckable(false);	
		}
	}
	if(ui.Square2_4->isChecked()!=true){
		if(possibleSeat[1][3]==false) {
			ui.Square2_4->setCheckable(false);	
		}
	}
			//////////Square3
	if(ui.Square3_1->isChecked()!=true){
		if(possibleSeat[2][0]==false) {
			ui.Square3_1->setCheckable(false);	
		}
	}
	if(ui.Square3_2->isChecked()!=true){
		if(possibleSeat[2][1]==false) {
			ui.Square3_2->setCheckable(false);	
		}
	}
	if(ui.Square3_3->isChecked()!=true){
		if(possibleSeat[2][2]==false) {
			ui.Square3_3->setCheckable(false);	
		}
	}
	if(ui.Square3_4->isChecked()!=true){
		if(possibleSeat[2][3]==false) {
			ui.Square3_4->setCheckable(false);	
		}
	}

			//////////Rec1
	if(ui.Rec1_1->isChecked()!=true){
		if(possibleSeat[3][0]==false) {
			ui.Rec1_1->setCheckable(false);	
		}
	}
	if(ui.Rec1_2->isChecked()!=true){
		if(possibleSeat[3][1]==false) {
			ui.Rec1_2->setCheckable(false);	
		}
	}
	if(ui.Rec1_3->isChecked()!=true){
		if(possibleSeat[3][2]==false) {
			ui.Rec1_3->setCheckable(false);	
		}
	}
	if(ui.Rec1_4->isChecked()!=true){
		if(possibleSeat[3][3]==false) {
			ui.Rec1_4->setCheckable(false);	
		}
	}
	if(ui.Rec1_5->isChecked()!=true){
		if(possibleSeat[3][4]==false) {
			ui.Rec1_5->setCheckable(false);	
		}
	}
	if(ui.Rec1_6->isChecked()!=true){
		if(possibleSeat[3][5]==false) {
			ui.Rec1_6->setCheckable(false);	
		}
	}
	if(ui.Rec1_7->isChecked()!=true){
		if(possibleSeat[3][6]==false) {
			ui.Rec1_7->setCheckable(false);	
		}
	}
	if(ui.Rec1_8->isChecked()!=true){
		if(possibleSeat[3][7]==false) {
			ui.Rec1_8->setCheckable(false);	
		}
	}
	if(ui.Rec1_9->isChecked()!=true){
		if(possibleSeat[3][8]==false) {
			ui.Rec1_9->setCheckable(false);	
		}
	}
	if(ui.Rec1_10->isChecked()!=true){
		if(possibleSeat[3][9]==false) {
			ui.Rec1_10->setCheckable(false);	
		}
	}
	if(ui.Rec1_11->isChecked()!=true){
		if(possibleSeat[3][10]==false) {
			ui.Rec1_11->setCheckable(false);	
		}
	}
	if(ui.Rec1_12->isChecked()!=true){
		if(possibleSeat[3][11]==false) {
			ui.Rec1_12->setCheckable(false);	
		}
	}

			//////////Rec2
	if(ui.Rec2_1->isChecked()!=true){
		if(possibleSeat[4][0]==false) {
			ui.Rec2_1->setCheckable(false);	
		}
	}
	if(ui.Rec2_2->isChecked()!=true){
		if(possibleSeat[4][1]==false) {
			ui.Rec2_2->setCheckable(false);	
		}
	}
	if(ui.Rec2_3->isChecked()!=true){
		if(possibleSeat[4][2]==false) {
			ui.Rec2_3->setCheckable(false);	
		}
	}
	if(ui.Rec2_4->isChecked()!=true){
		if(possibleSeat[4][3]==false) {
			ui.Rec2_4->setCheckable(false);	
		}
	}
	if(ui.Rec2_5->isChecked()!=true){
		if(possibleSeat[4][4]==false) {
			ui.Rec2_5->setCheckable(false);	
		}
	}
	if(ui.Rec2_6->isChecked()!=true){
		if(possibleSeat[4][5]==false) {
			ui.Rec2_6->setCheckable(false);	
		}
	}
	if(ui.Rec2_7->isChecked()!=true){
		if(possibleSeat[4][6]==false) {
			ui.Rec2_7->setCheckable(false);	
		}
	}
	if(ui.Rec2_8->isChecked()!=true){
		if(possibleSeat[4][7]==false) {
			ui.Rec2_8->setCheckable(false);	
		}
	}
	if(ui.Rec2_9->isChecked()!=true){
		if(possibleSeat[4][8]==false) {
			ui.Rec2_9->setCheckable(false);	
		}
	}
	if(ui.Rec2_10->isChecked()!=true){
		if(possibleSeat[4][9]==false) {
			ui.Rec2_10->setCheckable(false);	
		}
	}
	if(ui.Rec2_11->isChecked()!=true){
		if(possibleSeat[4][10]==false) {
			ui.Rec2_11->setCheckable(false);	
		}
	}
	if(ui.Rec2_12->isChecked()!=true){
		if(possibleSeat[4][11]==false) {
			ui.Rec2_12->setCheckable(false);	
		}
	}
}

void practice::checkableTrue() {
			//////////Square1
		
			
		ui.Square1_1->setCheckable(true);
		ui.Square1_2->setCheckable(true);
		ui.Square1_3->setCheckable(true);
		ui.Square1_4->setCheckable(true);

		ui.Square2_1->setCheckable(true);
		ui.Square2_2->setCheckable(true);
		ui.Square2_3->setCheckable(true);
		ui.Square2_4->setCheckable(true);

		ui.Square3_1->setCheckable(true);
		ui.Square3_2->setCheckable(true);
		ui.Square3_3->setCheckable(true);
		ui.Square3_4->setCheckable(true);

		ui.Rec1_1->setCheckable(true);
		ui.Rec1_2->setCheckable(true);
		ui.Rec1_3->setCheckable(true);
		ui.Rec1_4->setCheckable(true);
		ui.Rec1_5->setCheckable(true);
		ui.Rec1_6->setCheckable(true);
		ui.Rec1_7->setCheckable(true);
		ui.Rec1_8->setCheckable(true);
		ui.Rec1_9->setCheckable(true);
		ui.Rec1_10->setCheckable(true);
		ui.Rec1_11->setCheckable(true);
		ui.Rec1_12->setCheckable(true);

		ui.Rec2_1->setCheckable(true);
		ui.Rec2_2->setCheckable(true);
		ui.Rec2_3->setCheckable(true);
		ui.Rec2_4->setCheckable(true);
		ui.Rec2_5->setCheckable(true);
		ui.Rec2_6->setCheckable(true);
		ui.Rec2_7->setCheckable(true);
		ui.Rec2_8->setCheckable(true);
		ui.Rec2_9->setCheckable(true);
		ui.Rec2_10->setCheckable(true);
		ui.Rec2_11->setCheckable(true);
		ui.Rec2_12->setCheckable(true);




}





void practice::Init() {
	for(int a=0; a<5; a++) {  //blue인지 체크하는 변수 초기화
		for(int b=0; b<12; b++) {
			possibleSeat[a][b] = false;
		}
	}
	ui.setupUi(this);
	clearBlue();
	checkedRed();
	inputClear();	

}




practice::~practice()
{

}

