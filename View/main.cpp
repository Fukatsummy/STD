#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int i, j, n, c, x = 0;
	cout << "¬ведите число: ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		x = x + i;
		for (j = 1; j <= i; j++)
		{
			c = (i % 2 == 1) ? x + j - i : x - j + 1;
			cout << c << " ";
		}
		cout << endl;
	}
	//return 0;
}