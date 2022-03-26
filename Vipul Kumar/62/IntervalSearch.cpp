#include <iostream>
using namespace std;

void LinearSearch(int arr[], int size, int key)
{
  int low = 0, high = 0;
  for (int i = 1; i < size; i = 2 * i)
  {
    if (key == arr[i])
    {
      cout << "Element found at position : " << i+1 << endl;
      break;
    }
    else
    {
      if (key > arr[i])
      {
        low = i;
      }
      else if (key < arr[i])
      {
        high = i;
        break;
      }
    }
  }
  for (int i = low; i < high; i++)
  {
    if (key == arr[i])
    {
      cout << "Element found at postion : " << i+1 << endl;
      break;
    }
  }
}
void Display(int arr[0], int n)
{
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}
int main()
{
  int arr[] = {1, 3, 6, 8, 10, 13, 15, 19, 20};
  int n = sizeof(arr) / sizeof(arr[0]);
  Display(arr, n);
  int key;
  cout << "\nEnter key to search : ";
  cin >> key;
  LinearSearch(arr, n, key);
  return 0;
}