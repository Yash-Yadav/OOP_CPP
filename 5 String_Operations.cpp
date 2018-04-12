#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;

class mString
{
public:
	enum { sizeStr = 100 };
	char str[sizeStr] = "This is a Demo String Again!";
	int length;
	void displaylen()
	{
		length = strlen(str);
		cout << "The length of the above string is:\t" << length << endl;
	}
	void displaystr()
	{
		cout << str << endl;
	}
	void toU()
	{
		for(int i = 0; i < length; i++)
            str[i] = toupper(str[i]);
	}
	void toL()
	{
		for (int i = 0; i < length; i++)
			str[i] = tolower(str[i]);
	}
};
int main()
{
	mString s1;
	s1.displaystr();
	s1.displaylen();
	cout << "Conversion to UpperCase:\t";
	s1.toU();
	s1.displaystr();
	cout << "Conversion to LowerCase:\t";
	s1.toL();
	s1.displaystr();

	getch();
	return(0);
}
