#pragma once
#include <iostream>
#include "VolumeHeader.h"
#include "Dat.h"
#include "DirEntry.h"
#include "Dir.h"
#include <fstream>
#include "sector.h"
using namespace std;
class Disk
{
public:

	VolumeHeader vhd;
	Dat dat;
	RootDir rootdir;
	bool mounted;
	fstream dskfl;
	unsigned int currDiskSectorNr;
	//level 0
	Disk();
	Disk(string & diskname, string & diskowner, char ch);
	void createdisk(string &, string &);
	void mountdisk(string &);
	~Disk();
	void unmountdisk();
	void recreatedisk(string &);
	fstream* getdskfl();
	void seekToSector(unsigned int);
	void writeSector(unsigned int, Sector*);
	void writeSector(Sector*);
	void readSector(unsigned int, Sector*);
	void readSector(Sector*);
	void setSectorData(int sectorNum, char buffer[1020]);

	//level 1
	void format(string & d);
	int howmuchempty();
	void alloc(DATtype &, unsigned int, unsigned int);
	void allocextend(DATtype &, unsigned int, unsigned int);
	void dealloc(DATtype &);
	void firstFit(DATtype & fat, unsigned int secNum);
	void bestFit(DATtype & fat, unsigned int secNum);
	void worstFit(DATtype & fat, unsigned int secNum);
	void print();
};
