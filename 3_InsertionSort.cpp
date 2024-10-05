#include <iostream>
using namespace std;

int main()
{
    int a[8] = {8, 7, 6, 3, 4, 1, 2, 5};
    for (int i = 1; i < 8; i++)
    {
        int temp = a[i];
        int p = i - 1;
        while (p >= 0 && a[p] >= temp)
        {
            a[p + 1] = a[p];
            p--;
            a[p + 1] = temp;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}