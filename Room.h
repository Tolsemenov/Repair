
#include <WallpaperRoll.h>
class Room {
private:
	const int SIZE = 20;
	char* nameRoom = new char[SIZE];
	int length;
	int width;
	int height;
	int wallpaperAreaMetre;
	
	int costWallpaperOnRoom;
	WallpaperRoll wallpaperRoll;

public:
	

	Room();

	~Room();
	void initRoom(int l, int w, int h, WallpaperRoll wallpaper,const char* name);
	void printRoom();
	int getWallpaperArea();
	int getCostWallpaperOnRoom();
	char* getNameThisRoom();
	WallpaperRoll getWallpaperRoll();
};
