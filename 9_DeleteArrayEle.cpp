#include <iostream>
using namespace std;

int main()
{
    int a[] = {23, 43, 12, 62, 97, 54, 24}, I;
    cout << "Enter the delete element on the array : ";
    cin >> I;

    for (int i = I; i <= 6; i++)
    {
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }

    for (int j = 0; j <= 6; j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}
