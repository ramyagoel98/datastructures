#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter size of arr: ";
    int n;
    cin>>n;
    int arr[50];
    int track[100]={0};
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        ++track[arr[i]];
    }
    int pos=0;
    for(int i=0;i<100;++i)
    {
        if(track[i]>1)
        {
            for(int j=0;j<n;++j)
                if(arr[j]==i)
                {
                    pos=j;
                    while(n!=0&&pos+1<n&&arr[pos+1]==i)         //remove duplicates if there are more than one duplicate
                    {
                        for(int k=pos;k<n-1;++k)                //remove a duplicate
                            arr[k]=arr[k+1];
                        --n;
                    }
                }
        }
    }
    for(int i=0;i<n;++i)
        cout<<arr[i]<<" ";
    return 0;
}

