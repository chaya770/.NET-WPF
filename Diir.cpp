#include "Dir.h"
#include <iostream>
using namespace std;

SectorDir::SectorDir()
{
	for(int i = 0; i< 12; i++)
	{
		unUse[i]='\0';
	}
	sectorNR=0;
}
RootDir::RootDir()
{
	
}
RootDir::~RootDir()
{
}