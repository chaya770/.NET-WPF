#pragma once
#include "DirEntry.h"
class SectorDir
{
public:
	int sectorNR;
	DirEntry direntry [14];
	char unUse [12];

	SectorDir();
	
};
class RootDir
{ 
public:
	SectorDir msbSector;
    SectorDir lsbSector;

	RootDir();
	~RootDir();

};
