// Binary Search
#include <bits/stdc++.h>
using namespace std;
int_fast16_t BinarySearch(int arr[], int size, int key)
{
    int low = 0, high = size, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
            return mid;
        else if (key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
void Display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {10, 20, 5, 24, 50, 15, 40};
    int key;
    int n = sizeof(arr) / sizeof(arr[0]); // size of array
    sort(arr, (arr + n));
    Display(arr, n);
    cout << "\nEnter key to search : ";
    cin >> key;
    int ans = BinarySearch(arr, n, key);
    if (ans == -1)
        cout << "Element not found ";
    else
        cout << "Element found at position : " << ans + 1 << endl;
    return 0;
}