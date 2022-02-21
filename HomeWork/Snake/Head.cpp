#include "Head.h"
#include <conio.h>
#include "Body.h"

Head::Head()
{
}

Head::~Head()
{
	// ��� �߻� �߾����� �ٽ� �����ϴ� �����
	// ��� ���� : C4150 �ҿ����� ���� 'Body'�� ���� �����͸� �����߽��ϴ�. �Ҹ��ڰ� ȣ����� �ʽ��ϴ�.
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
		// ȭ��ٱ����� �̵��ϸ� �̵��� �ȵǰ� ���ּ���.
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
		// �������ΰ��� ��������
		// ������ ����ȴ�.
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