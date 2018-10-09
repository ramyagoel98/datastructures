#include<iostream>
using namespace std;
class d_ll
{
    struct node
    {
        int value;
        struct node *next=NULL;
        struct node *prev=NULL;
    };
    struct node *start;
    struct node *new_node;
    struct node *ptr;
    struct node *save_node;
    struct node *copy_node;
    struct node *temp;
public:
    d_ll()
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
    void show();
 };
void d_ll::create_beginning()
{
    start=NULL;
    cout<<"\nCreating linked list with beginning:"<<endl;
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
            new_node->prev=start;
            start=new_node;
            save_node=new_node;
        }
        else
        {
            new_node=new node;
            new_node->value=num;
            new_node->next=start;
            new_node->prev=NULL;
            start=new_node;
            save_node->prev=new_node;
            save_node=new_node;
        }
        cout<<"Enter value(-1 to terminate): ";
        cin>>num;
    }
}
void d_ll::create_end()
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
            new_node->prev=start;
            start=new_node;
            save_node=new_node;
        }
        else
        {
            new_node=new node;
            new_node->value=num;
            new_node->next=NULL;
            new_node->prev=save_node;
            save_node->next=new_node;
            save_node=new_node;
        }
        cout<<"Enter value(-1 to terminate): ";
        cin>>num;
    }
}
void d_ll::insert_beginning(int num1)
{
    int num=num1;
    while(num!=-1)
    {
        new_node=new node;
        new_node->value=num;
        new_node->next=start;
        new_node->prev=NULL;
        start->prev=new_node;
        start=new_node;
        cout<<"Enter value(-1 to terminate): ";
        cin>>num;
    }
}
void d_ll::insert_end(int num1)
{
    int num=num1;
    ptr=start;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    while(num!=-1)
    {
        new_node=new node;
        new_node->value=num;
        new_node->next=NULL;
        new_node->prev=ptr;
        ptr->next=new_node;
        ptr=new_node;
        cout<<"Enter value(-1 to terminate): ";
        cin>>num;
    }
}
void d_ll::insert_before(int given,int num1)
{
    ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->value==given)
            break;
        ptr=ptr->next;
    }
    int num=num1;
    while(num!=-1)
    {
        if(ptr==NULL)
        {
            cout<<"Given element "<<given<<" doesn't exist\n";
            break;
        }
        else if(ptr->prev==NULL)
        {
            insert_beginning(num);
            break;
        }
        else
        {
            new_node=new node;
            new_node->value=num;
            new_node->next=ptr;
            new_node->prev=ptr->prev;
            ptr->prev->next=new_node;
            ptr->prev=new_node;
            ptr=new_node;
        }
        cout<<"Enter value(-1 to terminate): ";
        cin>>num;
    }
}
void d_ll::insert_after(int given,int num1)
{
    ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->value==given)
            break;
        ptr=ptr->next;
    }
    int num=num1;
    while(num!=-1)
    {
        if(ptr==NULL)
        {
            cout<<"Given element "<<given<<" doesn't exist\n";
            break;
        }
        else if(ptr->next==NULL)
        {
            insert_end(num);
            break;
        }
        else
        {
            new_node=new node;
            new_node->value=num;
            new_node->next=ptr->next;
            new_node->prev=ptr;
            ptr->next->prev=new_node;
            ptr->next=new_node;
            ptr=new_node;
            cout<<"Enter value(-1 to terminate): ";
            cin>>num;
        }
    }
}
void d_ll::insert_sorted_list(int num1)
{
    int num=num1;
    while(num!=-1)
    {
        ptr=start;
        save_node=NULL;
        while(ptr!=NULL)
        {
            if(ptr->value>num)
                break;
            save_node=ptr;
            ptr=ptr->next;
        }
        if(ptr==NULL)
        {
            new_node=new node;
            new_node->value=num;
            new_node->next=NULL;
            new_node->prev=save_node;
            save_node->next=new_node;
        }
        else if(ptr->prev==NULL)
        {
            new_node=new node;
            new_node->value=num;
            new_node->next=ptr;
            new_node->prev=NULL;
            ptr->prev=new_node;
            start=new_node;
        }
        else
        {
            new_node=new node;
            new_node->value=num;
            new_node->next=ptr;
            new_node->prev=ptr->prev;
            ptr->prev->next=new_node;
            ptr->prev=new_node;
        }
        cout<<"Enter value(-1 to terminate): ";
        cin>>num;
    }
}
void d_ll::del_beg()
{
    cout<<"Enter -1 to stop deletion: ";
    int num;
    cin>>num;
    while(num!=-1)
    {
        if(start->next==NULL)
        {
            save_node=start;
            start=NULL;
            delete save_node;
            break;
        }
        else
        {
            save_node=start;
            start=save_node->next;
            save_node->next->prev=NULL;
            save_node->next=NULL;
            save_node->prev=NULL;
            delete save_node;
        }
        cout<<"Enter -1 to stop deletion: ";
        cin>>num;
    }
}
void d_ll::del_end()
{
    cout<<"Enter -1 to stop deletion: ";
    int num;
    cin>>num;
    ptr=start;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    while(num!=-1)
    {
        if(ptr->prev==NULL)
        {
            save_node=ptr;
            start=NULL;
            delete save_node;
            break;
        }
        else
        {
            save_node=ptr->prev;
            save_node->next=NULL;
            ptr->next=NULL;
            ptr->prev=NULL;
            delete ptr;
            ptr=save_node;
        }
        cout<<"Enter -1 to stop deletion: ";
        cin>>num;
    }
}
void d_ll::del_given(int given)
{
    ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->value==given)
            break;
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        cout<<"Given element "<<given<<" doesn't exist\n";
    }
    else if(ptr->prev==NULL&&ptr->next==NULL)
    {
        start=NULL;
        delete ptr;
    }
    else if(ptr->next==NULL)
    {
        ptr->prev->next=NULL;
        ptr->next=NULL;
        ptr->prev=NULL;
        delete ptr;
    }
    else if(ptr->prev==NULL)
    {
        ptr->next->prev=NULL;
        start=ptr->next;
        ptr->next=NULL;
        ptr->prev=NULL;
        delete ptr;
    }
    else
    {
        ptr->prev->next=ptr->next;
        ptr->next->prev=ptr->prev;
        ptr->next=NULL;
        ptr->prev=NULL;
    }
}
void d_ll::del_pos(int pos)
{
    int count=0;
    ptr=start;
    while(ptr!=NULL)
    {
        count++;
        if(count==pos)
            break;
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        cout<<"Element with position "<<pos<<" doesn't exist\n";
    }
    else if(ptr->prev==NULL&&ptr->next==NULL)
    {
        start=NULL;
        delete ptr;
    }
    else if(ptr->next==NULL)
    {
        ptr->prev->next=NULL;
        ptr->next=NULL;
        ptr->prev=NULL;
        delete ptr;
    }
    else if(ptr->prev==NULL)
    {
        ptr->next->prev=NULL;
        start=ptr->next;
        ptr->next=NULL;
        ptr->prev=NULL;
        delete ptr;
    }
    else
    {
        ptr->prev->next=ptr->next;
        ptr->next->prev=ptr->prev;
        ptr->next=NULL;
        ptr->prev=NULL;
    }
}
void d_ll::show()
{
    if(start==NULL)
        cout<<"No elements to display";
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
    d_ll obj;
    int option;
    do
    {
        cout<<"\nEnter:\n1 to create linked list with beginning\n2 to create linked list at end\n3 to insert elements at beginning\n4 to insert elements at end\n5 to insert elements before a given element\n6 to insert elements after a given element\n7 to insert elements in a sorted list\n8 to delete element from beginning\n9 to delete element from end\n10 to delete given element\n11 to delete element with given position\n12 to display linked list\n0 to exit: ";
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
