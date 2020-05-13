// <-----------------------------------------LINKED LIST--------------------------------------------------> 

//<------------------One way Linked List----------->
// SINGLY LINKED LIST - SLL AND DOUBLY LINKED LIST = DLL AND FOR CIRCULAR -CDLL /CSLL
// .SOME IMPORTANT FACTS ABOUT LL
// IN CSLL/CDLL WE HAVE TO TRAVERSE TILL START BUT IN SLL/DLL WE HAVE TO TRAVERSE TILL NULL
// SOME STEPS ARE EXTRA IN CSLL/CDLL SO I HAVE WRITED WITH COMMENTS.

#include <iostream>
using  namespace std;

/*
struct node{
    int info;
   struct node * next;
};
struct node * start = NULL;

// creating a list

int create(){
   struct node * p = new node;
    cout<<"Enter info part: ";
    cin>>p->info;
    p->next = NULL;
    if (start == NULL)
    {
        start = p;
    }
    else
    {
       struct node * q = start;
        while(q->next != NULL){
            q = q->next;
        }
        q->next = p;
    }
    return 1 ;
}

// displaying a list

void display(){
   struct node * k =start;
    while (k!=NULL)
    {
        cout<<k<<"\n"<<k->info<<"\n"<<k->next<<"\n"<<"--->"<<"\n";
        k = k->next;
    }
    
}

int main()
{
    int ch;
    do{
        cout<<"Enter the choice: ";
        cin>>ch;
        if (ch == 1)
        {
            create();
        }else if (ch  == 2)
        {
            display();
        }
    }while((ch == 1) || (ch == 2));
    return 0 ;
}
*/

/*
//<_-------------------INSERTION AND DELETION IN ONE-WAY LINKED LIST----------------->

struct node{
    int info;
   struct node * next;
};
struct node * start = NULL;

int create(){
   struct node * p = new node;
    cout<<"Enter info part: ";
    cin>>p->info;
    p->next = NULL;
    if (start == NULL)
    {
        start = p;
    }
    else
    {
       struct node * q = start;
        while(q->next != NULL){
            q = q->next;
        }
        q->next = p;
    }
    return 1 ;
}

void display(){
   struct node * k =start;
    while (k!=NULL)
    {
        cout<<k<<"\n"<<k->info<<"\n"<<k->next<<"\n";
        k = k->next;
    }
}

// inserting a values

void insert(){
    struct node * ptr;
    struct node * ptrp;
    struct node * avail = new node;
    struct node * n1;
    int item,pos,k=2;
    cout<<"Enter the position: "<<endl;
    cin >>pos;
    cout<<"Enter the value: "<<endl;
    cin>>item;

    if (avail == NULL)
    {
        cout<<"overflow"<<endl;
        exit(0);
    }
    else
    {
        n1 = avail;
        avail = avail->next;
        n1->info = item;
        n1-> next = NULL;

        // inserting at first position
        
        if(pos == 1){
            n1 -> next = start;
            start = n1;
        }
        else{
            ptr = start -> next;
            ptrp = start;
            while ((ptr != NULL) &&(k<pos))
            {
                k += 1;
                ptrp =ptr;
                ptr = ptr -> next;
            }
            // inserting values at end
            if (ptr == NULL)
            {
                ptrp -> next = n1; 
            }
            // inserting values at mid
             else{
                 n1 ->next = ptr;
                 ptrp -> next = n1;
             } 
        }
    } 
}

// DELETEION OF LINKED LIST

void delete1(){
    struct node * ptr;
    struct node * ptrp;
    struct node * avail = new node;
    struct node * old;
    int item;
    cout<<"Enter the elements you want to delete: "<<endl;
    cin>> item;
    if(start == NULL){
        cout<<"Underflow"<<endl;
        exit(0);
    }

    else
    {   
        // DELETEING AT FIRST POS
        
        if (start -> info == item)
        {
            old = start;
            start = start -> next;
        }
        // DELETION AT MID AND LAST
        else
        {
            ptr = start -> next;
            ptrp = start;
            while ((ptr != NULL) && (ptr -> info != item))
            {
                ptrp = ptr;
                ptr = ptr -> next;
            }
            if (ptr == NULL)
            {
                cout<<"Deletion not possible"<<endl;
                exit(1);
            }
            else
            {
                old =ptr;
                ptrp ->next = ptr ->next;
            }   
        }
    }
    old -> next = avail;
    avail = old;  
}

// REVERSE POSITION
void reverse_comp(){
    int k = 1,pos;
    struct node * r;
    struct node * p = start;
    struct node * q;
    cout<<"Enter the position where the you want to start: "<<endl;
    cin>>pos;
            while ((p != NULL) &&(k<pos))
            {
                k += 1;
                p = p -> next;
            }
            if()
            else{
                 r = p->next;
            }
            if(k == pos){ 
                while (r->next != NULL)
    {
        q = r->next;
        r->next = p;
        p = r;
        r = q;
    }
    r->next =p;
            }
   
}

int main()
{
    int ch;
        cout<<"\t\t ENTER THE CHOICES FOR THE LINKED LIST "<<endl;
        cout<<"PRESS 1 FOR CREATING LINK LIST"<<endl;
        cout<<"PRESS 2 FOR DISLAYING LINK LIST"<<endl;
        cout<<"PRESS 3 FOR INSERTING VALUES IN LINKED LIST"<< endl;
        cout<<"PRESS 4 FOR DELETING VALUES IN LINKED LIST"<< endl;
        cout<<"PRESS 5 FOR REVERSING VALUES IN LINKED LIST"<< endl;
    do{
        cout<<"Enter the choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert(); 
            break;
        case 4 :
            delete1();
            break;
        case 5:
            reverse_comp();
        default:
            break;
        }
    }while((ch == 1) || (ch == 2) || (ch ==3) || (ch == 4) || (ch == 5));
    return 0 ;
}
*/

