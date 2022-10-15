#include<iostream>
using namespace std;
int main()
{
	double sum, n;
	sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		double tmp = 1;
		for (int j = 1; j <= i; j++)
		{
			tmp *= j;
		}
		sum += tmp;
	}
	cout << "×ÜºÍÎª"<<sum << endl;
	return 0;
}