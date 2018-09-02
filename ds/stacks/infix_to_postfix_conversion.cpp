#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
char stack_[50];
char postfix[50];
int top=-1;
int a=0;
void push(char n)
{
    top++;
    stack_[top]=n;
}
void insert_postfix(char n)
{
postfix[a]=n;
    a++;
}
int preceed(char n)
{
if (n=='^')
    return 3;
else if(n=='*'||n=='/')
    return 2;
else if(n=='+'||n=='-')
    return 1;
else
        return 0;
}


void pop()
{
    if(stack_[top]=='(')
    {
top--;
    }
    else{
        insert_postfix(stack_[top]);
        top--;
    }
}

int main()
{
 char infix[50];
 cout<<"enter infix"<<endl;
 cin>>infix;
 int index=strlen(infix);
 infix[index]=')';
 infix[index+1]='\0';
 top=0;
 stack_[top]='(';
 int i=0;
 while(infix[i]!='\0')
{
    if(infix[i]=='(')
    {
        push(infix[i]);
    }
    else if(isalpha(infix[i])||isdigit(infix[i]))
    {
        insert_postfix(infix[i]);

    }
    else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/'||infix[i]=='^')
    {
        if(preceed(infix[i])>preceed(stack_[top]))
        {
            push(infix[i]);
        }
        else if ((preceed(infix[i])<=preceed(stack_[top])))
        {
            while(preceed(infix[i])<=preceed(stack_[top]))
            {
                pop();
            }
            push(infix[i]);
        }
    }
    else if(infix[i]==')')
    {
        while(stack_[top]!='(')
        {
            pop();
        }
        pop();
    }

    i++;
}
postfix[a]='\0';
cout<<postfix<<endl;

    }
