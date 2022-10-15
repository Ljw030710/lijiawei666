#include<iostream>
using namespace std;
int main()
{
	int c;
	for (int i = 1; i <= 10; ++i)
	{
		for (int j = 1; j <= 10 - i; j++)cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)
		{

			for (int a = 1; a <= j; a++)
				c = 'A' + (a - 1);
			cout << char(c);
		}
		cout << '\n';
	}
	return 0;
}