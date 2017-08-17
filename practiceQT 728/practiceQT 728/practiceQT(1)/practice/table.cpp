#include "table.h"

Seat::Seat() {
	isSit = false;
	this->stu = NULL;
}

void Seat:: On(Student* stu) {			//�л��� �ڸ��� ����
		isSit = true;
		this->stu = stu;
}

void Seat:: Off() {				//�л��� �ڸ����� ����
		isSit = false;
		this->stu = NULL;
}

bool Seat::IsOn() {				//�ڸ��� �ִ��� ������ Ȯ��
	if (isSit == true)
		return true;
	else 
		return false;
}

TableInfo::TableInfo(int personNumber){
	this->coupling = 0;
	this->personNum = personNumber;
	this->seatNum = new int[personNumber];
	this->isSuccess = false;
}

TableInfo::TableInfo(){
	this->coupling = 0;
	this->personNum = 0;
	this->seatNum = new int[3];
	this->isSuccess = false;
}

SquareTable::SquareTable() {
	st = new Seat[SQUARE_NUM];
	stuNum = 0;
}

int SquareTable::getTotalSeat(){	//���̺��� �� �¼� �� ��ȯ
	return SQUARE_NUM;
}

bool SquareTable:: isFull() {
	if(stuNum == 0)
		return true;
	else
		return false;
}
	
int SquareTable::getNum() {		//���̺� ���ִ� �ڸ� �� ��ȯ
	return stuNum;
}

bool SquareTable::studentIn(int index, Student* stu) {			
    if (index<0 || index >(SQUARE_NUM-1)){			//�߸��� index ��
	    printf("studentIn�Լ����� �߸��� index��\n");	
	    return false;
    }
		
    if(st[index].IsOn() == true){		//index ��°�� �ڸ��� �л��� �ɾ�������
	   printf("studentIn�Լ����� index ��° �ڸ��� �л��� �ִµ� ������ ���!\n");	
	   return false;
    }

	else {								//index ��°�� �ڸ��� �л��� ������
		st[index].On(stu);				//�л��� ����
		stuNum++;
		printf("square table %d th seat in\n", index);
		return true;
	}
}

bool SquareTable::studentOut(int index) {			//�л��� ���̺��� ������ �ൿ
    if(index<0 || index>(SQUARE_NUM-1)) {   //�߸��� index ��
	   printf("studentOut�Լ����� �߸��� index��\n");	
	   return false;
    }

    if(st[index].IsOn() == false)	{	//index ��°�� �л��� ������
	   printf("studentOut�Լ����� index ��°  �л��� ���µ� ������� ���!\n");	
	   return false;
    }

	else {								//�ڸ��� �л��� ������
		st[index].Off();				//�л��� ����
		stuNum--;
		return true;
	}
}

void SquareTable::findProperSeat_New(int personNum, TableInfo& info){
	TableInfo retInfo(4);		retInfo.personNum = 0;		info.seatNum = new int[4];
	bool isSeat[4];
	bool isSearchOK = true;
	if(personNum<=4 && personNum>=2){			//�Ѹ��� square table�� ���� �� ����.
		for(int loop=0; loop<4; loop++){
			if(!this->st[loop].IsOn()){
				isSeat[loop] = false;
				info.seatNum[retInfo.personNum] = loop;
				retInfo.personNum++;			
			}
			else{
				isSearchOK = false;
				break;
			}
		}
		if(isSearchOK){
			retInfo.coupling = 0;
			if(retInfo.personNum == 0)
				retInfo.isSuccess = false;
			else
				retInfo.isSuccess = true;
	

			info.coupling = retInfo.coupling;
			info.isSuccess = retInfo.isSuccess;
			info.personNum = retInfo.personNum;
		}
		else{
			info.coupling = 0;
			info.isSuccess = false;
			info.personNum = 0;
			info.seatNum[0];
		}
	}
	else{
		info.coupling = 0;
		info.isSuccess = false;
		info.personNum = 0;
		for(int loop=0; loop<4; loop++){
			info.seatNum[loop] = 0;
		}
	}
}

