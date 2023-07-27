#include <iostream>
#include <Room.h>

void Room::initRoom(int l, int w, int h, WallpaperRoll wallpaper, const char* name) {
	strcpy(nameRoom, name);
	length = l;
	width = w;
	height = h;
	wallpaperRoll = wallpaper;
	wallpaperAreaMetre = 2 * (length * height + width * height);
	costWallpaperOnRoom = wallpaperAreaMetre * wallpaper.getCostMetreWallpaperRoll();
}

Room::Room(int l, int w, int h, WallpaperRoll wallpaper, const char* name) {
	Room::initRoom(l, w, h, wallpaper, name);
}



void Room::print() {
	std::cout << "�������: " << nameRoom << std::endl;
	std::cout << "����� �������: " << length << std:: endl;
	std::cout << "������ �������: " << width << std::endl;
	std::cout << "������ ��������: " << height << std::endl;
	std::cout << "������� ����� ��� �������: "<< wallpaperAreaMetre << std::endl;
	std::cout << "���� � �������: " << wallpaperRoll.getNameWallpaperRoll() << std::endl;
	std::cout << "��������� ����� � �������: " << wallpaperRoll.getCostMetreWallpaperRoll() << "\n\n";
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