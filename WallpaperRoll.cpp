#include <iostream>
#include <WallpaperRoll.h>

WallpaperRoll::WallpaperRoll(){
	
	
}


WallpaperRoll::~WallpaperRoll(){
	 
	delete [] name;
}

void WallpaperRoll::initWallpaperRoll(const char* nameWallpaperRoll, int costWallpaperRoll) {
	strcpy(name, nameWallpaperRoll);
	costMetreWallpaperRoll = costWallpaperRoll;
}

void WallpaperRoll::printWallpaperRoll() {
	std::cout << "�������� �����: " << name << std::endl;
	std::cout << "��������� ����� �� 1 ���� ����������: " << costMetreWallpaperRoll
	<< "\n\n";
}

char* WallpaperRoll::getNameWallpaperRoll(){
	return name;
}

int WallpaperRoll::getCostMetreWallpaperRoll() {
	return costMetreWallpaperRoll;
}