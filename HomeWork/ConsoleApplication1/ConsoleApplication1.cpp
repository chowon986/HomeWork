#include <iostream>



int Len2(const char& _Left)
{
	int i = 0;
	while ((_Left + i) != 0)
	{
		i += 1;
	}
	return i;
}

int main()
{

	{
		int b = Len2("12abCcEee");
		std::cout << b;
	}
}