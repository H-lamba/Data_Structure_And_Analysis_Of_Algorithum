#include <iostream>
using namespace std;
struct node
{
    char data;
    struct node *right;
    struct node *left;
};
typedef struct node Tree;
Tree *root;
Tree *insert(Tree *T,char element)
{
    Tree *temp;
    if(T == NULL)
    {
        temp = new Tree;
        temp->data = element;
        temp->right = NULL;
        temp->left = NULL;
        return (temp);
    }
    else{
        if(T->data >element)
            T->left = insert(T->left, element);
        else if(T->data<element)
            T->right = insert(T->right, element);
        else
            cout<<"Plz don't giev duplicate items"<<endl;
            return (T);
    }
}
void inorder(Tree *T)
{
    if(T!=NULL)
    {
        inorder(T->left);
        cout<<T->data<<" ";
        inorder(T->right);
    }
    return;
}
void preorder(Tree *T)
{
    if(T!= NULL)
    {
        cout<<T->data<<" ";
        preorder(T->left);
        preorder(T->right);
    }
    return ;
}
void postorder(Tree *T)
{
    if(T!=NULL)
    {
        postorder(T->left);
        postorder(T->right);
        cout<<T->data<<" ";
    }
    return;
}
Tree *Search(char key, Tree *T)
{
    if(T==NULL) return T;
    else if(key<T->data) return(Search(key, T->left));
    else if(key>T->data) return(Search(key,T->right));
    else return T;
}

int main()
{
    root  = NULL;
    root = insert(root,'H');
    root = insert(root,'I');
    root = insert(root,'M');
    root = insert(root,'A');
    root = insert(root,'N');
    root = insert(root,'S');
    root = insert(root,'U');
    root = insert(root,'R');
    root = insert(root,'T');
    root = insert(root,'L');
    cout<<"Inorder :-"<<endl;
    inorder(root);
    cout<<"\nPostorder :- "<<endl;
    postorder(root);
    cout<<"\nPreoder :- "<<endl;
    preorder(root);

    Tree *temp;
    temp = Search('H', root);
    if(temp==NULL)
    cout<<"\nElement not found"<<endl;
    else cout<<"\nElement Found "<<endl;
    temp = Search('K', root);
    if(temp==NULL)
    cout<<"\nElement not found"<<endl;
    else cout<<"\nElement Found "<<endl;
}
