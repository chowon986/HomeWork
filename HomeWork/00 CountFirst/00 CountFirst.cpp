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
    int a = Len(_Text);

    for (int j =_Start; j<a; j+=1)
    {
        if (*(_Text+j) == *_FindStr)
        {
            return j-_Start;
        }
    }
    return -1;
}

int main()
{
    int Count = CountFirst("aaa eee ttt asdfasd eee", 15, "eee");
    printf_s("%d", Count);
}