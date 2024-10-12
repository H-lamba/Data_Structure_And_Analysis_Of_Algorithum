#include <iostream>
#define MAX 10
int list[MAX];
int lp;
using namespace std;
int is_full(){
    if(lp == MAX)
        return 1;
    else return 0;
}
void insert_end(int element){
    if(!is_full()){
        list[lp++]= element;
        cout<<"Element Added"<<"\n";
    }
    else{
        cout<<"List is Full Cannot Enter";
    }

}
void insert_begin(int element){
    if(!is_full()){
        for (int i = lp;i>0;i--)
        {
            list[i]= list[i-1];
        }
        list[0]= element;
        lp++;
        cout<<"ADDED"<<"\n";
    }
    else{
        cout<<"LIST IS FULL"<<"\n";
    }
}
void insert_position(int element, int position){
    if(!is_full()){
        for (int i = lp;i>position;i--)
        {
            list[i]= list[i-1];
        }
        list[position-1]= element;
        lp++;
        cout<<"ADDED"<<"\n";
    }
    else{
        cout<<"LIST IS FULL"<<"\n";
    }
}

void insert_after_position(int element, int position){
    if(!is_full()){
        for (int i = lp;i>position;i--)
        {
            list[i]= list[i-1];
        }
        list[position]= element;
        lp++;
        cout<<"ADDED"<<"\n";
    }
    else{
        cout<<"LIST IS FULL"<<"\n";
    }
}

void insert_before_position(int element, int position){
    if(!is_full()){
        for (int i = lp;i>position;i--)
        {
            list[i]= list[i-1];
        }
        list[position-2]= element;
        lp++;
        cout<<"ADDED"<<"\n";
    }
    else{
        cout<<"LIST IS FULL"<<"\n";
    }
}

int is_empy()
{
    if (lp==0)
        return 1;
    else return 0;
}

void delete_end()
{
    if(!is_empy()){
        lp--;
        cout<<"Element is deleted"<<"\n";
    }
    else
        cout<<"List is empty cannot delete more items"<<"\n";
}
void delete_begin()
{
    if(!is_empy()){
            for(int i=0;i<lp-1;i++)
            {
                list[i]= list[i+1];
            }
            lp--;
            cout<<"Element is Deleted \n";
    }
    else
        cout<<"List is Empty \n";
}
void delete_position(int position)
{
    if (!is_empy())
    {
        for (int i = position-1; i<lp-1;i++)
        {
            list[i]= list[i+1];
        }
        lp--;
        cout<<"Element Deleted \n";
    }
    else
        cout<<"List Is Empty \n";
}
void delete_after_position(int position)
{
    if(!is_empy())
    {
        for(int i = position; i<lp-1;i++)
        {
            list[i]= list[i+1];
        }
        lp--;
        cout<<"Element is deleted \n";
    }
    else
        cout<<"List is Empty no more elements to delete \n";
}

void Traverse()
{
    for(int i = 0; i<lp;i++)
        cout<<"Element is :"<<list[i]<<"\t";
}
int main(){
    lp= 0;
    insert_end(1);
    insert_end(2);
    insert_end(3);
    insert_end(4);
    insert_end(5);
    insert_begin(0);
    insert_after_position(10, 2);
    insert_before_position(9, 2);
    insert_position(8, 4);
    Traverse();
}



