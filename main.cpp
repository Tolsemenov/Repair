#include <iostream>


#include <Room.h>
//#include <Flat.h>

int main(int argc, char **argv){
	setlocale(LC_ALL, "ru");
	//Flat flat;
	
	
	WallpaperRoll wallpaperRoll1{ "Yellow", 500 };
	WallpaperRoll wallpaperRoll2;

	wallpaperRoll1.printWallpaperRoll();

	//WallpaperRoll - ��� ������������ ������, ����� ������� ����� ����������
	Room room1{ 3, 3, 3, wallpaperRoll2, "������ �������" };
	Room room2(2, 3, 3, {"Green", 200}, "�������� �������");
	Room room3(5, 3, 3, wallpaperRoll1, "��������");
	
	room1.print();
	room2.print();
	room3.print();
	

	system("pause");

}