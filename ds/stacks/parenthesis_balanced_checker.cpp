#include<iostream>
using namespace std;
class s1
{
public:
    char a[50];
    int top;
    s1()
    {
        top=-1;
    }
    void push(char n)
    {
        ++top;
        a[top]=n;
    }
    char pop()
    {

    return(a[top--]);
    }
    void check(char exp[50])
    {
        char *e;
        char x;
        e=exp;
        int count=1;
        while(*e!='\0')
        {
            if(*e=='('||*e=='{'||*e=='[')
                {
                    push(*e);
                }
                else if(*e==')')
                {
                    if(x=pop()=='(')
                        count=2;
                        else
                            count=1;
                }
                else if(*e==']')
                {
                    if(x=pop()=='[')
                        count=2;
                        else
                            count=1;
                }
                else if(*e=='}')
                {
                    if(x=pop()=='{')
                        count=2;
                        else
                            count=1;
                }

            e++;
        }
        if(count%2==0 &&top==-1)
            cout<<"eqn is balanced"<<endl;
        else
           cout<<"eqn is not  balanced"<<endl;
    }

};
int main()
{
    s1 obj;
    char app[50];
    cout<<"enter the expression"<<endl;
    cin>>app;
    obj.check(app);
}
