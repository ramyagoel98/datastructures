#include <iostream>
#include <iomanip>
#include<cstring>
using namespace std;
class Student
{
    char name[100];
    int marks;
    public:
        Student();
        void getdata(void);
        void display(void);
        friend void sortRankWise( Student S[],int);
        };
          //write your code here
Student::Student()
{

}
void Student::getdata()
{
    cin>>name>>marks;
}
void Student::display()
{
     cout<<name<<" "<<marks<<endl;
}
void sortRankWise(Student S[],int n)
{
    Student temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(S[i].marks<S[j].marks)
            {
                temp=S[i];
                S[i]=S[j];
                S[j]=temp;
            }
        }
    }
}
int main()
{
int n;
cin>>n;
Student s[n];
for(int i=0;i<n;i++)
{
s[i].getdata();
}
sortRankWise(s,n);
for(int i=0;i<n;i++)
{
s[i].display();
}
return 0;}


