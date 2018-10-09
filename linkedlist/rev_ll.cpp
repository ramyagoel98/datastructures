//Reversing linked list
#include<iostream>
using namespace std;
class ll
{
    struct node
    {
        int value;
        struct node *next;
    };
    struct node *start;
    struct node *new_node;
    struct node *save;
    struct node *track;
    struct node *ptr;
public:
    ll()
    {
        start=NULL;
    }
    void create_ll();
    void rev_ll();
    void show();
};
void ll::create_ll()
{
    int num;
    cin>>num;
    while(num!=-1)
    {
        if(start==NULL)
        {
            new_node=new node;
            new_node->value=num;
            new_node->next=start;
            start=new_node;
            save=new_node;
        }
        else
        {
            new_node=new node;
            new_node->value=num;
            new_node->next=save->next;
            save->next=new_node;
            save=new_node;
        }
        cin>>num;
    }
}
void ll::rev_ll()
{
    ptr=start;
    save=NULL;
    while(ptr!=NULL)
    {
        track=ptr->next;
        ptr->next=save;
        save=ptr;
        ptr=track;
    }
    start=save;
}
void ll::show()
{
    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->value<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    ll obj;
    obj.create_ll();
    obj.rev_ll();
    obj.show();
    return 0;
}
