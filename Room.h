#include <WallpaperRoll.h>


class Room {
private:
	char nameRoom;
	int length;
	int width;
	int height;
	int wallpaperArea;
	WallpaperRoll wallpaperRoll;
	int costWallpaperOnRoom;

public:
	Room();

	~Room();
	void initRoom(int l, int w, int h, WallpaperRoll wallpaper, char name);
	void printRoom();
	int getWallpaperArea();
	int getCostWallpaperOnRoom();
	char nameThisRoom();
};
