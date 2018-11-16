#include<iostream>
    using namespace std;

    class s1
    {
        char a[20];
        int top;
    public:
        s1()
        {
        top=-1;
        //cin>>s;
        }
        void push(int x)
        {
            a[++top]=x;
            //top++;
        }
        int pop()
        {
            return a[top--];
        }


    void in_po(char exp[20])
    {
        char *e;
        char x;
        int num;
        e=exp;
        while(*e!='\0')
        {
            if(isalnum(*e))
              {
                  num=*e-48;
                push(num);
              }
            else
            { int a=pop();
            int b=pop();
             int c;
            switch(*e)
            {
            case '+':
            c=a+b;
            push(c);
            break;
             case '-':
            c=a-b;
            push(c);
            break;
             case '/':
            c=a/b;
            push(c);
            break;
             case '*':
            c=a*b;
            push(c);
            break;
             case '^':
            c=a^b;
            push(c);
            break;
            }
            }
            e++;
             }
    while(top!=-1)
    {
        cout<<pop();
    }
    }
};
    int main()
    {
        s1 r;
        char ss[20];
        cin>>ss;
        r.in_po(ss);
    }
