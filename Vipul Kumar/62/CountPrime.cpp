#include <iostream>
using namespace std;
void isPrime(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int temp = arr[i];
        int j;
        for( j = 2;j<temp;j++){
            if(temp % j == 0)
                break;
        }
        if(j == temp)
            cout<<temp<<" ";
    }
}
int main()
{
    int arr[] = {34, 56, 121, 19, 17, 40, 13};

    int n = sizeof(arr) / sizeof(arr[0]);
   
    isPrime(arr,n);
}