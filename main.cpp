#include <iostream>


#include <Room.h>
//#include <Flat.h>

int main(int argc, char **argv){
	setlocale(LC_ALL, "ru");
	//Flat flat;
	
	
	WallpaperRoll wallpaperRoll1{ "Yellow", 500 };
	WallpaperRoll wallpaperRoll2;

	wallpaperRoll1.printWallpaperRoll();

	//WallpaperRoll - без динамической памяти, можем сколько хотим копировать
	Room room1{ 3, 3, 3, wallpaperRoll2, "Ванная комната" };
	Room room2(2, 3, 3, {"Green", 200}, "Спальная комната");
	Room room3(5, 3, 3, wallpaperRoll1, "Гостиная");
	
	room1.print();
	room2.print();
	room3.print();
	

	system("pause");

}