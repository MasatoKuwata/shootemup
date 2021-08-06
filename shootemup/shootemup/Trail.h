#pragma once
#include<list>
#include "Geometry.h"
struct HomingShot;

// �O�ՃN���X
class Trail
{
private:
	int handle_;
	HomingShot& owner_;
	std::list<Position2>history_;		// �ꏊ����
public:
	Trail(HomingShot& owner);
	void SetHandle(int hanble);
	void Update();
	void Draw();
	void Clear();
};

