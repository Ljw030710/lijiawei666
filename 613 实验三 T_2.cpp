#include<iostream>
using namespace std;
int main()
{
	double a, b, s, tmp;
	s = 0;
	a = 2;
	b = 1;
	for (int i = 0; i < 20; i++)
	{
		s += a / b;
		tmp = a + b;
		b = a;
		a = tmp;

	}
	cout << "sum = " << s << endl;
}