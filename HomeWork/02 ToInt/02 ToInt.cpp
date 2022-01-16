#include <iostream>

int Len(const char* left)
{
	int i = 0;
	while (*(left + i) != 0)
	{
		i += 1;
	}
	return i;
}
int ToInt(const char* _Left)
{
	int Sum = 0;
	for (int j = 0; j < Len(_Left); j += 1)
	{
		int number = 1;
		for (int k = 0; k < Len(_Left) - 1 - j; k += 1)
		{
			number *= 10;
		}
		int a = (*(_Left + j) - '0') * number;
		Sum += a;
	}
	return Sum;
}

int main()
{
	char Text = '1';
	int Count = '2';

	Len("15815");
	int Value = ToInt("15815");
	printf_s("%d", Value);
	// printf_s ("%d", 4*5) int 값을 부호있는 10진수로 출력
	// 20
}