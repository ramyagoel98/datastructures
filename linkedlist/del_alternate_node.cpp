//Deleting alternate node from linked list
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
    struct node *temp;
    struct node *ptr;
public:
    ll()
    {
        start=NULL;
    }
    void create_ll();
    void del_alt_node();
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
void ll::del_alt_node()
{
    ptr=start;
    temp=start;
    while(ptr)
    {
        if(ptr==start)
            start=ptr->next;
        else
            temp->next=ptr->next;
        temp=ptr->next;
        ptr->next=NULL;
        delete ptr;
        if(temp)
            ptr=temp->next;
        else
            ptr=temp;
    }
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
    obj.del_alt_node();
    obj.show();
    return 0;
}

