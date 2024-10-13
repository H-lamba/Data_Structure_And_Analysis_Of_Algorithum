#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the search space"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the search space"<<endl;
    for (int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }

    int hash[13] = {0};
    for(int i =0 ; i<n;i++)
    {
        hash[arr[i]] = hash[arr[i]]+1;

    }

    int q;
    cout<<"Enter the Query Space"<<endl;
    cin>>q;
    cout<<"Enter the elements u to search in array"<<endl;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<"Search element :- "<<number<<" repeatation "<<hash[number]<<endl;
    }
}