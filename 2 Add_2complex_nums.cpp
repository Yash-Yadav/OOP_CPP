#include "stdafx.h"

class ComplexNum
{	
public:
	float Real, Img;
	ComplexNum()
	{
		Real = Img = 0;
	}
	ComplexNum(float a)
	{
		Real = Img = a;
	}
	ComplexNum(float Real, float Img)
	{
		this->Real = Real;
		this->Img = Img;
	}
	void display()
	{
		cout << Real << " + " << Img << "i";
	}
};
void main()
{
	ComplexNum CN1(2), CN2(23.5, 40.1), CN3;
	cout << "Complex No1:\t";
	CN1.display();
	cout << endl << "Complex No2:\t";
	CN2.display();
	CN3.Real = CN1.Real + CN2.Real;
	CN3.Img = CN1.Img + CN2.Img;
	cout << endl << "Result:\t\t";
	CN3.display();
	_getch();
}