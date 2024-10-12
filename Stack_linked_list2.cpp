
#include <iostream>
using namespace std;
struct node
{
    int element;
    struct node* next;
};

typedef node NODE;
NODE *head;
void insert_end(int element)
{
    NODE * env = new NODE;
    env->element = element;
    env->next = NULL;
    if(head == NULL)
    {
        head = env;
        cout<<"Element added in the Stack from last"<<endl;
        return;
    }
    NODE *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = env;
    cout<<"Element added in the Stack from last"<<endl;
}

void delete_end()
{
    if(head == NULL)
    {
        cout<<"Stack is empty there is nothing to delete inside the stack"<<endl;
        return;
    }

    if(head->next == NULL)
    {
        cout<<"Last element deleted from the Stack"<<endl;
        delete head;
        head = NULL;
        return;
    }
    NODE *temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    cout<<"Element deleted from the last of the stack"<<endl;
    delete temp->next;
    temp->next = NULL;
}
/*
void Traverse()
{
    if(head== NULL)
    {
        cout<<"The Stack is empty there is nothing in the Stack"<<endl;
        return ;
    }
    NODE *temp = head;
    while(temp != NULL)
    {
        cout<<"The element is :- "<<temp->element<<endl;
        temp = temp->next;
    }
}*/

void TraverseBackwardsRecursive(NODE* temp)
{
    if (temp == NULL)
    {
        return;
    }

    // Recursively call until we reach the last node
    TraverseBackwardsRecursive(temp->next);

    // Print the element after all recursive calls
    cout << "The element is: " << temp->element << endl;
}

void TraverseBackwards()
{
    if (head == NULL)
    {
        cout << "The Stack is empty, there is nothing in the Stack" << endl;
        return;
    }

    cout << "Stack elements are:" << endl;
    TraverseBackwardsRecursive(head);
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
            delete_end();
        else if (a == 3)
            TraverseBackwards();
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
