

class WallpaperRoll {

private:
	char m_name[100];
	int m_costMetreWallpaperRoll = 0;

	void initWallpaperRoll(const char* nameWallpaperRoll, int costWallpaperRoll);
public:
	//� ������������ ����� ��������� ���������������� ��� ����
	//������� ���� ��� ������������ �� �����
	WallpaperRoll();
	WallpaperRoll(const char* nameWallpaperRoll, int costWallpaperRoll);

	~WallpaperRoll(){}

	
	void printWallpaperRoll();

	char* getNameWallpaperRoll();
	int getCostMetreWallpaperRoll();
};