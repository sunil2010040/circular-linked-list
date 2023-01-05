 #include<iostream>
using namespace std;

class node                  		     //USER DEFINED
{
    public:
    int data;
    node*next;
    
    node(int value)         		     //TO SPECIFY DATA AND NEXT 
    {
        data=value;
        next=NULL;
    }
};

void insertatbegin(node*&head,int val)
{
    node*n=new node(val);
    
    
    if(head==NULL)
    {
        n->next=n;
        head=n;
    }
    
    node*temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void insertatend(node*&head,int val)     //TO SPECIFY WHAT FUNCTION OF LINKEDLIST WE ARE GOING TO USE
{
    node*n=new node(val);
    node*temp=head;
    
    if(head==NULL)
    {
        insertatbegin(head,val);
        return;
    }
    
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void display(node*head)
{
    node*temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main()
{
    node*head=NULL;        
    cout<<"the data added at end of circular linked list:"<<endl;         
    insertatend(head,1);                 //INSERTING VALUES INSIDE LINKED LIST
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    insertatend(head,5);
    insertatend(head,6);
    insertatend(head,7);
    display(head);
    
    insertatbegin(head,8);
    insertatbegin(head,9);
    insertatbegin(head,10);
    display(head);
}
OUTPUT:

the data added at end of circular linked list:
1 2 3 4 5 6 7
10 9 8 1 2 3 4 5 6 7 

