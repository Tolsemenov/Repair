

class WallpaperRoll {

private:
	const int SIZE = 15;
	char* name = new char [SIZE];
	int costMetreWallpaperRoll;			//1 ì2

	
public:
	WallpaperRoll();

	~WallpaperRoll();

	void initWallpaperRoll(const char* nameWallpaperRoll, int costWallpaperRoll);
	void printWallpaperRoll();

	char* getNameWallpaperRoll();
	int getCostMetreWallpaperRoll();
};