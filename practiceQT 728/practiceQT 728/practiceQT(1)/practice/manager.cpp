#include "table.h"
#include "Manager.h"

int total_student;		// ���� ��ġ�ٲ�� ��

Student* stud[200];		// ���� ��ġ�ٲ�� ��

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

	for(int i=0; i<tableNumber; i++) {		   //�� ���̺��̶� �ڸ��� ã������ true ��ȯ
	    if(info[i].isSuccess == true)		   
		   return true;
	}

	return false;	//� ���̺����� �ڸ��� ��ã������ false ��ȯ
}
/*
bool Manager::SeatStudent(int index, const TableInfo& info) {
	
	if(index<0 || index>=tableNumber)	//�߸� �� index��
		return false;
	//if(info.isSuccess == false)		//�߸� �� info��
	//	return false;
	
	for(int i=0; i<info.personNum; i++)
		stud[total_student++] = new Student();
	
	for(int i=0; i<info.personNum; i++) {					//info�� ����ִ� �ڸ��� �л��� ����
		table[index]->studentIn(info.seatNum[i], stud[total_student-info.personNum+i]);
	}

	return true;
}    */

bool Manager::SeatStudent(int index) {
	bool ref;
    if(index<0 || index>=tableNumber){	//�߸� �� index��
	   printf("�Ŵ��� Ŭ������ SeatStudent�Լ��� �߸��� index��\n");	
	   return false;
    }

    if(info[index].isSuccess == false){		//�߸� �� index��(���� �� ����)
	   printf("�Ŵ��� Ŭ������ SeatStudent�Լ����� �ڸ�ã�⿡ ������ info ������ �л� ä��� ��\n");	
	   return false;
    }
	
	for(int i=0; i<info[index].personNum; i++)
		stud[total_student++] = new Student();
	
	for(int i=0; i<info[index].personNum; i++) {					//info�� ����ִ� �ڸ��� �л��� ����
		ref = table[index]->studentIn(info[index].seatNum[i], stud[total_student-info[index].personNum+i]);
	}

	return ref;
}
bool Manager::SeatStudentIndex(int index, int seatNum){
    if(index<0 || index>=tableNumber){	//�߸� �� index��
	    printf("�Ŵ��� Ŭ������ SeatStudentIndex�Լ��� �߸��� index��\n");	
	    return false;
    }

	stud[total_student++] = new Student();
    
    bool ref = table[index]->studentIn(seatNum, stud[total_student-1]);
    return ref;
}

bool Manager::OutStudent(int index, int seatNum) {
    if(index<0 || index>=tableNumber){	//�߸� �� index��
	    printf("�Ŵ��� Ŭ������ OutStudent�Լ��� �߸��� index��\n");	
	    return false;
    }
    
    bool ref = table[index]->studentOut(seatNum);
    return ref;
}