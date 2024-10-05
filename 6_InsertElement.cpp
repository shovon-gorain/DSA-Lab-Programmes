// Insertion element in array any position
#include <iostream>
using namespace std;

int main()
{
    int a[10] = {23, 43, 12, 62, 97, 54, 24}, p, e, i = 10;
    cout << "Enter the position of element : ";
    cin >> p;
    cout << "Enter the element : ";
    cin >> e;

    while (i >= p)
    {
        int temp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = temp;
        if (i==p)
        {
            a[i-1]=e;
        }
        i--;
    }

    for (int j = 0; j < 8; j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}