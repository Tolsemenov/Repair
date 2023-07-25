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
//	std::cout << "Название квартиры: " << nameFlat << std::endl;
//
//	std::cout << "Количество комнат: " << nameFlat << std::endl;
//
//	for (int i = 1; i <= countRoom; i++) {
//		std::cout << i << ") Комната: " << allRooms[i].nameThisRoom() << std::endl
//			//<< "	В комнате обои: " << allRooms[i].getWallpaperRoll().nameWallpaperRoll() << std::endl
//			<< "	Площадь обоев для комнаты: " << allRooms[i].getWallpaperArea() << std::endl
//			<< "	Стоимость обоев для комнаты: " << allRooms[i].getCostWallpaperOnRoom() << std::endl;
//	}
//
//}
//
//
//int Flat::getCostAllWallpaper(){
//	return costAllWallpaper;
//
//}
