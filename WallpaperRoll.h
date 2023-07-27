

class WallpaperRoll {

private:
	char m_name[100];
	int m_costMetreWallpaperRoll = 0;

	void initWallpaperRoll(const char* nameWallpaperRoll, int costWallpaperRoll);
public:
	//В конструкторе нужно стараться инициализировать все поля
	//Функция инит для пользователя не нужна
	WallpaperRoll();
	WallpaperRoll(const char* nameWallpaperRoll, int costWallpaperRoll);

	~WallpaperRoll(){}

	
	void printWallpaperRoll();

	char* getNameWallpaperRoll();
	int getCostMetreWallpaperRoll();
};