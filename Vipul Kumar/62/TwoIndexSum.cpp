#include <iostream>
using namespace std;

int main()
{ // 0 1 2 3 4 5 6  7  8  9 10
    int arr[] = {1, 2, 3, 5, 6, 8, 11, 13, 20, 20, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int k = i + 2;
        for (int j = 1; j < n && k < n; j++)
        {
            if (arr[i] == arr[j])
                break;
            else
            {
                int sum = arr[i] + arr[j];
                if (sum == arr[k])
                {
                    cout<<"\t\t\t";
                    cout << arr[i] << " + " << arr[j] << " = " << arr[k] << endl;
                    cout<<"\t\tIndex   " << i << "   " << j << "    " << k << endl;

                    k++;
                }
            }
        }
    }
    return 0;
}

/*
OUTPUT===>
                        1 + 2 = 3
                Index   0   1    2
                        5 + 3 = 8
                Index   3   2    5
                        6 + 5 = 11
                Index   4   3    6
                        8 + 5 = 13
                Index   5   3    7
*/