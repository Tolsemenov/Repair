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
	std::cout << "�������: ";
	std::cout << nameRoom << std::endl;

	std::cout << "������ �������: " ;
	std::cout << length << std:: endl;

	std::cout << "������ �������: ";
	std::cout << width << std::endl;

	std::cout << "������ ��������: ";
	std::cout << height << std::endl;

	std::cout << "������� ����� ��� �������: : ";
	std::cout << wallpaperArea << std::endl;

	std::cout << "���� � �������: : ";
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