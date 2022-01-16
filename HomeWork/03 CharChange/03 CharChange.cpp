#include <iostream>

int Len(char* _Text)
{
	int i = 0;
	while (*(_Text + i) != 0)
	{
		i += 1;
	}
	return i;
}

void CharChange(char* _Text, char _Prev, char _Next)
{
	for (int j = 0; j < Len(_Text); j += 1)
	{
		if (*(_Text + j) == _Prev)
		{
			*(_Text + j) = _Next;
		}

	}
}

int main()
{
	char Text[100] = "aa, bb, cc, dd";

	CharChange(Text, ',', '|');
	// aa| bb| cc| dd

	printf_s(Text);
}