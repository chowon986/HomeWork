#include <iostream>

int Len(const char* _Left)
{
	int i = 0;
	while (*(_Left + i) != 0)
	{
		i += 1;
	}
	return i;
}

int CountFirst(const char* _Text, int _Start, const char* _FindStr)
{
	int TextLen = Len(_Text);
	int FindStrLen = Len(_FindStr);

	for (int j = _Start; j < TextLen; j += 1)
	{
		int i = 0;
		while (*(_Text + j + i) == *(_FindStr + i) && i < FindStrLen - 1)
		{
			i += 1;
		}

		if (i == FindStrLen - 1)
		{
			return j - _Start;
		}
	}
	return -1;
}

int main()
{
	int Count = CountFirst("aaa eee ttt asdfasd eee", 15, "eee");
	printf_s("%d", Count);
}