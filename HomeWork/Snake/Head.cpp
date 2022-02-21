#include "Head.h"
#include <conio.h>
#include "Body.h"

Head::Head()
{
}

Head::~Head()
{
	// 경고 발생 했었으나 다시 빌드하니 사라짐
	// 경고 내용 : C4150 불완전한 형식 'Body'에 대한 포인터를 삭제했습니다. 소멸자가 호출되지 않습니다.
	for (Body* body : AllBody)
	{
		delete body;
		body = nullptr;
	}
}


void Head::Update()
{
	int Value = _getch();

	switch (Value)
	{
	case 'a':
	case 'A':
		// 화면바깥으로 이동하면 이동이 안되게 해주세요.
		InScreenMovement({ -1, 0 });
		break;
	case 'd':
	case 'D':
		InScreenMovement({ 1, 0 });
		break;
	case 'w':
	case 'W':
		InScreenMovement({ 0, -1 });
		break;
	case 's':
	case 'S':
		InScreenMovement({ 0, 1 });
		break;
	case 'q':
	case 'Q':
		// 무슨일인가가 벌어져서
		// 게임이 종료된다.
		Death();
		return;
	default:
		break;
	}

	return;
}



void Head::OverLap(ConsoleObject* _Link)
{
	AllBody.push_back((Body*)_Link);
}