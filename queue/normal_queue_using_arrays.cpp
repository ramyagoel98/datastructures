#include<iostream>
using namespace std;
class queue_{
public:
    int s;
    int *arr,front,rear;
    queue_(int m)
    {
       front=-1;
       rear=-1;
       s=m;
       arr=new int[s];
    }
    void enqueue(int i)
    {
       if(rear==s-1)
            cout<<"overflow"<<endl;
       else if(front==-1&&rear==-1)
       {
           front++;
           rear++;
           arr[rear]=i;
       }
       else{
        rear++;
        arr[rear]=i;
       }

    }
    void dequeue()
    {
      if(front==-1&&rear==-1)
      {
          cout<<"stack is empty"<<endl;
      }
      else if(front==rear)
        {
        front=-1;
      rear=-1;
      }
      else{
        front++;
      }
    }
    void display()
    {
        if(front!=-1)
        {for(int i=front;i<=rear;i++)
      {
          cout<<arr[i]<<"\t";
      }
        }
        else
        {
            cout<<"list is empty"<<endl;
        }

    }
};
int main()
{
    int n,ch,item;
    cout<<"enter no of elements in queue"<<endl;
    cin>>n;
    queue_ obj(n);
    cout<<"enter ch1 for enqueue ch2 for dequeue ch3 for display and 0 for exit"<<endl;
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
        case 1:
            cout<<"enter item to be inserted"<<endl;
            cin>>item;
            obj.enqueue(item);
            break;
        case 2:
            obj.dequeue();
            break;
        case 3:
            obj.display();
            break;
        default:
            cout<<"wrong choice"<<endl;
            break;
        }
        cout<<"enter ch1 for enqueue ch2 for dequeue ch3 for display and 0 for exit"<<endl;
    cin>>ch;
    }
}
