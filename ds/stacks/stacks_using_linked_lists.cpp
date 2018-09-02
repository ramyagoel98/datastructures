#include<iostream>
using namespace std;
class stacks{
    struct node
    {
        int value;
        struct node *next;
    };
    struct node *new_node;
    struct node *top;
    struct node *temp;
    public:
        stacks()
        {
           top=NULL;
        }
        void push(int i)
        {
            new_node=new node;
            new_node->next=top;
            new_node->value=i;
            top=new_node;
        }
        void pop()
        {
            if(top==NULL)
            {
                cout<<"stack is empty"<<endl;
            }
            else
            {
                temp=top;
                top=temp->next;
                temp->next=NULL;
                delete temp ;

                /*top=top->next;*/
            }
        }
        void peek()
        {
            if(top==NULL)
                cout<<"stack is empty"<<endl;
            else
            cout<<"the top element of array is"<<top->value<<endl;
        }
        void display()
        {
            if(top==NULL)
                cout<<"stack is empty"<<endl;
            else
                while(top!=NULL)
            {

        cout<<top->value<<endl;
        top=top->next;
        }

        }

};
int main()
{
    stacks ob;
    int ch,i;
    cout<<"enter 1 for insert 2 for delete 3 for peek 4 for display and 0 for exit"<<endl;
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
            case 1:
                cout<<"enter item to b inserted";
                cin>>i;
                ob.push(i);
                break;
            case 2:
                ob.pop();
                break;
            case 3:
                ob.peek();
                break;
            case 4:
                ob.display();
                break;
            default:
                cout<<"wrong choice"<<endl;
                break;

        }
        cout<<"enter 1 for insert 2 for delete 3 for peek 4 for display and 0 for exit"<<endl;
    cin>>ch;
    }
}
