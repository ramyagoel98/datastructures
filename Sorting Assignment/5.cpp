#include<iostream>
#include <string>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
class linkedList
{
    node *head;
    public:
        void create();
        void display();
        void selectionSort();
};
void linkedList :: create()
{
    int ele;
    cin>>ele;
    node *p,*tail;
    head=NULL;
    while(ele!=-999)
    {
        p=new node;
        p->data=ele;
        p->next=NULL;
        if(head==NULL)
        {
            head=p;
            tail=p;
        }
        else
        {
            tail->next=p;
            tail=p;
        }
        cin>>ele;
    }
}
void linkedList :: display()
{
    node *start;
    start=head;
    while(start!=NULL)
    {
        cout<<start->data;
        if(start->next!=NULL)
        cout<<", ";
        start=start->next;
    }
}
void linkedList :: selectionSort()
{
    node *p,*ptr,*temp;
    int k,m;
    p=head;
    while(p->next!=NULL)
    {
        m=p->data;
        for(ptr=p;ptr!=NULL;ptr=ptr->next)
        {
            if(m>=ptr->data)
            {
                m=ptr->data;
                temp=ptr;
            }
        }
        k=p->data;
        p->data=m;
        temp->data=k;
        display();
        cout<<endl;
        p=p->next;
    }
}
int main()
{
    linkedList list;
    list.create();
    list.display();
    cout<<endl;
    list.selectionSort();
    return 0;
}
