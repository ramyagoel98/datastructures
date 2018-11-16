#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int parts(int *a,int start,int end)
{
    int pivot=a[end];
    int i=start-1;
    for (int j = start; j <= end- 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[end]);
    return (i + 1);

}
void sorting(int *a,int start, int end)
{
if(start<end)
{
int partition_index=parts(a,start,end);
sorting(a,start,partition_index-1);
sorting(a,partition_index+1,end);
}
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sorting(a,0,n-1);
for(int i=0;i<n;i++)
cout<<a[i]<<"\n";
}
