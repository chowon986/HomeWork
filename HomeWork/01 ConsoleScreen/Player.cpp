#include "Player.h"
#include <conio.h>

Player::Player(TextScreen* _Screen, const char* _Text)
	: Screen_(_Screen)
	, Pos_(_Screen->GetSize().GetHalfVector())
	, Text_()
{
	if (nullptr == _Screen)
	{
		assert(false);
	}

	for (int i = 0; i < 3; i++)
	{
		Text_[i] = _Text[i];
	}
}

Player::~Player()
{

}

// 숙제 : Screen 밖을 나가면 assert함수 작동하게 만들기
void Player::Update()
{
	int Value = _getch();

	switch (Value)
	{
	case 'a':
	case 'A':
		if (Pos_.x_ > 0)
		{
			Pos_.x_ -= 1;
		}
		else
		{
			assert(false);
		}
		break;
	case 'd':
	case 'D':
		if (Pos_.x_ < Screen_->GetSize().x_ - 1)
		{
			Pos_.x_ += 1;
		}
		else
		{
			assert(false);
		}
		break;
	case 'w':
	case 'W':
		if (Pos_.y_ > 0)
		{
			Pos_.y_ -= 1;
		}
		else
		{
			assert(false);
		}
		break;
	case 's':
	case 'S':
		if (Pos_.y_ < Screen_->GetSize().y_ - 1)
		{
			Pos_.y_ += 1;
		}
		else
		{
			assert(false);
		}
	default:
		break;
	}
}

void Player::Render()
{
	Screen_->SetPixel(Pos_, Text_);
}