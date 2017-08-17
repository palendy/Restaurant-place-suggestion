#ifndef __INCLUDE_H
#define __INCLUDE_H

#include <iostream>
#include "table.h"
#include "manager.h"


#define NUMBER_OF_SQUARE 3
#define NUMBER_OF_RECT 2
#define NUMBER_OF_TABLE (NUMBER_OF_SQUARE + NUMBER_OF_RECT)

extern bool possibleSeat [5][12];
extern Manager rest;

//void Manager();
//void seatFinder();

#endif