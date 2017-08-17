#ifndef __TABLE_H
#define __TABLE_H

#include <iostream>
#include <vector>

#define SQUARE_NUM 4
#define RECT_NUM 12


class Student 
{
private:
	int num;

};

class Seat 
{
private:
	bool isSit;
	Student* stu;

public:
	Seat();
	void On(Student* stu);
	void Off();

	bool IsOn();
};


class TableInfo{	// modified 12-05. by 김재형, algorithm return값으로 이 class의 object를 반환할 것임.
public:
	int personNum;		//찾은 자리 수
	int coupling;		//응집도(=효율성)
	int* seatNum;		//자리 위치
	bool isSuccess;
	//int* seatNum2;

public:
	TableInfo(int personNumber);
	TableInfo();
};


class Table 
{
protected:
	Seat* st;

public:
	virtual int getTotalSeat()=0;
	virtual bool isFull()=0; 
	virtual int getNum()=0; 
	virtual bool studentIn(int , Student*)=0; 
	virtual bool studentOut(int)=0; 
	virtual void findProperSeat_New(int, TableInfo&)=0;

};

class SquareTable : public Table
{
private:
	//Seat *st;
	int stuNum;

public:
	SquareTable();

	virtual int getTotalSeat();

	virtual bool isFull();
	
	virtual int getNum();

	virtual bool studentIn(int index, Student* stu);

	virtual bool studentOut(int index);

	virtual void findProperSeat_New(int, TableInfo&);

};

class RectTable : public Table
{
private:
//	Seat *st;
	int stuNum;

public:
	RectTable();

	virtual int getTotalSeat();

	virtual bool isFull();
	
	virtual int getNum();

	virtual bool studentIn(int index, Student* stu);

	virtual bool studentOut(int index);

	virtual void findProperSeat_New(int, TableInfo&);

	void bestFitBin(int personNum, int* bin);

	int calcCoupling(int* seatLIst);
};

class Restaurant
{
private:
	Table* tab;

public:

};

#endif