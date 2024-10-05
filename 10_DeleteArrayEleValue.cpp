// Insertion element in array any position
#include <iostream>
using namespace std;

int main()
{
    int a[10] = {23, 43, 12, 62, 97, 54, 24}, e, s;
    cout << "Enter the delete element : ";
    cin >> e;

    for (int i = 10; i >= 0; i--)
    {
        if (a[i] == e)
        {
            s = i;
        }
    }

    for (int i = s; i <= 10; i++)
    {
        int del = a[i];
        a[i] = a[i + 1];
        a[i + 1] = del;
    }

    for (int j = 0; j < 6; j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}
