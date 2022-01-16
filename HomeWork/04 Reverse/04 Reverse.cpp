#include <iostream>

int Len(const char* text)
{
	int i = 0;
	while (*(text + i) != 0)
	{
		i += 1;
	}
	return i;
}

void Reverse(const char* _Source, char* _Result)
{
	int i = 0;
	int len = Len(_Source);

	for (i = 0; i < (len / 2); i += 1)
	{
		*(_Result + i) = *(_Source + (len - 1 - i));
		*(_Result + (len - 1 - i)) = *(_Source + i);
	}
}

int main()
{
	char Text[100] = { };
	Reverse("0123456789", Text);
	printf_s(Text);
}
