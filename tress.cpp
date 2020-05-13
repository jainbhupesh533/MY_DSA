#include "iostream"
using namespace std;

//<---------------------------------BINARY SEARCH TREE---------->

struct node{
    int info;
    struct node * left;
    struct node * right;
};

struct node * root = NULL;
struct node * loc = NULL;
struct node * par = NULL;


void inorder(node * p){
    if (p == NULL){
        return ;
    }
    else{
        inorder(p->left);
        cout<<p->info<<endl;
        inorder(p->right);
    }
}

void preorder(node * p){
    if (p == NULL){
        return ;
    }
    else{
        cout<<p->info<<endl;
        preorder(p->left);
        preorder(p->right);
    }
}

void postorder(node * p){
    if (p == NULL){
        return ;
    }
    else{
        postorder(p->left);
        postorder(p->right);
        cout<<p->info<<endl;
    }
}

void find(int item){
    loc = root;
    par = NULL;
    while ((loc != NULL)&&(loc->info!=item))
    {
        par = loc;
        if (item<loc->info)
            loc = loc->left;
        else
            loc = loc->right;
    }
    
}

void create(){
    node * p = new node;
    cout<<"Enter info part: "<<endl;
    cin>>p->info;
    p->right = p->left =NULL;
    if (root == NULL){
        root = p;
    }
    else{
        find(p->info);
        if (loc != NULL)
        cout<<"Item is already present"<<endl;
        else
        {
            if (p->info<par->info)
            {
                par->left = p;
            }
            else
            {
                par -> right = p;
            }   
        } 
    }
}


int main(){
  int ch;
    do{
        cout<<"Enter the choice: "<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            preorder(root);
            break;
        case 3:
            inorder(root);
            break;
        case 4:
            postorder(root);
            break;
        default:
            break;
        }
    }while(ch == 1|| ch == 2 || ch ==3 || ch == 4);
    return 0;
}
