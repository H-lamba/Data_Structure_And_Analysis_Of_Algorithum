//this code may be wrong at some point
#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int temp[high-low+1];
    int left = low;
    int right = mid+1;
    int ptr =0;
    while(left<= mid && right<=high)
    {
        if(arr[left]<= arr[right])
        {
            temp[ptr] = (arr[left]);
            left++;
            
        }
        else{
            temp[ptr] = (arr[right]);
            right++;
        }
        ptr = ptr+1;
    }
    while(left<= mid)
    {
        temp[ptr] = (arr[left]);
        left++;
        ptr++;
    }
    while(right<= high)
    {
        temp[ptr] = (arr[right]);
        right++;
        ptr++;
    }
    for (int i = low;  i<=high;i++)
    {
        arr[i]= temp[i-low];
    }
    return ;
}

void merge_sort(int arr[], int low,int  high)
{
    if(low == high)
    return;
    int mid = (low+high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low,mid,high);
}


int main()
{
    int n;
    cout<<"Enter the Size of the Array you want to insert"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);

    cout << "The sorted array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}