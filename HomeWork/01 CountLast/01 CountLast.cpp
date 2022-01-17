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
    int a = Len(_Text);
    for (int j = _End; _End < (a + 1); j -= 1)
    {
        if (*(_Text + j) == *_FindStr)
        {
            return _End - j;
        }
        return -1;
    }
}

int main()
{
    int Count = CountLast("aaa eee asdfasd eee", 3, "eee");
    printf_s("%d", Count);
}