#pragma once
#include "Geometry.h"
#include "Trail.h"


struct Bullet {
	Position2 pos;//À•W
	Vector2 vel;//‘¬“x
	bool isActive = false;//¶‚«‚Ä‚é‚©`H
};

class HomingShot : public Bullet
{

};

