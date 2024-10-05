#include <iostream>
using namespace std;

void merge(int a[], int s, int mid, int l)
{
    int temp[l];
    int i = s, j = mid + 1, k = s;

    while (i <= mid && j <= l)
    {
        if (a[i] <= a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = a[i++];
    }

    while (j <= l)
    {
        temp[k++] = a[j++];
    }

    for (int x = s; x <= l; x++)
    {
        a[x] = temp[x];
    }
}

void divide(int a[], int s, int l)
{
    if (s < l)
    {
        int mid = (s + l) / 2;
        divide(a, s, mid);
        divide(a, mid + 1, l);
        merge(a, s, mid, l);
    }
}


int main()
{
    int a[] = {12, 3, 4, 45, 87, 6, 56, 76};
    int l = 8;
    divide(a, 0, l);
    cout << "Sorted array is : ";
    for (int i = 0; i <= 8; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
