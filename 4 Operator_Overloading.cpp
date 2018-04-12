#include <iostream>
#include <conio.h>
#include<string.h>

using namespace std;

class mString
{
	enum { sizeStr = 100 };
	char str[sizeStr];
public:
	mString()
	{
		strcpy(str, "");
	}
	mString(char s[])
	{
		strcpy(str, s);
	}
	void display()
	{
		cout << str;
	}
	mString operator + (mString ss) const
	{
		mString temp;
		if ((strlen(str)+strlen(ss.str))<sizeStr)
		{
			strcpy(temp.str, str);
			strcat(temp.str, ss.str);
		}
		else
		{
			cout << "Oops! the size of Resultant string is less";
		}
		return(temp);
	}
	mString operator == (mString ss2) const
	{
		mString temp;
		strcpy(temp.str, ss2.str);
		return(temp);
	}
	bool operator <= (mString ss)
	{
		return (strcmp(str, ss.str) == 0) ? true : false;
	}
};
int main()
{
    cout << "Understanding Operation Overloading";
	mString s1 = "This is Demo1 string";
	mString s2 = "This is Demo2 string";
	mString s3;
	cout << endl << "String 1:\t";
	s1.display();

	cout << endl << "String 2:\t";
	s2.display();

	cout << endl << "String 3:\t";
	s3.display();

	s3 = s1 + s2;   //Concatenation
	cout << endl << "String 3 After concatenation:\t";
	s3.display();

	s2 = s2 == s3;	//Copying
	cout << endl << "String 2 after copying:\t";
	s2.display();

	bool Result = (s2 <= s3);   //Comparing
	cout << endl << "The two strings (S2 and S3) are Same:\t";
	if(Result)
        cout << "True";
    else
       cout << "False";
    getch();
	return(0);
}
