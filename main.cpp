#include <iostream>


#include <Room.h>
//#include <Flat.h>

int main(int argc, char **argv){
	setlocale(LC_ALL, "ru");
	//Flat flat;
	Room room1;
	Room room2;
	Room room3;
	WallpaperRoll wallpaperRoll1;
	WallpaperRoll wallpaperRoll2;

	wallpaperRoll1.initWallpaperRoll("Yellow", 500);
	wallpaperRoll1.printWallpaperRoll();

	room1.initRoom(3, 3, 3, wallpaperRoll2, "Ванная комната");
	room2.initRoom(2, 3, 3, wallpaperRoll2, "Спальная комната");
	room2.initRoom(5, 3, 3, wallpaperRoll1, "Гостиная");
	
	room1.printRoom();
	



}