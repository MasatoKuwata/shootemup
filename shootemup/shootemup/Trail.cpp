#include <DxLib.h>
#include "HomingShot.h"
#include "Trail.h"

constexpr size_t trail_limit = 8;

Trail::Trail(HomingShot& hom) : homing_(hom)
{
}

void Trail::Update()
{
	//—š—ð‚ðXV‚·‚é
	if (homing_.isActive)
	{
		homingPositions_.push_front(homing_.pos);
		if (homingPositions_.size() > trail_limit)
		{
			homingPositions_.pop_back();
		}
	}
}

void Trail::Draw()
{
	if (homing_.isActive)
	{
		auto lastPos = homing_.pos;
		for (const auto& pos : homingPositions_)
		{
			if (lastPos == pos)continue;
			DrawLineAA(lastPos.x, lastPos.y, pos.x, pos.y, 0xffffff, thickness);
		}
	}
}
