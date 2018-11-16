#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
void insertionSort(int ar_size, int *  ar)
{

    //Write your code here.
    int i, k, j;
   for (i = 1; i < ar_size; i++)
   {
       k = ar[i];
       j = i-1;

       while (j >= 0 && ar[j] > k)
       {
           ar[j+1] = ar[j];
           j = j-1;
            for (i=0;i<ar_size;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
       }
       ar[j+1] = k;
   }
   for (i=0;i<ar_size;i++)
    {
        cout<<ar[i]<<" ";
    }

}
int main(void)
{
    int _ar_size;
    cin>>_ar_size;
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++)
        {
            cin>>_ar[_ar_i];
        }
    insertionSort(_ar_size, _ar);
    return 0;
    }
