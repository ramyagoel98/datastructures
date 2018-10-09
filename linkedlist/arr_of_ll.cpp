//array of linked list
#include<iostream>
using namespace std;
class ll
{
    struct node
    {
        int value;
        struct node *next;
    }arr[3];
    struct node *start;
    struct node *new_node;
    struct node *ptr;
    struct node *save_node;
    struct node *copy_node;
    struct node *temp;
public:
    ll()
    {
        start=NULL;
    }
    void create_end();
    void show();
};
void ll::create_end()
{
    for(int i=0;i<2;++i)
    {
        arr[i].next=NULL;
        cout<<"\nCreating linked list with end:"<<endl;
        cout<<"Enter value(-1 to terminate): ";
        int num;
        cin>>num;
        while(num!=-1)
        {
            if(arr[i].next==NULL)
            {
                new_node=new node;
                new_node->value=num;
                new_node->next=start;
                arr[i].next=new_node;
                save_node=new_node;
            }
            else
            {
                new_node=new node;
                new_node->value=num;
                new_node->next=save_node->next;
                save_node->next=new_node;
                save_node=new_node;
            }
            cout<<"Enter value(-1 to terminate): ";
            cin>>num;
        }
    }
    ptr=arr[0].next;
    arr[2].next=NULL;
    while(ptr!=NULL)
    {
        if(arr[2].next==NULL)
        {
            new_node=new node;
            new_node->value=ptr->value;
            new_node->next=arr[2].next;
            arr[2].next=new_node;
            save_node=new_node;
        }
        else
        {
            new_node=new node;
            new_node->value=ptr->value;
            new_node->next=save_node->next;
            save_node->next=new_node;
            save_node=new_node;
        }
        ptr=ptr->next;
    }
    ptr=arr[1].next;
    while(ptr!=NULL)
    {
        new_node=new node;
        new_node->value=ptr->value;
        new_node->next=save_node->next;
        save_node->next=new_node;
        save_node=new_node;
        ptr=ptr->next;
    }
}
void ll::show()
{
    for(int i=0;i<3;++i)
    {
        cout<<"\nDisplaying linked list:"<<endl;
        ptr=arr[i].next;
        while(ptr!=NULL)
        {
            cout<<ptr->value<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
}
int main()
{
    ll obj;
    obj.create_end();
    obj.show();
    return 0;
}
