#include<iostream>
using namespace std;
int main()
{
	char a;
	int n, i, j, m;
	while (cin >> a >> n)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n - i; j++)
			{
				cout << ' ';
			}
			for (m = 1; m <= 2 * i - 1; m++)
			{
				cout << a;
			}
			cout << endl;
		}
	}
	return 0;
}