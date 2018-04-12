#include <iostream>
#include <conio.h>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	fstream fobj1;
	char wBuffer[50] = "0";
	string Head[5] = { "Name","Age","sex","Fav Sport","Fav Color" };
	fobj1.open("Demo4.txt", ios::binary | ios::out);
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the value of " << Head[i] << ":\t";
		cin >> wBuffer;
		fobj1 << Head[i] << ":\t";
		fobj1.write(wBuffer, strlen(wBuffer));
		fobj1.put(13);
		fobj1 << endl;
		cout << wBuffer << endl;
	}
	fobj1.close();

	cout << endl << "The content of file is:" << endl;
	char rBuffer[50];
	fobj1.open("Demo4.txt", ios::in);
	while (!fobj1.eof())
	{
		fobj1.getline(rBuffer, sizeof(rBuffer));
		cout << rBuffer << endl;
	}
	fobj1.close();

	getch();
}
