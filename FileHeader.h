#pragma once
#include "DirEntry.h"
#include "Dat.h"
using namespace std;
struct Location
{
	short startLoc;  // The first cluster in area
	short size;	     // The number of clusters in area
};
class FileHeader
{
	unsigned int sectorNr;
	DirEntry fileDesc;
	DATtype FAT;
	char emptyArea[140];
	int			arraySize;
	Location LocArray[150];

	//FileHeader(void);
	//~FileHeader(void);


};



