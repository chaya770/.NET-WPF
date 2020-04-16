
#pragma once
#include <bitset>
using namespace std;
typedef bitset<1600> DATtype;
class Dat
{
public:
	unsigned int sectorNr ;
    DATtype DAT;
    char emptyArea [970];
public:
	Dat();
};