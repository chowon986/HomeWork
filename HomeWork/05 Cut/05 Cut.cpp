#include <iostream>

void Cut(const char* _Source, int _Start, int _End, char* _Result)
{
	for (int i = 0; i < (_End - _Start + 1); i += 1)
	{
		*(_Result + i) = *(_Source + (_Start + i));
	}
}

int main()
{
	{
		char Text[100] = { };
		Cut("0123456789", 2, 7, Text);
		// "234567"
		printf_s(Text);
	}
}
