#include<iostream>
using namespace std;
int main()
{
	double PI = 1;
	for (double i = 1; i <= 1000; i++)
	{
		PI *= (2 * i / (2 * i - 1)) * (2 * i / (2 * i + 1));
	}
	PI = PI * 2;
	cout << "PI = " << PI << endl;
}