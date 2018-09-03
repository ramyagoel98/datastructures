#include<iostream>
using namespace std;
class queue_
{
    struct node{
    int value;
    struct node *next;
    };
    struct node *temp;
    struct node *rear;
    struct node *front;
    struct node *save;
    struct node *new_node;
public:
    queue_()
    {
        front=NULL;
        rear=NULL;
    }
    void insert()
    {
        int num;
        cout<<"enter num";
        cin>>num;
        while(num!=-1)
        {
            if(rear==NULL)
            {
            new_node=new node;
            new_node->value=num;
            new_node->next=NULL;
            rear=new_node;
            front=new_node;
            save=new_node;
                }
            else
            {
             new_node=new node;
            new_node->value=num;
            new_node->next=NULL;
            save->next=new_node;
            save=new_node;
            rear=save;
            }
            cout<<"again enter no";
            cin>>num;
        }

    }
    void display()
    {
        if(front==NULL)
        {
            cout<<"empty"<<endl;
        }
        else
        {
        temp=front;
        while(temp->next!=NULL)
        {
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<temp->value;
    }
    }
    void del()
    {
        if(front==NULL)
        {
           cout<<"empty"<<endl;
        }
        else{
        struct node *t = front;
      front = front -> next;
      cout<<"Deleted element:"<<t->value<<"\t";
      delete(t);

        }
    }


};
int main()
{
    queue_ obj;
    int ch;
    cout<<"enter ch 1 to insert in ll "<<endl;
    cout<<"enter ch 2 to delete "<<endl;
    cout<<"enter ch 3 to display  "<<endl;
    cout<<"enter ch 0 for exit  "<<endl;
    cin>>ch;
    while(ch!=0)
    {
    switch(ch)
    {
    case 1:
        obj.insert();
        break;
    case 2:
        obj.del();
        break;
    case 3:
        obj.display();
        break;
    default:
        cout<<"wrong choice";
        break;

    }
cout<<"enter ch 1 to insert in ll "<<endl;
    cout<<"enter ch 2 to delete "<<endl;
    cout<<"enter ch 3 to display  "<<endl;
    cout<<"enter ch 0 for exit  "<<endl;
    cin>>ch;
    }
}
