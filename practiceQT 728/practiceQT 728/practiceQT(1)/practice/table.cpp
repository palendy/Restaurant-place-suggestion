#include "table.h"

Seat::Seat() {
	isSit = false;
	this->stu = NULL;
}

void Seat:: On(Student* stu) {			//학생이 자리에 앉음
		isSit = true;
		this->stu = stu;
}

void Seat:: Off() {				//학생이 자리에서 나감
		isSit = false;
		this->stu = NULL;
}

bool Seat::IsOn() {				//자리가 있는지 없는지 확인
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

int SquareTable::getTotalSeat(){	//테이블의 총 좌석 수 반환
	return SQUARE_NUM;
}

bool SquareTable:: isFull() {
	if(stuNum == 0)
		return true;
	else
		return false;
}
	
int SquareTable::getNum() {		//테이블에 차있는 자리 수 반환
	return stuNum;
}

bool SquareTable::studentIn(int index, Student* stu) {			
    if (index<0 || index >(SQUARE_NUM-1)){			//잘못된 index 값
	    printf("studentIn함수에서 잘못된 index값\n");	
	    return false;
    }
		
    if(st[index].IsOn() == true){		//index 번째의 자리에 학생이 앉아있으면
	   printf("studentIn함수에서 index 번째 자리에 학생이 있는데 앉으라 명령!\n");	
	   return false;
    }

	else {								//index 번째의 자리에 학생이 없으면
		st[index].On(stu);				//학생을 앉힘
		stuNum++;
		printf("square table %d th seat in\n", index);
		return true;
	}
}

bool SquareTable::studentOut(int index) {			//학생이 테이블에서 나가는 행동
    if(index<0 || index>(SQUARE_NUM-1)) {   //잘못된 index 값
	   printf("studentOut함수에서 잘못된 index값\n");	
	   return false;
    }

    if(st[index].IsOn() == false)	{	//index 번째에 학생이 없으면
	   printf("studentOut함수에서 index 번째  학생이 없는데 나가라는 명령!\n");	
	   return false;
    }

	else {								//자리에 학생이 있으면
		st[index].Off();				//학생이 나감
		stuNum--;
		return true;
	}
}

void SquareTable::findProperSeat_New(int personNum, TableInfo& info){
	TableInfo retInfo(4);		retInfo.personNum = 0;		info.seatNum = new int[4];
	bool isSeat[4];
	bool isSearchOK = true;
	if(personNum<=4 && personNum>=2){			//한명은 square table에 앉을 수 없음.
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
    if (index<0 || index >(RECT_NUM-1)){			//잘못된 index 값
	    printf("studentIn함수에서 잘못된 index값\n");	
	    return false;
    }
		
    if(st[index].IsOn() == true){		//index 번째의 자리에 학생이 앉아있으면
	   printf("studentIn함수에서 index 번째 자리에 학생이 있는데 앉으라 명령!\n");	
	   return false;
    }

	else {								//index 번째의 자리에 학생이 없으면
		st[index].On(stu);				//학생을 앉힘
		stuNum++;
		printf("rect table %d th seat in\n", index);
		return true;
	}
}

bool RectTable::studentOut(int index) {			//학생이 테이블에서 나가는 행동
    if(index<0 || index>(RECT_NUM-1)) {   //잘못된 index 값
	   printf("studentOut함수에서 잘못된 index값\n");	
	   return false;
    }

    if(st[index].IsOn() == false)	{	//index 번째에 학생이 없으면
	   printf("studentOut함수에서 index 번째  학생이 없는데 나가라는 명령!\n");	
	   return false;
    }

	else {								//자리에 학생이 있으면
		st[index].Off();				//학생이 나감
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
	TableInfo retInfo(bin[0]);	// 반환할 변수
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
	// seatList[0]에는 사람 수, 이후로는 seat에 대한 정보가 들어있음.
	// this->st[loop].IsOn을 check해서, boolean형 배열을 만들 수 있음.
	bool isTableSeat[2][6];	// seat에 사람이 있는지에 대한 정보
	
	
	for(int loop1=0; loop1<2; loop1++){	// isTableSeat[2][7]의 초기화
		for(int loop2=0; loop2<6; loop2++){
			isTableSeat[loop1][loop2] = this->st[loop1+(2*loop2)].IsOn();
		}
	}
	for(int loop=0; loop<seatList[0]; loop++){	// seatList를 적용한 초기화
		int temp = seatList[loop+1];
		isTableSeat[temp%2][temp/2] = true;
	}

	int coupling=0;
	for(int i=0; i<6; i++){
		 if(isTableSeat[0][i]){	// (i, 0)이 사용 가능한 경우
			 if(isTableSeat[1][i])	// 밑 좌석이 사용 가능한 경우
				 coupling+=2;		// 응집도 += 2 (세로로 인접)
			 if(i<5)				
				if(isTableSeat[0][i+1])	// 오른쪽 좌석이 사용 가능한 경우
					coupling++;		// 응집도 += 1 (가로로 인접)
		 }
	}
	for(int i=0; i<6; i++){
		if(isTableSeat[1][i])	// (i, 1)이 사용 가능한 경우
			if(i<5)
				if(isTableSeat[1][i+1])	// 오른쪽 좌석이 사용 가능한 경우
					coupling++;		// 응집도 += 1 (가로로 인접)
	}

	return coupling;
}

void RectTable::bestFitBin(int personNum, int* bin){
	int* retVal = new int[1+RECT_NUM+1];	// 첫 칸에는 사람 수, 그 이후로는 seat # 가 들어가고, 마지막 칸에는 응집도가 들어간다.
	int allSeatNum = this->getTotalSeat();	// 총 자리 수를 넣는다.
	int binMaxNum = 100;	// bin 탐색시, bin의 크기 비교를 위해 쓰임
	bool isTableSeat[2][6];	// seat에 사람이 앉아있는지에 대한 정보
	
	for(int loop1=0; loop1<2; loop1++){	// isTableSeat[2][6]의 초기화
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
			// seatList[1+RECT_NUM+1] 에는..
			// 0 : 사람 수
			// 1~12 : 좌석 자리
			// 13 : 응집도
			// 를 대입한 결과가 이 while문 실행 후 저장됨.


			if(x==6)	// 범위 외 검색을 시도하는 경우
				break;

			if(seatList[0] >= personNum)
				break;

			if(isFirstTry){	// 처음 검색을 시도하는 경우
				if(isTableSeat[0][x] && isTableSeat[1][x])	// 두 자리 모두 안되는 경우
					break;
				else if(isTableSeat[0][x] && !isTableSeat[1][x]){	// 아래자리만 가능한 경우
					isCornered = true;					// 구석 자리를 할당했음을 표시
					seatList[0]++;
					seatList[seatList[0]] = 2*x+1;		// 자리 할당
					isFirstTry = false;
				}
				else if(!isTableSeat[0][x] && isTableSeat[1][x]){	// 윗자리만 가능한 경우
					isCornered = true;					// 구석 자리를 할당했음을 표시
					seatList[0]++;
					seatList[seatList[0]] = 2*x;		// 자리 할당
					isFirstTry = false;
				}
				else if(!isTableSeat[0][x] && !isTableSeat[1][x]){		// 둘 다 가능한 경우
					seatList[0]++;
					seatList[seatList[0]] = 2*x;
					seatList[0]++;
					seatList[seatList[0]] = 2*x+1;		// 자리 할당 x2
					isFirstTry = false;
				}
				x++;	// 다음 검색으로..
			}
			else if(!isFirstTry){	// 처음 검색을 시도하는 경우가 아닌 경우
				if(isTableSeat[0][x] && !isTableSeat[1][x]){	// 아래자리만 가능한 경우
					if(isCornered)	// 이미 구석 자리를 할당한 경우
						break;
					else if(!isCornered){	// 구석 자리를 할당하지 않은 경우
						seatList[0]++;
						seatList[seatList[0]] = 2*x+1;	// 자리 할당 후 종료
						break;
					}
				}
				else if(!isTableSeat[0][x] && isTableSeat[1][x]){	// 윗자리만 가능한 경우
					if(isCornered)	// 이미 구석 자리를 할당한 경우 종료
						break;
					else if(!isCornered){	// 구석 자리를 할당하지 않은 경우
						seatList[0]++;
						seatList[seatList[0]] = 2*x;	// 자리 할당 후 종료
						break;
					}
				}
				else if(isTableSeat[0][x] && isTableSeat[1][x])	// 두 자리 모두 안되는 경우
					break;	// 할당 종료
				else if(!isTableSeat[0][x] && !isTableSeat[1][x]){		// 두 자리 모두 되는 경우
					seatList[0]++;
					seatList[seatList[0]] = 2*x;
					seatList[0]++;
					seatList[seatList[0]] = 2*x+1;	// 자리 할당 x2
				}
				x++;	// 다음 검색으로..
			}
		}

		// 이 while문 실행 후..
			// seatList[1+RECT_NUM+1] 에는..
			// 0 : 사람 수
			// 1~12 : 좌석 자리 번호
			// 13 : 응집도
			// 를 대입한 결과가 이 while문 실행 후 저장됨.

		if(seatList[0] < personNum)	// Bin의 크기가 지나치게 작은 경우
			continue;

		else if(seatList[0] >= personNum){	// Bin의 크기가 충분한 경우
			if(seatList[0] < binMaxNum){	// 여태 찾은 Bin보다 크기가 작은 경우 (best fit에 따라, bin을 새로이 지정)
				binMaxNum = seatList[0];
				for(int i=0; i<14; i++){
					retVal[i]=0;			// 반환 값 초기화
				}
				for(int i=1; i<=binMaxNum; i++){
					retVal[i] = seatList[i];// 반환 값 대입
				}
				retVal[0] = seatList[0];	// 사람 수 대입
				retVal[13] = calcCoupling(retVal);
			}
			else if(seatList[0] == binMaxNum){	// 여태 찾은 Bin과 크기가 같은 경우 (응집도 계산)
				int result1 = calcCoupling(retVal);	// 응집도 반환
				int result2 = calcCoupling(seatList);	// result1 < result2 이면 새로 찾은 Bin이 최적
				if(result1 <= result2){	// 새로 찾은 Bin(seatList)이 최적이므로 교체
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
	// 이 for문 실행 후, retVal에는...
		// 0 : bin의 크기
		// 1~12 : 좌석 자리 번호
		// 13 : 응집도
	// 가 들어간다.
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
		if(bin[1]%2==0){	// 뒷부분 자르기
			bin[bin[0]] = 0;
			bin[0]--;
			bin[13] = calcCoupling(bin);
		}
		else if(bin[1]%2 == 1){	// 앞부분 자르기
			bin[0]--;
			for(int loop=1; loop<12; loop++){
				bin[loop] = bin[loop+1];
			}			
			bin[12] = 0;
			bin[13] = calcCoupling(bin);
		}
	}
}
