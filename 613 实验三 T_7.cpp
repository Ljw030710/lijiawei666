#include <iostream>
using namespace std;
int main()
{
    int i, j, k;

    for (i = 0; i <= 20; i++)
    {
        for (j = 0; j <= 33; j++)
        {
            for (k = 0; k <= 100; k += 3)
            {
                if ((i + j + k) == 100 && (5 * i + 3 * j + k / 3) == 100)
                {
                    cout <<"����= "<< i << ' '<<"ĸ��=" << j << ' '<<"С��=" << k << endl;
                }
            }
        }
    }
    return 0;
}