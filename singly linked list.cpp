#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void printll(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}



int findmin(Node* head){
    int min=1000;
    while(head!=NULL)
    {
        if (min > head->data)
            min = head->data;
  
        head = head->next;
    }
    return min;
}


void addend(Node** head_ref,int new_data){
    Node* last=*head_ref;
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=NULL;

    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
    return;
}


//delete node

void deleteNode(Node** head_ref,int key)
{
    Node* temp=*head_ref;
    Node* prev=NULL;

    if(temp!=NULL && temp->data==key)
    {
        *head_ref=temp->next;
        delete temp;
        return;
    }
    else{
        while(temp!=NULL & temp->data!=key)
        {
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL)
            {return;}
        prev->next=temp->next;
        delete temp;
    }
}


int main()
{
    Node* head=NULL;
    int d;
    cin>>d;
    head=new Node();
    head->data=d;
    head->next=NULL;
    
    int n=10;
    for(int i=0;i<n-1;i++)
    {
        int e;
        cin>>e;
        addend(&head,e);
    }
for(int i=0;i<n;i++)
{
    int p=findmin(head);
    deleteNode(&head,p);
    printll(head);
    cout<<"\n";
}
    return 0;
}
