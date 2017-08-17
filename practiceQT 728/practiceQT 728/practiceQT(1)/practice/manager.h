#ifndef __MANAGER_H
#define __MANAGER_H


class Manager {
private:
	int squareNum;
	int rectNum;
	int tableNumber;

	Table** table;
	TableInfo* info;
	TableInfo bestInfo;

public:
	Manager(int, int);
	TableInfo getInfo(int);
	int getTableNumber();
	bool findSeat(int);
	bool SeatStudent(int);
	bool SeatStudentIndex(int, int);
	bool OutStudent(int, int);
};


#endif

