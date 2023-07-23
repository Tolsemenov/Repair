#include <iostream>
#include <Room.h>

Room::Room(){
	
	
}


Room::~Room(){
	
	
}

void Room::initRoom(int l, int w, int h, WallpaperRoll wallpaper, char name) {
	nameRoom = name;
	length = l;
	width = w;
	height = h;
	wallpaperRoll = wallpaper;
	wallpaperArea = 2 * (length * height + width * height);
}

void Room::printRoom() {
	std::cout << "Комната: ";
	std::cout << nameRoom << std::endl;

	std::cout << "Длинна комнаты: " ;
	std::cout << length << std:: endl;

	std::cout << "Ширина комнаты: ";
	std::cout << width << std::endl;

	std::cout << "Высота потолков: ";
	std::cout << height << std::endl;

	std::cout << "Площадь обоев для комнаты: : ";
	std::cout << wallpaperArea << std::endl;

	std::cout << "Обои в комнате: : ";
	std::cout << wallpaperRoll.name << std::endl;
}


int Room::getWallpaperArea() {
	return wallpaperArea;
}

int Room::getCostWallpaperOnRoom() {
	return costWallpaperOnRoom;
}


char Room::nameThisRoom() {
	return nameRoom;
}