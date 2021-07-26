#pragma once
#include "Geometry.h"
#include <list>

class HomingShot;//(������)������

//�O��
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