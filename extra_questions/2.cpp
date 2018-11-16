#include <iostream>
#include<string>
using namespace std;
class s1
{
    public:
        char a[10];
        int top,size;
s1()
{
    top=-1;
    cin>>size;
}
void push(char x)
{
    if(top>size)
        cout<<"overflow "<<endl;
    else
    {
        a[top+1]=x;
        top++;
    }
}
bool is_empty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
void peak()
{
    cout<<a[top];
}
void pop()
{
    if(top==-1)
        cout<<"underflow sir!"<<endl;
    else
    {
        cout<<a[top--]<<" ";
    }
}
void disp()
{
    cout<<a[top]<<endl;
}

};

int main()
{
    s1 rg;
    cout<<"enter string please!"<<endl;
    char e[rg.size];
    int i=0;
    for(i=0;i<rg.size;i++)
    {
        cin>>e[i];
    }
    for(i=0;e[i]!='\0';i++)
    {
        rg.push(e[i]);
    }
    for(i=0;e[i]!='\0';i++)
    {
        rg.pop();
    }
}
