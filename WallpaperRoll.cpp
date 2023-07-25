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
	std::cout << "Название обоев: " << name << std::endl;
	std::cout << "Стоимость обоев за 1 метр квадратный: " << costMetreWallpaperRoll
	<< "\n\n";
}

char* WallpaperRoll::getNameWallpaperRoll(){
	return name;
}

int WallpaperRoll::getCostMetreWallpaperRoll() {
	return costMetreWallpaperRoll;
}