#include<iostream>
using namespace std;
#define size 20

class stackk
{
int a[10];
int top;
public:
stackk()
{
top=-1;
}
void push(int);
int stack_max();
};


void stackk::push(int val)
{
if(top==size)
    cout<<"overflow "<<endl;
    else
   {
    a[top+1]=val;
    top++;
   }
}

int stackk::stack_max()
{ int m=a[top];
for(int i=top;i>-1;i--)
{
if(m<a[i])
    {m=a[i];
    }
}
return m;
}
int main()
{ stackk s;
int n,i,ele,m;
cin>>n;
for(i=0;i<n;i++)
{cin>>ele;
s.push(ele);
}
m=s.stack_max();
cout<<m;
}
