#include<iostream>
using namespace std;
class stacks{
    int *a;
    int top;
    int sizel;
public:
    stacks(int s)
    {
      sizel=s;
      top=-1;
       a=new int[sizel];
        }
        void push(int i)
        {
            if(top==sizel-1)
                cout<<"overflow";
            else
            top++;
            a[top]=i;
        }
        void pop()
        {

if(top==-1)
{
    cout<<"underflow"<<endl;

}
else

    top--;
        }
void display()
{

    for(int i=0;i<=top;i++)
    {
        cout<<a[i]<<"\t"<<endl;
    }
}
};
int main()
{
int ch,s,item;
cout<<"enter size of arary"<<endl;
cin>>s;
stacks ob(s);
cout<<"enter ch1 for input ch2 for delete ch0 for exit "<<endl;
cin>>ch;
while(ch!=0)
{
  switch(ch)
      {
      case 1:
          cout<<"enter item to be inserted"<<endl;
          cin>>item;
        ob.push(item);
        break;
      case 2:
        ob.pop();
        break;
      default:
        cout<<"wrong input"<<endl;
      }
    cout<<"enter ch1 for input ch2 for delete ch0 for exit "<<endl;
cin>>ch;
}
ob.display();
}
