#include <iostream>
using namespace std;
struct node
{
    int element;
    node * next;
};
typedef node NODE;
NODE * head;
void insert_end(int element)
{
    NODE *env = new NODE;
    env->element = element;
    env->next = NULL;
    if (head == NULL)
    {
        head = env;
        cout << "element Added in the queue at the end" << endl;
        return;
    }
    NODE *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = env;
    cout << "element Added in the queue at the end " << endl;
}

void delete_begin()
{
    if (head == NULL)
    {
        cout << "Queue is empty." << endl;
        return;
    }

    NODE *temp = head;
    head = head->next;
    cout << "Top element of the queue is deleted from the queue" << endl;
    delete temp;
}


void traverse()
{
    if (head == NULL)
    {
        cout << "The list is empty." << endl;
        return;
    }
    NODE *temp = head;
    while (temp != NULL)
    {
        cout <<"The element is "<< temp->element << endl;
        temp = temp->next;
    }
    cout << endl;
}


void Find(int element)
{
    NODE * temp = head;
    int position = 0;
    while(temp != NULL)
    {
        if(temp->element == element)
        {
            cout<<"Element found in the Stack at position :- "<< position<<endl;
            return;
        }
        temp = temp->next;
        position++;

    }
    cout<<"No Such element exists in the stack"<<endl;
}



int main()
{
    head = NULL;
    while (true)
    {
        cout<<"Choices :- "<<endl;
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
            traverse();
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
