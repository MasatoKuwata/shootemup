#pragma once
#include "Geometry.h"
#include <list>

class HomingShot;//(—š—ğ‚Ì)‚¿å

//‹OÕ
class Trail
{
public:
	Trail(HomingShot& hom);
	void Update();
	void Draw();

private:
	std::list<Position2> homingPositions_;
	HomingShot& homing_;
};