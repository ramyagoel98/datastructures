#include<iostream>
#define MAX 10

using namespace std;

int STACK[MAX],TOP;

//stack initialization
void initStack(){
    TOP=-1;
}
//check it is empty or not
int isEmpty(){
if(TOP==-1)
return 1;
else
return 0;
}

//check stack is full or not
int isFull(){
if(TOP==MAX-1)
return 1;
else
return 0;
}

void push(int num){
if(isFull())
    {
        return;
    }
    ++TOP;
STACK[TOP]=num;
}

//pop - to remove item

void pop()
{
    cout<<STACK[TOP--]<<" ";
}
int main()
{
int num;
int n,i;
initStack();
cin>>n;
    i=0;
do{
cin>>num;
push(num);
i++;
}while(i<n);
do
    {
pop();
n--;
}while(n>0);
return 0;
}
