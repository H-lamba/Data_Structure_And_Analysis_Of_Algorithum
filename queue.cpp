#include <iostream>
using namespace std;
# define MAX 10
int list[MAX];
int qp;

int is_full()
{
    if(qp== MAX)
    {
        return 1;
    }
    else
        return 0;
}

void insert_end(int element)
{
    if(!is_full())
    {
        list[qp] = element;
        cout<<"Element added at position :"<<qp<<endl;
        qp++;
    }
    else
        cout<<"Queue is full cannot add more items"<<endl;
}

int is_empt()
{
    if(qp==0)
        return 1;
    else
    return 0;
}

void delete_begin()
{
    if(!is_empt())
    {
        for(int i = 0; i<qp-1;i++)
        {
            list[i] = list[i+1];
        }
        cout<<"Element deleted from position 0"<<endl;
        qp--;
    }
    else
        cout<<"Queue is empty, there is nothing to delete from the queue"<<endl;
}

void Traverse()
{
    int i = qp-1;
    while(i>=0)
    {
        cout<<"The element in the queue is "<<list[i]<<" at the position "<<i<<endl;
        i--;
    }
}

void Find(int element)
{
    int i = qp-1;
    while(i>=0)
    {
        if(list[i] == element)
            cout<<"Element FOUND"<<endl;
        else
            cout<<"No such element exists in the queue"<<endl;
    }
}

int main()
{
    qp = 0;
    while(true)
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
            delete_begin();
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
