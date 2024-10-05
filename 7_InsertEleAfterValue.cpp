// Insertion element in array any position
#include <iostream>
using namespace std;

int main()
{
    int a[10] = {23, 43, 12, 62, 97, 54, 24}, v, e, s;
    cout << "Enter the position of element after you want to insert the value : ";
    cin >> v;
    cout << "Enter the element : ";
    cin >> e;

    for (int i = 10; i >= 0; i--)
    {
        if (a[i] == v)
        {
            s = i;
        }
    }

    for (int i = 10; i >= s+1; i--)
    {
        int temp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = temp;
        if (i == s+1)
        {
            a[i - 1] = e;
        }
    }

    for (int j = 0; j < 8; j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}
