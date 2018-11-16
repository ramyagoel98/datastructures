#include<iostream>
using namespace std;
class QuickSort
{
    public:
        int no_of_elements;
        int elements[100];
    public:
        void getarray();
        void sortit(int [], int, int);
        void partition(int [],int ,int,int&);
        void display();
};
void QuickSort::getarray()
{
    cin>>no_of_elements;
    for(int i=0;i<no_of_elements;i++)
    {
        cin>>elements[i];
    }
}

void QuickSort::sortit(int x[], int lb, int ub)
{
    if (lb < ub)
    {
        int pi = partition(x, lb, ub);
        sortit(x, lb, pi - 1);
        sortit(x, pi + 1, ub);
    }
}
void QuickSort::partition(int x[],int lb,int ub,int &pj)
{
    int pivot=x[lb],p1=lb+1,i,temp;

for(i=start+1;i<=end;i++)
{

if(x[i]<pivot)
    {
        if(i!=p1)
      {
            temp=x[p1];
            x[p1]=x[i];
            a[i]=temp;
      }    p1++;
    }
}

        x[lb]=x[p1-1];
        x[p1-1]=pivot;

return p1-1;
}

void QuickSort::display()
{
    for(int i = 0 ; i < no_of_elements; i++)
    {
        cout<<elements[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    QuickSort QS;
    QS.getarray();
    QS.sortit(QS.elements,0,QS.no_of_elements-1);
    QS.display();
    return 0;
}
