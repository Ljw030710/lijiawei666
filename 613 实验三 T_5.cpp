#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 4 - i; j++)
		{
			cout << ' ';
		}
		for (int j = 5 - i; j <= 4; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3 - i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
}


