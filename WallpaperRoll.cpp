#include <iostream>
#include <WallpaperRoll.h>

void WallpaperRoll::initWallpaperRoll(const char* nameWallpaperRoll, int costWallpaperRoll) {
	strcpy(m_name, nameWallpaperRoll);
	m_costMetreWallpaperRoll = costWallpaperRoll;
}

WallpaperRoll::WallpaperRoll() {
	m_name[0] = '\0';
}

WallpaperRoll::WallpaperRoll(const char* nameWallpaperRoll, int costWallpaperRoll){
	initWallpaperRoll(nameWallpaperRoll, costWallpaperRoll);
}



void WallpaperRoll::printWallpaperRoll() {
	std::cout << "�������� �����: " << m_name << std::endl;
	std::cout << "��������� ����� �� 1 ���� ����������: " << m_costMetreWallpaperRoll
	<< "\n\n";
}

char* WallpaperRoll::getNameWallpaperRoll(){
	return m_name;
}

int WallpaperRoll::getCostMetreWallpaperRoll() {
	return m_costMetreWallpaperRoll;
}