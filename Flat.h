#include <Room.h>
#include <WallpaperRoll.h>

class Flat {
private:
	int countRoom;
	char nameFlat;
	Room* allRooms = new Room [countRoom];
	int costAllWallpaper;
	

public:
	Flat();

	~Flat();

	void initRoom(int countRoom, Room rooms[], char name);
	void printFlat();
	int getAllWallpaper();
};