#include<iostream>
using namespace std;
void mergesort(int *,int,int);
void merge(int *,int,int,int);
int a[20],i,n,b[20];
int main()
{
    cin >> n;
    for(i=0;i<n;i++)
    cin >> a[i];
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
        cout << a[i] << " ";
    return 0;
}
void mergesort(int a[],int i,int j)
{ //Write your code here
    if (i < j)
    {
        int m = i+(j-i)/2;
        mergesort(a, i, m);
        mergesort(a, m+1, j);

        merge(a, i, m, j);
    }
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
       {
           L[i] = a[l+i];
        cout<<L[i]<<" ";

        }
        cout<<endl;
    for (j = 0; j < n2; j++)

       {
        R[j] = arr[m + 1+ j];
       cout<<R[j]<<" ";
       }
       cout<<endl;
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    cout<<endl;
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


