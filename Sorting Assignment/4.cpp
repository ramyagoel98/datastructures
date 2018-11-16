#include<iostream>
using namespace std;
void display(int *B,int n)
{
   for(int i=0;i<n;i++)
    {
        cout<<B[i]<<" ";
    }
}
void insertion_sort(int n, int *B)
{
    int i,j,k,temp,m;
    for(i=0;i<n;i++)
    {
        m=B[i];
        j=i;
        while(B[j-1]>m && j>0)
        {
            B[j]=B[j-1];
            j--;
            display(B,n);
            cout<<endl;
        }
        B[j]=m;
    }
    display(B,n);
}

int main(void) {
int size;
cin >> size;
int A[size], i;
for(i = 0; i < size; i++)
cin >> A[i];
insertion_sort(size, A);
return 0;
}
