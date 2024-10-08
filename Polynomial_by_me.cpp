#include <iostream>
using namespace std;

struct Polynomial
{
    int cofficient;
    int exponent ;
    Polynomial *next;

};
Polynomial *head;
void insert(int cofficent , int exponent)
{
    Polynomial *newterm  = new Polynomial;
    newterm->cofficient = cofficent;
    newterm->exponent = exponent;
    newterm->next=NULL;
    if(!head || head->exponent<exponent)
    {
        newterm->next= head;
        head =  newterm;
    }

    else{
        Polynomial * current = head;
        Polynomial * prev = NULL;
        while(current && current->exponent>exponent)
        {
            prev = current;
            current = newterm->next;
        }

        if(current && current->exponent==exponent)
        {
            current->cofficient = current->cofficient+cofficent;
            delete newterm;
        }
        else{
            newterm->next = current;
            if(prev)
            {
                prev->next = newterm;
            }
        }
        }
}

void show()
{
    Polynomial *temp = head;
    bool first = true;
    while (temp != NULL)
    {
        if (temp->cofficient != 0)
        {
            if (!first)
            {
                if (temp->cofficient > 0)
                    cout << "+";
            }

            cout << temp->cofficient;
            if (temp->exponent != 0)
                cout << "x^" << temp->exponent;

            first = false;
        }
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    head = NULL;
    insert(10,2);
    insert(8,2);
    insert(2,1);
    show();

}
