#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int num, mArray[11] = {0,1,2,3,4,5,6,7,8,9,10};
	for (int i = 0; i < 11; i++)
	{
		mArray[i] = mArray[i] * mArray[i];
		cout << mArray[i] << endl;
	}
	for (int i = 0; i > -1; i++)
	{
		try
		{
			cout << "Enter the num whose square you want:\t";
			cin >> num;
			if (num>10)
				throw num;
			else
				cout << mArray[num] << endl;
		}
		catch (int num)
		{
			cout << "Oops you have exceeded index of the pre-defined array size" << endl;
			break;
		}
	}
	getch();
	return(0);
}
