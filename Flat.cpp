//#include <iostream>
//
//#include <Flat.h>
//
//
//Flat::Flat(){
//	
//	costAllWallpaper = 0;
//}
//
//
//Flat::~Flat(){
//	delete[] allRooms;
//	
//}
//
//
//
////void Flat::initRoom(int countRoom, Room rooms[], char name) {
////	nameFlat = name;
////	for (int i = 0; i < countRoom; i++) {
////		allRooms[i] = rooms[i];
////		costAllWallpaper += rooms[i].getCostWallpaperOnRoom();
////	}
////	
////}
//
//
//void Flat::printFlat() {
//	std::cout << "�������� ��������: " << nameFlat << std::endl;
//
//	std::cout << "���������� ������: " << nameFlat << std::endl;
//
//	for (int i = 1; i <= countRoom; i++) {
//		std::cout << i << ") �������: " << allRooms[i].nameThisRoom() << std::endl
//			//<< "	� ������� ����: " << allRooms[i].getWallpaperRoll().nameWallpaperRoll() << std::endl
//			<< "	������� ����� ��� �������: " << allRooms[i].getWallpaperArea() << std::endl
//			<< "	��������� ����� ��� �������: " << allRooms[i].getCostWallpaperOnRoom() << std::endl;
//	}
//
//}
//
//
//int Flat::getCostAllWallpaper(){
//	return costAllWallpaper;
//
//}
