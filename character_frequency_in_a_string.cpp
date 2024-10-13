#include <iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string to count the letter frequency"<<endl;
    cin>>s;
    int hash[256]= {0};
    for(int i = 0;i<s.size();i++)
    {
        hash[s[i]]++;
    }
    int q;
    cout<<"How many characters you want to search in the given string"<<endl;
    cin>>q;
    cout<<"Enter the characters to search"<<endl;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<"Repeatation of "<< c<<" is "<<hash[c]<<endl;
    }
    return 0;
}