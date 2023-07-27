
#include <WallpaperRoll.h>
class Room {
private:
	char nameRoom[100];
	int length = 0;
	int width = 0;
	int height = 0;
	int wallpaperAreaMetre = 0;
	
	int costWallpaperOnRoom = 0;
	WallpaperRoll wallpaperRoll = {};

	void initRoom(int l, int w, int h, WallpaperRoll wallpaper, const char* name);
public:
	

	Room(){}
	Room(int l, int w, int h, WallpaperRoll wallpaper, const char* name);

	~Room(){}
	void print();
	int getWallpaperArea();
	int getCostWallpaperOnRoom();
	char* getNameThisRoom();
	WallpaperRoll getWallpaperRoll();
};
