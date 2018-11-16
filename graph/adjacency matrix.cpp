#include<iostream>
using namespace std;
/*
int main()
{
    int n,i,j,x,y;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][j]=0;
    cin>>x>>y;
    while(x!=-1 && y!=-1)
    {
        a[x][y]=1;
        a[y][x]=1;
        cin>>x>>y;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
return 0;
}
*/

int main()
{
    int a[100][100],i,n,j,x,y,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            a[i][j]=0;
    }
    cout<<"choice sir"<<endl;
    cin>>c;
    while(c!=-1)
    {
    if(c==1)
    {cout<<"sir please enter for undirected graph"<<endl;
    cin>>x>>y;
    if(x>=n&&y>=n)
        cout<<"sir ji please enter within range"<<endl;
        else
        {
    while(x!=-1&&y!=-1)
    {
        a[x][y]=1;
        a[y][x]=1;
        cin>>x>>y;

    }
    }
    }
    else if(c==2)
    {
        for(i=0;i<n;i++)
    { cout<<endl;
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
    }
    }
    else if(c==3)
    {
        cout<<"please enter edge to delete"<<endl;
        cin>>x>>y;
        if(x>=n&&y>=n)
        cout<<"sir ji please enter within range"<<endl;
        else
            a[x][y]=0;
        a[y][x]=0;

    }
    cout<<"choice sir"<<endl;
    cin>>c;

    }
}
