#include <iostream>
using namespace std;
void Bubble_sort(int arr[] , int n)
{
    for(int i = n-1; i>=0;i--)
    {
        for(int j = 0 ; j <=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// This is more Optimized bubble sort in cases where the array is already sorted. The best case time complexity for this is O(n).
// While the time complexity of the above bubble sort for the best case is Also O(n^2). 
void optimize_bubble_sort(int arr[], int n)
{
    for(int i = n-1; i<= 0; i--)
    {
        int Swapcount = 0;
        for(int j = 0; j<= i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                Swapcount = 1;
            }
        }
        if(Swapcount == 0)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the length of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: - "<<endl;
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    optimize_bubble_sort(arr,n);
    cout<<"The Sorted array is : - "<<endl;
    for(int i = 0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}