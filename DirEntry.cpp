#include "DirEntry.h"
#include <iostream>
using namespace std;

DirEntry::DirEntry()
{

    fileAddr=0;
	fileSize=0;
	eofRecNr=0 ;
    maxRecSize=0;
	actualRecSize=0;	
	keyOffset=0;
	keySize=0;
	entryStatus=0;
	for(int i =0;i<2;i++)
	{
		recFormat[i]='\0';
		keyType [i]='\0';
	}
	for(int i = 0;i<10;i++)
			crDate[i]='\0';
	for(int i =0; i<12;i++)
		fileOwner[i]='\0';

}