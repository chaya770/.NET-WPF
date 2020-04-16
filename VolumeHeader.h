#pragma once
class VolumeHeader 
{
public:
	unsigned int sectorNr;
	char diskName [12];
	char diskOwner[12];
	char prodDate[10];
	unsigned int ClusQty;
	unsigned int dataClusQty ;
	unsigned int addrDAT;
	unsigned int addrRootDir;
	unsigned int addrDATcpy;
	unsigned int addrRootDirCpy ;

	unsigned int addrDataStart ;
	char formatDate[10] ;
	bool isFormated ;
	char emptyArea [947] ;

	VolumeHeader();
	VolumeHeader(unsigned int sectorNr, char diskName[12], char diskOwner[12], char prodDate[10], unsigned int ClusQty, unsigned int dataClusQty, unsigned int addrDAT, unsigned int addrRootDir, unsigned int addrDATcpy, unsigned int addrRootDirCpy,
		unsigned int addrDataStart,
		char formatDate[10],
		bool isFormated,
		char emptyArea[947]);
	VolumeHeader& operator=(const VolumeHeader &);
	void print();
};