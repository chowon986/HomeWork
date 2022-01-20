#include <iostream>

class Player
{
public:
	char Hp1;
	int Att;
};

class Test
{
};

class Test2
{
public:
	char Hp1;
	int Att;
	__int64 Damage;
	char Mp1;
	int Hp2;
};

class Test3
{
public:
	int Att;
	char Hp1;
	__int64 Damage;
	char Mp1;
	int Hp2;
};

int main()
{
	int Value = int();
	Player NewPlayer = Player();

	int PlayerSize = sizeof(NewPlayer);

	/* ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ
	   288 289 290 291 292 293 294 295
	   Hp1             Att
	*/

	Test NewTest = Test();
	int TestSize = sizeof(NewTest);

	// 아무것도 넣지 않으면 size는 1

	Test2 NewTest1 = Test2();

	int NewTestSize = sizeof(NewTest1);

	/*  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ
		368 369 370 371 372 373 374 375 376 377 378 379 380 381 382 383 384 385 386 387 388 389 390 391
		Hp1             Att            Damage                           Mp1             Hp2

	*/

	Test3 NewTest2 = Test3();

	int NewTestSize2 = sizeof(NewTest2);

	/*  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ  ㅁ
		184 185 186 187 188 189 190 191 192 193 194 195 196 197 198 199 200 201 202 203 204 205 206 207
		Att             Hp1            Damage                           Mp1             Hp2

	    int 뒤에 char가 올 때는 char가 int 바로 뒤에 이어서 나온다.
		char 뒤에 int가 올 때는 int가 뒤에서부터 4번째에 위치한다.
	*/
}