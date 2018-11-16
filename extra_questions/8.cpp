#include<iostream>
using namespace std;
#define SIZE 10
void push(int);
void pop();
void display();
int stack[SIZE],top=-1;
void push(int value)
{
if(top==SIZE)
    cout<<"overflow "<<endl;
    else
   {
    stack[top+1]=value;
    top++;
   }
}

void pop()
{
    if(top==-1)
cout<<"underflow sir!"<<endl;
else
{cout<<"deleted element is"<<" "<<stack[top--]<<endl;
//write your code
}
}

void display()
{
for(int i=top;i>-1;i--)
cout<<stack[i]<<" ";
cout<<endl;
//write your code
}

int main()
{
int i, j, n, data;
cin>>n;
for (i=1; i<=n; i++)
    {
cin>>j;
cout<<" " ;

if(j==1)
       {
cin>>data;
push(data);
       }
if(j==0)
       {
pop();
       }
    }
display();
}
