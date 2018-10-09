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
    struct node *ptr;
    struct node *save_node;
    struct node *copy_node;
    struct node *temp;
    struct node *ptr1;
    struct node *ptr2;
public:
    ll()
    {
        start=NULL;
    }
    void create_beginning();
    void create_end();
    void insert_beginning(int);
    void insert_end(int);
    void insert_before(int,int);
    void insert_after(int,int);
    void insert_sorted_list(int);
    void del_beg();
    void del_end();
    void del_given(int);
    void del_pos(int);
    void sort_ll();
    void show();
 };
void ll::create_beginning()
{
    start=NULL;
    cout<<"\nCreating linked list with beginning:"<<endl;
    cout<<"Enter value(-1 to terminate): ";
    int num;
    cin>>num;
    while(num!=-1)
    {
        new_node=new node;
        new_node->value=num;
        new_node->next=start;
        start=new_node;
        cout<<"Enter value(-1 to terminate): ";
        cin>>num;
    }
}
void ll::create_end()
{
    start=NULL;
    cout<<"\nCreating linked list with end:"<<endl;
    cout<<"Enter value(-1 to terminate): ";
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
void ll::insert_beginning(int num1)
{
    int num=num1;
    while(num!=-1)
    {
        new_node=new node;
        new_node->value=num;
        new_node->next=start;
        start=new_node;
        cout<<"Enter value to be inserted(-1 to terminate): ";
        cin>>num;
    }
}
void ll::insert_end(int num1)
{
    int num=num1;
    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    save_node=ptr;
    while(num!=-1)
    {
        new_node=new node;
        new_node->value=num;
        new_node->next=save_node->next;
        save_node->next=new_node;
        save_node=new_node;
        cout<<"Enter value to be inserted(-1 to terminate): ";
        cin>>num;
    }
}
void ll::insert_before(int given,int num1)
{
    int num=num1;
    ptr=start;
    copy_node=NULL;
    while(ptr->next!=NULL)
    {
        if(ptr->value==given)
            break;
        copy_node=ptr;
        ptr=ptr->next;
    }
    while(num!=-1)
    {
        if(copy_node==NULL)
        {
            insert_beginning(num);
            break;
        }
        else
        {
            new_node=new node;
            new_node->value=num;
            new_node->next=ptr;
            copy_node->next=new_node;
            ptr=new_node;
            cout<<"Enter value to be inserted(-1 to terminate): ";
            cin>>num;
        }
    }
}
void ll::insert_after(int given,int num1)
{
    int num=num1;
    ptr=start;
    while(ptr->next!=NULL)
    {
        if(ptr->value==given)
            break;
        ptr=ptr->next;
    }
    while(num!=-1)
    {
        new_node=new node;
        new_node->value=num;
        new_node->next=ptr->next;
        ptr->next=new_node;
        ptr=new_node;
        cout<<"Enter value to be inserted(-1 to terminate): ";
        cin>>num;
    }
}
void ll::insert_sorted_list(int num1)
{
    int num=num1;
    while(num!=-1)
    {
        ptr=start;
        copy_node=NULL;
        while(ptr!=NULL)
        {
            if(ptr->value>num)
                break;
            copy_node=ptr;
            ptr=ptr->next;
        }
        if(copy_node==NULL)
        {
            new_node=new node;
            new_node->value=num;
            new_node->next=start;
            start=new_node;
        }
        else if(ptr==NULL)
        {
            new_node=new node;
            new_node->value=num;
            new_node->next=ptr;
            copy_node->next=new_node;
        }
        else
        {
            new_node=new node;
            new_node->value=num;
            new_node->next=ptr;
            copy_node->next=new_node;
        }
        cout<<"Enter value to be inserted(-1 to terminate): ";
        cin>>num;
    }
}
void ll::del_beg()
{
    temp=start;
    start=temp->next;
    temp->next=NULL;
    delete temp;
}
void ll::del_end()
{
    ptr=start;
    save_node=NULL;
    while(ptr->next!=NULL)
    {
        save_node=ptr;
        ptr=ptr->next;
    }
    if(save_node==NULL)
        del_beg();
    else
    {
        temp=save_node->next;
        save_node->next=NULL;
        delete temp;
    }
}
void ll::del_given(int given)
{
    ptr=start;
    save_node=NULL;
    while(ptr!=NULL)
    {
        if(ptr->value==given)
            break;
        save_node=ptr;
        ptr=ptr->next;
    }
    if(save_node==NULL)
    {
        del_beg();
        cout<<"Given Element "<<given<<" deleted"<<endl;
    }
    else if(ptr==NULL)
    {
        cout<<"Given element "<<given<<" does not exist in linked list"<<endl;
    }
    else
    {
        save_node->next=ptr->next;
        ptr->next=NULL;
        delete ptr;
        cout<<"Given Element "<<given<<" deleted"<<endl;
    }
}
void ll::del_pos(int pos)
{
    int count=0;
    ptr=start;
    save_node=NULL;
    while(ptr!=NULL)
    {
        count++;
        if(count==pos)
            break;
        save_node=ptr;
        ptr=ptr->next;
    }
    if(save_node==NULL)
    {
        del_beg();
        cout<<"Element with position "<<pos<<" deleted"<<endl;
    }
    else if(ptr==NULL)
    {
        cout<<"Given position "<<pos<<" does not exist in lisnked list"<<endl;
    }
    else
    {
        save_node->next=ptr->next;
        ptr->next=NULL;
        delete ptr;
        cout<<"Element with position "<<pos<<" deleted"<<endl;
    }
}
void ll::sort_ll()
{
    int len=0;
    ptr=start;
    while(ptr!=NULL)
    {
        len++;
        ptr=ptr->next;
    }
    for(int p=1;p<len;++p)
    {
        ptr1=start;
        ptr2=ptr1->next;
        for(int c=0;c<len-p;++c)
        {
            if(ptr1->value>ptr2->value)
            {
                int temp=ptr1->value;
                ptr1->value=ptr2->value;
                ptr2->value=temp;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
    }
}
void ll::show()
{
    cout<<"\nDisplaying linked list:"<<endl;
    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->value<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main()
{
    ll obj;
    int option;
    do
    {
        cout<<"\nEnter:\n1 to create linked list with beginning\n2 to create linked list at end\n3 to insert elements at beginning\n4 to insert elements at end\n5 to insert elements before a given element\n6 to insert elements after a given element\n7 to insert elements in a sorted list\n8 to delete element from beginning\n9 to delete element from end\n10 to delete given element\n11 to delete element with given position\n12 to sort linked list\n13 to display linked list\n0 to exit: ";
        cin>>option;
        switch(option)
        {
        case 1:
            obj.create_beginning();
            break;
        case 2:
            obj.create_end();
            break;
        case 3:
            {
                cout<<"\nInserting elements at beginning:"<<endl;
                cout<<"Enter value to be inserted(-1 to terminate): ";
                int num;
                cin>>num;
                obj.insert_beginning(num);
                break;
            }
        case 4:
            {
                cout<<"\nInserting elements at end:"<<endl;
                cout<<"Enter value to be inserted(-1 to terminate): ";
                int num;
                cin>>num;
                obj.insert_end(num);
                break;
            }
        case 5:
            {
                cout<<"\nEnter element whom you want to insert elements before: ";
                int given;
                cin>>given;
                cout<<"Inserting elements before "<<given<<":"<<endl;
                cout<<"Enter value to be inserted(-1 to terminate): ";
                int num;
                cin>>num;
                obj.insert_before(given,num);
                break;
            }
        case 6:
            {
                cout<<"\nEnter element whom you want to insert elements after: ";
                int given;
                cin>>given;
                cout<<"Inserting elements after "<<given<<":"<<endl;
                cout<<"Enter value to be inserted(-1 to terminate): ";
                int num;
                cin>>num;
                obj.insert_after(given,num);
                break;
            }
        case 7:
            {
                cout<<"\nInserting elements in a sorted list:";
                cout<<"\nEnter value to be inserted(-1 to terminate): ";
                int num;
                cin>>num;
                obj.insert_sorted_list(num);
                break;
            }
        case 8:
            {
                cout<<endl;
                obj.del_beg();
                cout<<"Element deleted"<<endl;
                break;
            }
        case 9:
            {
                cout<<endl;
                obj.del_end();
                cout<<"Element deleted"<<endl;
                break;
            }
        case 10:
            {
                cout<<"\nEnter element to be deleted: ";
                int given;
                cin>>given;
                obj.del_given(given);
                break;
            }
        case 11:
            {
                cout<<"\nEnter position of element to be deleted: ";
                int pos;
                cin>>pos;
                obj.del_pos(pos);
                break;
            }
        case 12:
            obj.sort_ll();
            cout<<"Linked list sorted"<<endl;
            break;
        case 13:
            obj.show();
            break;
        case 0:
            option=0;
            break;
        default:
            cout<<"\nInvalid input, try again"<<endl<<endl;
        }
    }
    while(option!=0);
    return 0;
}