/*
//<------------------CIRCULAR ONE WAY LINKED LIST ---------------->

struct node{
    int info;
    struct node * next;
};

node * start = NULL;

// CREATING A LIST
int create(){
   struct node * p = new node;
    cout<<"Enter info part: ";
    cin>>p->info;
    p->next = NULL;
    if (start == NULL)
    {
        start = p;
        p->next = start;
    }
    else
    {
        node * q = start;
        while (q->next != start)
        {
            q = q->next;
        }
        
        q -> next = p;
        p -> next = start;
    }

    return 1 ;
}

// DISPLAYING

int display(){
   struct node * k =start;
    do 
    {
        cout<<k<<"\n"<<k->info<<"\n"<<k->next<<"\n"<<"--->"<<"\n";
        k = k->next;
    }while(k != start);
    return 2;
}

// INSERTING
int insert(){
    struct node * ptr;
    struct node * ptrp;
    struct node * avail = new node;
    struct node * n1;
    int item,pos,k=2;
    cout<<"Enter the position: "<<endl;
    cin >>pos;
    cout<<"Enter the value: "<<endl;
    cin>>item;

    if (avail == NULL)
    {
        cout<<"overflow"<<endl;
        exit(0);
    }
    else
    {
        n1 = avail;
        avail = avail->next;
        n1->info = item;
        n1-> next = NULL;
        if(pos == 1){
            n1 -> next = start;
            start = n1;
        }
        else{
            ptr = start -> next;
            ptrp = start;
            while ((ptr != start) &&(k<pos))
            {
                k += 1;
                ptrp =ptr;
                ptr = ptr -> next;
            }
            if (ptr == start)
            {
                ptrp -> next = n1; 
                n1 -> next = start;
            }
             else{
                 n1 ->next = ptr;
                 ptrp -> next = n1;
             } 
        }
    } 
    return 3;
}

// DELETING
int delete1(){
    struct node * ptr;
    struct node * ptrp;
    struct node * avail = new node;
    struct node * old;
    int item;
    cout<<"Enter the elements you want to delete: "<<endl;
    cin>> item;
    if(start == NULL){
        cout<<"Underflow"<<endl;
    }
    else
    {
        if (start -> info == item)
        {
            old = start;
            start = start -> next;
        }
        else
        {
            ptr = start -> next;
            ptrp = start;
            while ((ptr != start) && (ptr -> info != item))
            {
                ptrp = ptr;
                ptr = ptr -> next;
            }
            if (ptr == start)
            {
                cout<<"Deletion not possible"<<endl;
                exit(1);
            }
            else
            {
                old =ptr;
                ptrp ->next = ptr ->next;
            }   
        }
    }
    old -> next = avail;
    avail = old;  
    return 4;
}

// SEARCHING
int search(){
    struct node * ptr;
    struct node * loc;
    int item;
    cout<<"Enter the item you want to search: "<<endl;
    cin>>item;
    ptr = start;

    while((ptr->next != start) && (ptr->info != item)){
        ptr = ptr-> next;
    }

    if (ptr-> next == start){
        if (ptr->info == item)
        {
            loc = ptr;
        }
        else
        {
            loc = NULL;
        }
    }else
    {
        loc = ptr;
    }

    if (loc == ptr){
            cout<<"Location is : "<<loc<<endl;
    }else{
        cout<<"Locations is not found"<<endl;
    }
    return 5;
}

int main()
{
    int ch;
     cout<<"\t\t ENTER THE CHOICES FOR THE LINKED LIST "<<endl;
        cout<<"PRESS 1 FOR CREATING LINK LIST"<<endl;
        cout<<"PRESS 2 FOR DISLAYING LINK LIST"<<endl;
        cout<<"PRESS 3 FOR INSERTING VALUES IN LINKED LIST"<< endl;
        cout<<"PRESS 3 FOR DELETING VALUES IN LINKED LIST"<< endl;
        cout<<"PRESS 4 FOR SEARCHING VALUES IN LINKED LIST"<< endl;
    do{
        cout<<"Enter the choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            delete1();
            break;
        case 5:
            search();
            break;

        default:
            break;
        }
    }while((ch == 1) || (ch == 2) || (ch == 3) || (ch == 4) || (ch ==5));
    return 0 ;
}
*/


