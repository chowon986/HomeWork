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
int CountLast(const char* _Text, int _End, const char* _FindStr)
{
	int FindStrLen = Len(_FindStr);
	int a = Len(_Text);
	for (int j = _End; j >= 0; j -= 1)
	{
		int i = 0;
		while (*(_Text + j - i) == *(_FindStr + i) && i < FindStrLen - 1)
		{
			i += 1;

		}
		if (i == FindStrLen - 1)
		{
			return _End - j;
		}
	}
	return -1;
}

int main()
{
	int Count = CountLast("aaa eee ttt asdfasd eee", 15, "eee");
	printf_s("%d", Count);
}