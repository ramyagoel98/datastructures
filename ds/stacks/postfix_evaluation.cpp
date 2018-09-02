#include<iostream>
using namespace std;
class s1
{
  public:
      char arr[50];
      int top;
      s1()
      {
          top=-1;
      }
      void push(char n)
      {
          arr[++top]=n;
      }
      int pop()
      {
          return arr[top--];
      }
       void convert(char exp[50])
       {
           char *e;
           int num;
           e=exp;
           while(*e !='\0')
           {
               if(isalnum(*e))
               {
                   num=*e-48;
                   push(num);
               }
               else
               {
                   int a=pop();
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
                     case '*':
                    c=a*b;
                    push(c);
                    break;
                     case '/':
                    c=a/b;
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
    s1 obj;
    char infix[50];
    cout<<"enter value ";
    cin>>infix;
    obj.convert(infix);
}
