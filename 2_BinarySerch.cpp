#include <iostream>
using namespace std;

int main()
{
    int a[6] = {2, 5, 6, 9, 11, 16}; // sorted
    int k = 5;
    int l = 0, h = 6;
    while (l <= h)
    {
        int mid = ((l + h) / 2);
        if (a[mid] == k)
        {
            cout << "Value Index is : " << mid;
            break;
        }
        else if (a[mid] > k)
        { // <-
            h = mid - 1;
        }
        else if (a[mid] < k)
        { // ->
            l = mid + 1;
        }
    }
    return 0;
}
