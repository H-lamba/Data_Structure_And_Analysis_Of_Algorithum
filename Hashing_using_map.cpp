#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array going to be the search set"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the search Array"<<endl;
    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
    map <int,int> mp;
    for(int i = 0; i<n;i++)
    {
        mp[arr[i]]++;
    }
    int q ;
    cout<<"Enter the size of array u want to search in existing arrays"<<endl;
    cin>>q;
    cout<<"Enter the elements to search in the existing array"<<endl;
    for(int i = 0; i<q;i++)
    {
        int number;
        cin>>number;
        cout<<"Repeatation of the number "<<number<<" is : - "<<mp[number]<<endl;
    }
    return 0;

}