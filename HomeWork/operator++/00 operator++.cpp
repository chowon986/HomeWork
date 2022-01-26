#include <iostream>
using namespace std;

class MyInt
{
public:
	int MyValue = 0;

public:
	MyInt(int _Value)
		:MyValue(_Value)
	{

	}

public:
	MyInt operator+();
	MyInt operator+=(int);
	MyInt& operator++();
	MyInt operator++(int);
};

MyInt MyInt::operator+=(int a)
{
	MyValue = MyValue + a;
	return MyValue;
}

MyInt MyInt::operator+()
{
	int a = 0;
	int b = 0;
	MyValue = a + b;
	return MyValue;
}
MyInt& MyInt::operator++()
{
	MyValue = MyValue + 1;
	return *this;
}

MyInt MyInt::operator++(int MyValue)
{
	MyInt temp = *this;
	*this += 1;
	return temp;
}

int main()
{
	int Value = 0;
	int Result = 0;

	Result = ++Value;
	Result = 0;
	Result = Value++;

	MyInt MyValue = 0;
	MyInt MyResult = 0;

	MyResult = ++MyValue;
	MyResult = 0;
	MyResult = MyValue++;

	int a = 0;
}

// MyResult에 MyValue값이 들어가야하는데