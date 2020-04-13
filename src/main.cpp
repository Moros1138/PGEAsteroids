#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class PGE_Asteroids : public olc::PixelGameEngine
{
public:
	PGE_Asteroids()
	{
		sAppName = "PGEAsteroids";
	}

public:
	
	bool OnUserCreate() override
	{
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		return true;
	}
};

int main()
{
	PGE_Asteroids app;
	if(app.Construct(640, 480, 1, 1))
		app.Start();

	return 0;
}
