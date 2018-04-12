#include <iostream>
#include <conio.h>
using namespace std;

template <typename Demo>
Demo square(Demo i)
{
	return(i*i);
}

int main()
{
	double Num;
	cout << "Enter the Number whose square you want!\t";
	cin >> Num;
	cout << "For Int type:\t" << square<int>(Num) << endl;
	cout << "For double type:\t" << square<double>(Num) << endl;

	getch();
	return(0);
}
