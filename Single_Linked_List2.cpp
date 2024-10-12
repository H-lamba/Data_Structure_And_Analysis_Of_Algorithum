#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

typedef node NODE;
NODE *head;

void insert_begin(int element)
{
    NODE *env;
    if(head==NULL)
    {
        env = new(env);
        env->data = element;
        env->next= NULL;
    }
    head = env;
    cout<<"Insertion Succesfull";
}
int main()
{
    head = NULL;
    insert_begin(10);
}

