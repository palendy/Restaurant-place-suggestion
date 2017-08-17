#include "table.h"
#include "Manager.h"

int total_student;		// 에러 위치바꿔야 함

Student* stud[200];		// 에러 위치바꿔야 함

Manager::Manager(int square, int rect) {	
	total_student = 0;
	this->squareNum = square;
	this->rectNum = rect;
	this->tableNumber = square + rect;

	table = new Table*[square + rect];
	
	for(int i=0; i<squareNum; i++) {
		table[i] = new SquareTable();
	}
	
	for(int i=0; i<rectNum; i++) {
		table[i+squareNum] = new RectTable();
	}

	info = new TableInfo[tableNumber];
	bestInfo = TableInfo();
}

TableInfo Manager::getInfo(int index) {
	return info[index];
}

int Manager::getTableNumber() {
	return tableNumber;
}

bool Manager::findSeat(int num) {

	for(int i=0; i<tableNumber; i++) {
		table[i]->findProperSeat_New(num, info[i]);
	}

	for(int i=0; i<tableNumber; i++) {
		printf("%d : ", i);

		printf("%d ", info[i].personNum);

		for(int j=0; j<info[i].personNum; j++)
			printf("%d ", info[i].seatNum[j]);

		printf("%d ", info[i].coupling);
		
		printf("\n");
	}

	for(int i=0; i<tableNumber; i++) {		   //한 테이블이라도 자리가 찾아지면 true 반환
	    if(info[i].isSuccess == true)		   
		   return true;
	}

	return false;	//어떤 테이블에서도 자리를 못찾았으면 false 반환
}
/*
bool Manager::SeatStudent(int index, const TableInfo& info) {
	
	if(index<0 || index>=tableNumber)	//잘못 된 index값
		return false;
	//if(info.isSuccess == false)		//잘못 된 info값
	//	return false;
	
	for(int i=0; i<info.personNum; i++)
		stud[total_student++] = new Student();
	
	for(int i=0; i<info.personNum; i++) {					//info에 담겨있는 자리에 학생들 앉힘
		table[index]->studentIn(info.seatNum[i], stud[total_student-info.personNum+i]);
	}

	return true;
}    */

bool Manager::SeatStudent(int index) {
	bool ref;
    if(index<0 || index>=tableNumber){	//잘못 된 index값
	   printf("매니저 클래스의 SeatStudent함수의 잘못된 index값\n");	
	   return false;
    }

    if(info[index].isSuccess == false){		//잘못 된 index값(앉을 수 없음)
	   printf("매니저 클래스의 SeatStudent함수에서 자리찾기에 실패한 info 정보로 학생 채우려 함\n");	
	   return false;
    }
	
	for(int i=0; i<info[index].personNum; i++)
		stud[total_student++] = new Student();
	
	for(int i=0; i<info[index].personNum; i++) {					//info에 담겨있는 자리에 학생들 앉힘
		ref = table[index]->studentIn(info[index].seatNum[i], stud[total_student-info[index].personNum+i]);
	}

	return ref;
}
bool Manager::SeatStudentIndex(int index, int seatNum){
    if(index<0 || index>=tableNumber){	//잘못 된 index값
	    printf("매니저 클래스의 SeatStudentIndex함수의 잘못된 index값\n");	
	    return false;
    }

	stud[total_student++] = new Student();
    
    bool ref = table[index]->studentIn(seatNum, stud[total_student-1]);
    return ref;
}

bool Manager::OutStudent(int index, int seatNum) {
    if(index<0 || index>=tableNumber){	//잘못 된 index값
	    printf("매니저 클래스의 OutStudent함수의 잘못된 index값\n");	
	    return false;
    }
    
    bool ref = table[index]->studentOut(seatNum);
    return ref;
}