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

void ToUpper(const char* _Left, char* _Right)
{
	for (int j = 0; j < Len(_Left); j += 1)
	{
		if (*(_Left + j) >= 'a')
		{
			*(_Right + j) = *(_Left + j) - ('a' - 'A');
		}
		else
		{
			*(_Right + j) = *(_Left + j);
		}
	}
}

int main()
{

	{
		char Text[10000] = { 0, };
		int a = Len("12abCcEee");
		ToUpper("12abCcEee", Text);
		printf_s(Text);
	}
}