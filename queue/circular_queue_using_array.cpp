#include<iostream>
using namespace std;
class queue_
{
 int *arr,s;
 int front,rear;
 public:
     queue_(int m)
     {
         s=m;
         front=-1;
         rear=-1;
         arr=new int[m];
     }
     void  Enqueue(int k)
     {
       if(front==-1&&rear==-1)
       {
           front++;
           rear++;
           arr[rear]=k;
       }
       else if(front==0&&rear==s-1||rear==front-1)
       {
           cout<<"queue is full"<<endl;
       }
       else
       {
           if(rear==s-1)
            rear=0;
            else
           {
               rear++;
               arr[rear]=k;
           }
       }
     }
     void Dequeue()
     {
       if(front==-1&&rear==-1)
       {
           cout<<"underflow"<<endl;
       }
       else if(front==rear)
       {
           int temp;
           temp=front;
           cout<<arr[temp]<<"is deleted"<<endl;
           front=-1;
           rear=-1;
       }
       else if(front==s-1)
       {
          int temp;
          temp=front;
          cout<< arr[temp]<<"is deleted"<<endl;
          front=0;
       }
       else
       {
           int temp;
           temp=front;
           cout<<arr[temp]<<"deleted"<<endl;
           front++;

       }

     }
     void display()
     {
         if(front==-1)
         {
             cout<<"queue is empty"<<endl;
         }
        else if(rear<front)
         {
             for(int i=front;i<=s;i++)
             {
                 cout<<arr[i]<<"\t";
             }
             for(int i=0;i<=rear;i++)
             {
                 cout<<arr[i]<<"\t";
             }

         }
         else
         {
             for(int i=front;i<=rear;i++)
             {
                 cout<<arr[i]<<"\t";
             }
         }
     }




};
int main()
{
    int ch,s;
    cout<<"enter size of queue"<<endl;
    cin>>s;
    queue_ ob(s);
    cout<<"enter 1 to enter a element in queue\n,2 to delete a element from queue\n,3 to display queue and \n0 to exit"<<endl;
    cin>>ch;
    while (ch!=0)
    {
        switch(ch)
        {
        case 1:
            int item;
            cout<<"enter the value to be inserted"<<endl;
            cin>>item;
            ob.Enqueue(item);
            break;
        case 2:
            ob.Dequeue();
            break;
        case 3:
            ob.display();
            break;
        }
      cout<<"enter 1 to enter a element in queue,2 to delete a element,3 to display queue and 0 to exit"<<endl;
      cin>>ch;
    }
}


