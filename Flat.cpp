#include <iostream>
#include <Room.h>
#include <Flat.h>


Flat::Flat(){
	
	costAllWallpaper = 0;
}


Flat::~Flat(){
	delete[] allRooms;
	
}



void Flat::initRoom(int countRoom, Room rooms[], char name) {
	nameFlat = name;
	for (int i = 0; i < countRoom; i++) {
		allRooms[i] = rooms[i];
		costAllWallpaper += rooms[i].getCostWallpaperOnRoom();
	}
	
}


void Flat::printFlat() {
	std::cout << "Название квартиры: " << nameFlat << std::endl;

	std::cout << "Количество комнат: " << nameFlat << std::endl;

	for (int i = 1; i <= countRoom; i++) {
		std::cout << i << ") Комната: " << allRooms[i].nameThisRoom()
			<< ", в комнате обои: " << allRooms[i].nameWallpaperRoll << std::endl;
	}

	std::cout << "Площадь обоев для комнаты: : ";
	std::cout << wallpaperArea. << std::endl;

	std::cout << "Обои в комнате: : ";
	std::cout << wallpaperRoll.name << std::endl;
}
