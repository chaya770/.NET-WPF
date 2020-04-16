# include <iostream>
# include "VolumeHeader.h"
using namespace std;

VolumeHeader::VolumeHeader()
{
	sectorNr = 0;
}
VolumeHeader::VolumeHeader(unsigned int sectorNr, char diskName[12], char diskOwner[12], char prodDate[10], unsigned int ClusQty, unsigned int dataClusQty, unsigned int addrDAT, unsigned int addrRootDir, unsigned int addrDATcpy, unsigned int addrRootDirCpy,

	unsigned int addrDataStart,
	char formatDate[10],
	bool isFormated,
	char emptyArea[947])
{
	this->sectorNr=sectorNr;
	strcpy(this->diskName, diskName);
	strcpy(this->diskOwner, diskOwner);
	strcpy(this->prodDate, prodDate);
	this->ClusQty=ClusQty;
	this->dataClusQty=dataClusQty;
	this->addrDAT=addrDAT;
	this->addrRootDir=addrRootDir;
	this->addrDATcpy=addrDATcpy;
	this->addrRootDirCpy = addrRootDirCpy;

	this-> addrDataStart=addrDataStart;
	strcpy(this->formatDate, formatDate);
	this->isFormated=isFormated;
	strcpy(this->emptyArea, emptyArea);
}
VolumeHeader& VolumeHeader::operator=(const VolumeHeader & v)
{
	sectorNr = v.sectorNr;
	strcpy(diskName, v.diskName);
	strcpy(diskOwner, v.diskOwner);
	strcpy(prodDate, v.prodDate);
	ClusQty = v.ClusQty;
	dataClusQty = v.dataClusQty;
	addrDAT = v.addrDAT;
	addrRootDir = v.addrRootDir;
	addrDATcpy = v.addrDATcpy;
	addrRootDirCpy = v.addrRootDirCpy;

	addrDataStart = v.addrDataStart;
	strcpy(formatDate, v.formatDate);
	isFormated = v.isFormated;
	strcpy(emptyArea, v.emptyArea);
	return (*this);
}
void VolumeHeader::print()
{
	cout<< sectorNr<<diskName<<diskOwner<<prodDate<<ClusQty<<dataClusQty<<addrDAT<<addrRootDir<<addrDATcpy<<addrRootDirCpy<<endl;
}