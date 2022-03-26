#include <iostream>
using namespace std;
int LinearSearch(int arr[], int n, int key);
int LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i+1;
    }
    return -1;
}
void Display(int arr[0], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {30, 23, 45, 10, 80, 45, 25, 19};
    int key;
    int size = sizeof(arr) / sizeof(arr[0]);
    Display(arr, size);
    cout << "\nEnter key to search : ";
    cin >> key;
    int ans = LinearSearch(arr, size, key);
    (ans==-1)? cout << "Element not found " << endl:cout << "Element fount at position : " << ans;
    return 0;
}
    
        