// <----------------------DOUBLE LINKED LIST AND CIRCULAR DOUBLY LINKESD LIST----------------------->

struct node
{
    int info;
    struct node * next;
    struct node * prev;
};

struct node * start = NULL;

// CREATING in cdll
void create(){
   struct node * p = new node;
    cout<<"Enter info part: ";
    cin>>p->info;
    p -> prev = NULL;
    p->next = NULL;
    if (start == NULL)
    {
        start = p;
        // these two steps only for circualr
        p->next = start;
        start -> prev = p;
    }
    else
    {
         node * q = start;
        while (q->next != start)
        {
            q = q->next;
        }
        q -> next = p;
        p -> prev = q;
        // these two for circular
        p -> next = start;
        start -> prev = p;
    }
}

// INSERTING incdll
// insering at first value
void insertfirst(){
    struct node * avail = new node;
    // for storing the start prev value for cdll-  circular double linked list
    struct node * p = start->prev;

    struct node * n1;
    int item;
    cout<<"Enter the value for inserting: "<<endl;
    cin>>item;
    if (avail == NULL){
        cout<<"Overflow and exiting"<<endl;
        exit(0);
    }
    else
    {
        n1 = avail;
        avail = avail -> next;
        n1 -> prev = NULL; 
        n1->next = NULL;
        n1-> info = item;
        n1 -> next = start;
        // only for cdll these two steps if we want dll then write start -> prev = n1
        // this conects with the end
        n1 -> prev = p;
        p -> next = n1;
        start -> prev = n1;
        start = n1; 
    }
}

// INSERTING AT AFTER LOC

void insertmid(){
    struct node * avail = new node;
    struct node * loc = start -> next;
    struct node * n1;
    int item;
    cout<<"Enter the value for inserting: "<<endl;
    cin>>item;
    if (avail == NULL){
        cout<<"Overflow and exiting"<<endl;
        exit(0);
    }
    else
    {
        n1 = avail;
        avail = avail -> next;
        n1 -> prev = NULL; 
        n1->next = NULL;
        n1 -> info = item;
        n1 -> prev = loc;
        n1 -> next = loc -> next;
        loc -> next -> prev = n1;
        loc -> next = n1;
}
}

