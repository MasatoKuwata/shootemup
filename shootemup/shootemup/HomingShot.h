#pragma once
#include "Geometry.h"
#include "Trail.h"


struct Bullet {
	Position2 pos;//���W
	Vector2 vel;//���x
	bool isActive = false;//�����Ă邩�`�H
};

class HomingShot : public Bullet
{

};