RectTable::RectTable() {
	st = new Seat[RECT_NUM];
	stuNum = 0;
}

int RectTable::getTotalSeat(){
	return RECT_NUM;
}

bool RectTable:: isFull() {
	if(stuNum == 0)
		return true;
	else
		return false;
}
	
int RectTable::getNum() {
	return stuNum;
}

bool RectTable::studentIn(int index, Student* stu) {			
    if (index<0 || index >(RECT_NUM-1)){			//�߸��� index ��
	    printf("studentIn�Լ����� �߸��� index��\n");	
	    return false;
    }
		
    if(st[index].IsOn() == true){		//index ��°�� �ڸ��� �л��� �ɾ�������
	   printf("studentIn�Լ����� index ��° �ڸ��� �л��� �ִµ� ������ ���!\n");	
	   return false;
    }

	else {								//index ��°�� �ڸ��� �л��� ������
		st[index].On(stu);				//�л��� ����
		stuNum++;
		printf("rect table %d th seat in\n", index);
		return true;
	}
}

bool RectTable::studentOut(int index) {			//�л��� ���̺��� ������ �ൿ
    if(index<0 || index>(RECT_NUM-1)) {   //�߸��� index ��
	   printf("studentOut�Լ����� �߸��� index��\n");	
	   return false;
    }

    if(st[index].IsOn() == false)	{	//index ��°�� �л��� ������
	   printf("studentOut�Լ����� index ��°  �л��� ���µ� ������� ���!\n");	
	   return false;
    }

	else {								//�ڸ��� �л��� ������
		st[index].Off();				//�л��� ����
		stuNum--;
		return true;
	}
}
void RectTable::findProperSeat_New(int personNum, TableInfo& info){
	int* bin = new int[14];			
	bestFitBin(personNum, bin);
	/*
	for(int loop=0; loop<=13; loop++){
		printf("%d ", bin[loop]);
	}
	printf("\n");
	*/
	TableInfo retInfo(bin[0]);	// ��ȯ�� ����
	retInfo.coupling = bin[13];
	retInfo.personNum = bin[0];

	for(int loop=0; loop<bin[0]; loop++){
		retInfo.seatNum[loop] = bin[loop+1];
	}

	info = retInfo;
	if(info.personNum == 0)
	    info.isSuccess = false;
	else
	    info.isSuccess = true;
}

int RectTable::calcCoupling(int* seatList){
	// seatList[0]���� ��� ��, ���ķδ� seat�� ���� ������ �������.
	// this->st[loop].IsOn�� check�ؼ�, boolean�� �迭�� ���� �� ����.
	bool isTableSeat[2][6];	// seat�� ����� �ִ����� ���� ����
	
	
	for(int loop1=0; loop1<2; loop1++){	// isTableSeat[2][7]�� �ʱ�ȭ
		for(int loop2=0; loop2<6; loop2++){
			isTableSeat[loop1][loop2] = this->st[loop1+(2*loop2)].IsOn();
		}
	}
	for(int loop=0; loop<seatList[0]; loop++){	// seatList�� ������ �ʱ�ȭ
		int temp = seatList[loop+1];
		isTableSeat[temp%2][temp/2] = true;
	}

	int coupling=0;
	for(int i=0; i<6; i++){
		 if(isTableSeat[0][i]){	// (i, 0)�� ��� ������ ���
			 if(isTableSeat[1][i])	// �� �¼��� ��� ������ ���
				 coupling+=2;		// ������ += 2 (���η� ����)
			 if(i<5)				
				if(isTableSeat[0][i+1])	// ������ �¼��� ��� ������ ���
					coupling++;		// ������ += 1 (���η� ����)
		 }
	}
	for(int i=0; i<6; i++){
		if(isTableSeat[1][i])	// (i, 1)�� ��� ������ ���
			if(i<5)
				if(isTableSeat[1][i+1])	// ������ �¼��� ��� ������ ���
					coupling++;		// ������ += 1 (���η� ����)
	}

	return coupling;
}

