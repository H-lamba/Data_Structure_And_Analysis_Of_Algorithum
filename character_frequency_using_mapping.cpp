#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the First String"<<endl;
    cin>>s;
    map<char, int > mp;
    for(int i = 0; i<s.size(); i++)
    {
        mp[s[i]]++; 
    }
    int q;
    cout<<"How many characters you want to search in the given string"<<endl;
    cin>>q;
    cout<<"Enter the characters to search"<<endl;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<"Repeatation of "<< c<<" is "<<mp[c]<<endl;
    }
}