// INSERTING AT LAST 

void insertlast(){
    struct node * avail = new node;
    struct node * last = start -> prev;
    struct node * n1;
    int item;
    cout<<"Enter the value for inserting: "<<endl;
    cin>>item;
    if (avail == NULL){
        cout<<"Overflow and exiting"<<endl;
        exit(0);
    }else
    {
        n1 = avail;
        avail = avail -> next;
        n1 -> prev = NULL;
        n1 -> next = NULL;
        n1 -> info = item;
        n1 -> next = start;
        start -> prev = n1;
        n1 -> prev = last;
        last -> next = n1;
    }
    
}

// INSERTING AT PARTICULAR POSITION

void insertatpos(){
    struct node * avail = new node;
    struct node * p = start -> prev;
    struct node * q = start;
    struct node * n1;
    int item,pos,k=2;
    cout<<"Enter the position: "<<endl;
    cin>>pos;
    cout<<"Enter the value: "<<endl;
    cin>>item;
    if (avail == NULL)
    {
        cout<<"overflow"<<endl;
        exit(0);
    }else
    {
        n1 = avail;
        avail = avail->next;
        n1-> next = NULL;
        n1-> prev = NULL;
        n1 -> info  = item;
        if (pos == 1)
        {
            n1 -> next = start;
            n1 -> prev = p;
            p -> next = n1;
            q -> prev = n1;
            q = n1; 
        }else
        {
               while ((q -> next != start)&&(k<pos))
               {
                   k += 1;
                   q = q-> next;
               }
               if (k == pos)
               {
                n1 -> next = q -> next;
                q -> next -> prev = n1;
                q -> next = n1;
                n1 -> prev = q;
               }
        }
    }
    
}

// searching in cdll
void search1(){
    struct node * ptr = start;
    int count,item,pos;
    count=1;
    cout<<"Enter the item you want to search: "<<endl;
    cin>>item;
    while((ptr -> next != start) && (ptr ->info != item)){
        count += 1;
        ptr = ptr->next; 
    }
    if (ptr->info  != item)
    {
        pos =-1;
        cout<<"item is not found"<<endl;
    }else
    {
        pos = count;
    }
    cout<<"Item is found at "<<pos<<" postion"<<endl;
}

// DISPLAY
void display(){
     struct node * k =start;
    do
    {
        cout<<k->prev<<"\n"<<k->info<<"\n"<<k->next<<"\n"<<"--->"<<"\n";
        k = k->next;
    } while (k != start);
}

int main(){
     int ch,i;
        cout<<"\t\t ENTER THE CHOICES FOR THE LINKED LIST "<<endl;
        cout<<"PRESS 1 FOR CREATING LINK LIST"<<endl;
        cout<<"PRESS 2 FOR DISLAYING LINK LIST"<<endl;
        cout<<"PRESS 3 FOR SEARCHING VALUES IN LINKED LIST"<< endl;
        cout<<"PRESS 4 FOR INSERTING VALUES IN LINKED LIST"<< endl;
    do{
        cout<<"Enter the choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            search1();
            break;
        case 4:
            cout<<"PRESS 1 FOR INSERT VALUE AT FIRST POSITION"<<endl;     
            cout<<"PRESS 2 FOR INSERT VALUE AFTER LOC POSITION"<<endl; 
            cout<<"PRESS 3 FOR INSERT VALUE AT LAST  POSITION"<<endl; 
            cout<<"PRESS 4 FOR INSERT VALUE AT RANDOM POSITION POSITION"<<endl; 
            cin>>i;
            switch (i)
            {
            case 1:
                insertfirst();
                break;
            case 2:
                insertmid();
                break;
           case 3:
                insertlast();
                break;
           case 4:
                insertatpos();
                break;
            default:
                break;
            }  
            break; 
        default:
            break;
        }
    }while((ch == 1) || (ch == 2)|| (ch == 3) || (ch ==4));
    return 0 ;
}
