#include <iostream>

#include <Room.h>

Room::Room(){
	
	wallpaperAreaMetre = 0;
}


Room::~Room(){
	
	delete[] nameRoom;
}

void Room::initRoom(int l, int w, int h, WallpaperRoll wallpaper, const char* name) {
	strcpy(nameRoom, name);
	length = l;
	width = w;
	height = h;
	//wallpaperRoll = wallpaper;
	wallpaperAreaMetre = 2 * (length * height + width * height);
	costWallpaperOnRoom = wallpaperAreaMetre * wallpaper.getCostMetreWallpaperRoll();
}

void Room::printRoom() {
	std::cout << "Комната: " << nameRoom << std::endl;
	std::cout << "Длина комнаты: " << length << std:: endl;
	std::cout << "Ширина комнаты: " << width << std::endl;
	std::cout << "Высота потолков: " << height << std::endl;
	std::cout << "Площадь обоев для комнаты: "<< wallpaperAreaMetre << std::endl;
	std::cout << "Обои в комнате: " << wallpaperRoll.getNameWallpaperRoll() << std::endl;
	std::cout << "Стоимость обоев в комнате: " << wallpaperRoll.getNameWallpaperRoll() << "\n\n";
}


int Room::getWallpaperArea() {
	return wallpaperAreaMetre;
}

int Room::getCostWallpaperOnRoom() {
	return costWallpaperOnRoom;
}


char* Room::getNameThisRoom() {
	return nameRoom;
}

WallpaperRoll Room::getWallpaperRoll() {
	return wallpaperRoll;
}