void RectTable::bestFitBin(int personNum, int* bin){
	int* retVal = new int[1+RECT_NUM+1];	// ù ĭ���� ��� ��, �� ���ķδ� seat # �� ����, ������ ĭ���� �������� ����.
	int allSeatNum = this->getTotalSeat();	// �� �ڸ� ���� �ִ´�.
	int binMaxNum = 100;	// bin Ž����, bin�� ũ�� �񱳸� ���� ����
	bool isTableSeat[2][6];	// seat�� ����� �ɾ��ִ����� ���� ����
	
	for(int loop1=0; loop1<2; loop1++){	// isTableSeat[2][6]�� �ʱ�ȭ
		for(int loop2=0; loop2<6; loop2++){
			isTableSeat[loop1][loop2] = this->st[loop1+(2*loop2)].IsOn();
		}
	}

	for(int loop=0; loop<(1+RECT_NUM+1); loop++){
		retVal[loop] = 0;
	}

	for(int startSeatNum_x=0; startSeatNum_x<allSeatNum/2;  startSeatNum_x++){
		int* seatList = new int[1+RECT_NUM+1];
		int x = startSeatNum_x;
		bool isFirstTry = true;
		bool isCornered = false;
		for(int loop=0; loop<14; loop++){
			seatList[loop] = 0;
		}
		while(1){
			// seatList[1+RECT_NUM+1] ����..
			// 0 : ��� ��
			// 1~12 : �¼� �ڸ�
			// 13 : ������
			// �� ������ ����� �� while�� ���� �� �����.


			if(x==6)	// ���� �� �˻��� �õ��ϴ� ���
				break;

			if(seatList[0] >= personNum)
				break;

			if(isFirstTry){	// ó�� �˻��� �õ��ϴ� ���
				if(isTableSeat[0][x] && isTableSeat[1][x])	// �� �ڸ� ��� �ȵǴ� ���
					break;
				else if(isTableSeat[0][x] && !isTableSeat[1][x]){	// �Ʒ��ڸ��� ������ ���
					isCornered = true;					// ���� �ڸ��� �Ҵ������� ǥ��
					seatList[0]++;
					seatList[seatList[0]] = 2*x+1;		// �ڸ� �Ҵ�
					isFirstTry = false;
				}
				else if(!isTableSeat[0][x] && isTableSeat[1][x]){	// ���ڸ��� ������ ���
					isCornered = true;					// ���� �ڸ��� �Ҵ������� ǥ��
					seatList[0]++;
					seatList[seatList[0]] = 2*x;		// �ڸ� �Ҵ�
					isFirstTry = false;
				}
				else if(!isTableSeat[0][x] && !isTableSeat[1][x]){		// �� �� ������ ���
					seatList[0]++;
					seatList[seatList[0]] = 2*x;
					seatList[0]++;
					seatList[seatList[0]] = 2*x+1;		// �ڸ� �Ҵ� x2
					isFirstTry = false;
				}
				x++;	// ���� �˻�����..
			}
			else if(!isFirstTry){	// ó�� �˻��� �õ��ϴ� ��찡 �ƴ� ���
				if(isTableSeat[0][x] && !isTableSeat[1][x]){	// �Ʒ��ڸ��� ������ ���
					if(isCornered)	// �̹� ���� �ڸ��� �Ҵ��� ���
						break;
					else if(!isCornered){	// ���� �ڸ��� �Ҵ����� ���� ���
						seatList[0]++;
						seatList[seatList[0]] = 2*x+1;	// �ڸ� �Ҵ� �� ����
						break;
					}
				}
				else if(!isTableSeat[0][x] && isTableSeat[1][x]){	// ���ڸ��� ������ ���
					if(isCornered)	// �̹� ���� �ڸ��� �Ҵ��� ��� ����
						break;
					else if(!isCornered){	// ���� �ڸ��� �Ҵ����� ���� ���
						seatList[0]++;
						seatList[seatList[0]] = 2*x;	// �ڸ� �Ҵ� �� ����
						break;
					}
				}
				else if(isTableSeat[0][x] && isTableSeat[1][x])	// �� �ڸ� ��� �ȵǴ� ���
					break;	// �Ҵ� ����
				else if(!isTableSeat[0][x] && !isTableSeat[1][x]){		// �� �ڸ� ��� �Ǵ� ���
					seatList[0]++;
					seatList[seatList[0]] = 2*x;
					seatList[0]++;
					seatList[seatList[0]] = 2*x+1;	// �ڸ� �Ҵ� x2
				}
				x++;	// ���� �˻�����..
			}
		}

		// �� while�� ���� ��..
			// seatList[1+RECT_NUM+1] ����..
			// 0 : ��� ��
			// 1~12 : �¼� �ڸ� ��ȣ
			// 13 : ������
			// �� ������ ����� �� while�� ���� �� �����.

		if(seatList[0] < personNum)	// Bin�� ũ�Ⱑ ����ġ�� ���� ���
			continue;

		else if(seatList[0] >= personNum){	// Bin�� ũ�Ⱑ ����� ���
			if(seatList[0] < binMaxNum){	// ���� ã�� Bin���� ũ�Ⱑ ���� ��� (best fit�� ����, bin�� ������ ����)
				binMaxNum = seatList[0];
				for(int i=0; i<14; i++){
					retVal[i]=0;			// ��ȯ �� �ʱ�ȭ
				}
				for(int i=1; i<=binMaxNum; i++){
					retVal[i] = seatList[i];// ��ȯ �� ����
				}
				retVal[0] = seatList[0];	// ��� �� ����
				retVal[13] = calcCoupling(retVal);
			}
			else if(seatList[0] == binMaxNum){	// ���� ã�� Bin�� ũ�Ⱑ ���� ��� (������ ���)
				int result1 = calcCoupling(retVal);	// ������ ��ȯ
				int result2 = calcCoupling(seatList);	// result1 < result2 �̸� ���� ã�� Bin�� ����
				if(result1 <= result2){	// ���� ã�� Bin(seatList)�� �����̹Ƿ� ��ü
					for(int i=0; i<14; i++){
						retVal[i]=0;
					}
					for(int i=1; i<=binMaxNum; i++){
						retVal[i] = seatList[i];
					}
					retVal[0] = seatList[0];
					retVal[13] = result2;
				}

			}
		}
	}
	// �� for�� ���� ��, retVal����...
		// 0 : bin�� ũ��
		// 1~12 : �¼� �ڸ� ��ȣ
		// 13 : ������
	// �� ����.
	for(int loop=0; loop<=13; loop++){
		bin[loop] = retVal[loop];
	}
	if(personNum%2 == 1 && bin[0]%2 == 0 && personNum<bin[0]){
		bin[0]--;
		for(int loop=1; loop<12; loop++){
			bin[loop] = bin[loop+1];
		}
		bin[12] = 0;
		bin[13] = calcCoupling(bin);
	}
	else if(personNum%2 == 0 && bin[0]%2 == 1 && personNum<bin[0]){
		if(bin[1]%2==0){	// �޺κ� �ڸ���
			bin[bin[0]] = 0;
			bin[0]--;
			bin[13] = calcCoupling(bin);
		}
		else if(bin[1]%2 == 1){	// �պκ� �ڸ���
			bin[0]--;
			for(int loop=1; loop<12; loop++){
				bin[loop] = bin[loop+1];
			}			
			bin[12] = 0;
			bin[13] = calcCoupling(bin);
		}
	}
}
