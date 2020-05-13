#include<iostream>
#include "stack"
using namespace std;

// <----------------------------------ARRAY-------------------------------->
/*
int stack[10];
int top = -1;

void push(){
    int item;
    if (top == 9){
        cout<<"Overload and exit";
        exit(0);
    }
    else{
        cout<<"Enter an item: "<<endl;
        cin>>item;
        top += 1;
        stack[top] = item;
    }
}

int pop(){
    int item;
    if (top == -1){
        cout<<"Underflow"<<endl;
        exit(0);
    }
    else{
        item = stack[top];
        top -= 1;
    }
    return item;
}

void display(){
    cout<<"Values are :"<<endl;
    for (int i = top;i>=0;i--){
        cout<<stack[i]<<endl;
    }
}


int main(){
    int ch;
    do{
        cout<<"Enter choice for opertion: "<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }while(ch ==1 || ch == 2 || ch ==3);
}
*/

// <--------------------------------LINKED LIST------------------------->
/*
struct node {
    int info;
   struct node * next;
};

struct node * top = NULL;

void push(){
    struct node * p = new node;
    cout<<"Enter info part: "<<endl;
    cin>>p->info;
    p->next = NULL;
    if (top == NULL){
        top  = p;
    }
    else{
        p -> next = top ;
        top = p;
    }
}

void pop(){
    if (top == NULL){
        cout<<"Overflow";
        exit(0);
    }
    else{
    struct node * old = top;
    top = top -> next;
    }
}
void display(){
    struct node * q = top;
    while(q!=NULL){
          cout<<q<<"\n"<<q->info<<"\n"<<q->next<<"\n"<<"--->"<<"\n";
        q = q->next;
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
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }while(ch == 1|| ch == 2 || ch ==3);
    return 0;
}
*/

// <-----------------------------QUEUE----------------------->
/*
int front = -1;
int rear = -1;
void enqueue(int * queue,int n){
    int item;
    if ((rear+1) % n == front)
    {
        cout<<"Overflow";
        exit(0);
    }
    else{
        cout<<"enter item: "<<endl;
        cin>>item;
        if (front == -1)
        {
            front = 0;
            rear =0;
        }
        else
        {
            rear = (rear +1) % n;
        }
        queue[rear] = item;
        
    }
    }


void display(int * queue,int n){
   
   int i = front;
    if (front == 1){
        cout<<"empty";
        exit(0);
    }
    else
    {
         if (front <= rear){
        while(i <= rear){
            cout<<queue[i]<<endl;
            i++;
        }
    }
    else
    {
        for (int i= front;i<=n;i++){  
            cout<<queue[i]<<endl;
        }
        for(int i =0;i<=rear;i++){
            cout<<queue[i]<<endl;
        }
    }
    }   
}

int main(){
    int n;
    cout<<"Enter the no of elements: "<<endl;
    cin>>n;
    int queue[n];
  int ch;
    do{
        cout<<"Enter the choice: "<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            enqueue(queue,n);
            break;
        case 2:
            display(queue,n);
            break;
        default:
            break;
        }
    }while(ch == 1|| ch == 2);
    return 0;
}
*/