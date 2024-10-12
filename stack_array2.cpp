#include <iostream>
using namespace std;
#define MAX 10
int list[10];
int sp;

int is_full()
{
    if(sp == MAX)
        return 1;
    else
        return 0;
}

void insert_end(int element)
{
    if(!is_full())
    {
        list[sp] = element;

        cout<<"Element Added to the position :-"<<sp<<endl;
        sp = sp+1;
    }
    else
        cout<<"Stack is full"<<endl;
}

int is_empt()
{
    if(sp==0)
        return 1;
    else
    return 0;
}

void delete_end()
{
    if(!is_empt())
    {
        cout<<"Element Deleted from position :- "<<sp-1<<endl;
        sp = sp-1;

    }
    else
        cout<<"Stack is empty there is no items to delete"<<endl;
}

void Traverse()
{
    int i = sp-1;
    while(i>=0)
    {
        cout<<"Element at position "<<i<<" is "<<list[i]<<endl;
        i--;
    }
}
void Find(int element)
{
    int i = sp-1;
    while(i>=0)
    {
        if (list[i]==element)
            cout<<"Element Found"<<endl;
        else
            cout<<"No such element in the stack"<<endl;
        i = i-1;
    }
}
int main()
{
    sp = 0;
    while (true)
    {
        cout<<"Choices :- "<<endl;
        cout<<"You can maximum enter 10 values in the stack"<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. Delete"<<endl;
        cout<<"3. Traverse"<<endl;
        cout<<"4. Find"<<endl;
        cout<<"5. Exit"<<endl;
        int a;
        cout<<"Enter the choice"<<endl;
        cin>>a;
        if(a==1)
        {
            int element;
            cout<<"Element : ";
            cin>>element;
            insert_end(element);
        }
        else if (a == 2)
            delete_end();
        else if (a == 3)
            Traverse();
        else if (a == 4)
        {
            int z;
            cout<<"Enter element to find in the stack"<<endl;
            cin>>z;
            Find(z);
        }

        else
        {
            cout<<"Thnks for using "<<endl;
            break;
        }

    }
}
