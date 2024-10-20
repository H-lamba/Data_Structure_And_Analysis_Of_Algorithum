//this Code of merge sort is definately right

#include <vector>
#include <iostream>
using namespace std;

void merge(vector<int> & arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<= mid && right<= high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++)
    {
        arr[i] = temp[i-low];
    }
    return;
}

void merge_sort(vector<int> & arr, int low, int high)
{
    if(low == high) return;
    int mid = (low+high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main()
{
    vector<int> arr;
    int n;
    cout<<"Enter the length of the array "<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i = 0; i<n;i++)
    {
        int j;
        cin>>j;
        arr.push_back(j);
    } 
    merge_sort(arr, 0, n-1);
    cout<<"The sorted array is :- "<<endl;
    for(int i = 0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}