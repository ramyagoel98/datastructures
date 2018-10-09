#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*start=nullptr;
int mid_ll(node *head)
{
    node *ptr1=head;
    node *ptr2=head;
    while(ptr2&&ptr2->next)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
    return ptr1->data;
}
int main()
{
    node *new_node;
    cout<<"Enter element(-1) to terminate: ";
    int n;
    cin>>n;
    while(n!=-1)
    {
        new_node=new node;
        new_node->data=n;
        new_node->next=start;
        start=new_node;
        cout<<"Enter element(-1) to terminate: ";
        cin>>n;
    }
    if(start)
        cout<<"Mid element is "<<mid_ll(start);
    else
        cout<<"No mid element";
    return 0;
}
