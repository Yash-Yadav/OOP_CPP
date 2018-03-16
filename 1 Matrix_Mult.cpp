#include "stdafx.h"
class Matrix
{
	int r[20][20];
	int m, n;

public:
	void input()
	{
		cout << "Enter the no. of Rows->\n";
		cin >> m;
		cout << "Enter the no. of Columns->\n";
		cin >> n;
		cout << "Matrix:" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> r[i][j];
			}
		}
	}
	void output()
	{
		cout << "Answer:" << endl;
		for (int i = 0; i < m; i++)
		{
			cout << endl;
			for (int j = 0; j < n; j++)
			{
				cout << r[i][j] << "\t";
			}
		}
	}
	void multiply(Matrix A, Matrix B)
	{
		if (A.n != B.m)
		{
			cout << "Matrix multiplicaiton is not possible";
		}
		else
		{
			for (int i = 0; i < A.m; i++)
			{
				cout << endl;
				for (int j = 0; j < B.n; j++)
				{
					r[i][j] = 0;
					for (int k = 0; k < A.n; k++)
					{
						r[i][j] = r[i][j] + (A.r[i][k] * B.r[k][j]);
						m = A.m;
						n = B.n;
					}
				}
			}
		}
	}
};

void main()
{
	Matrix m1, m2, mR;
	cout << "Details for matrix A:" << endl;
	m1.input();	
	cout << "Details for matrix B:" << endl;
	m2.input();
	mR.multiply(m1, m2);
	mR.output();
	_getch();
}