#include"stdafx.h"

class Num
{
	int a, b;
public:
	Num(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	friend void Compare(Num);
};
void Compare(Num test)
{
	if (test.a>test.b)
		cout << test.a << " is greater than " << test.b;
	else if (test.a == test.b)
		cout << "Both " << test.a << " and " << test.b << " are equal";
	else
		cout << test.b << " is greater than " << test.a;
}
int main()
{
	int Num1, Num2;
	cout << "The Number#1:\t";
	cin >> Num1;
	cout << "The Number#2:\t";
	cin >> Num2;
	Num Check(Num1, Num2);
	Compare(Check);
	_getch();
	return(0);
}