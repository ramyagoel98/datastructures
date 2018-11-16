#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int a[10][10],i,j,k,n,stk[10],top=0,v,visit[10],visited[10],x,y;
void DFS(int i)
{
    int j;
    cout<<i<<" ";
    visited[i]=1;

    for(j=0;j<n;j++)
       if(!visited[j]&&a[i][j]==1)
            DFS(j);
}
int main()
{
cout <<"enter no. of vertices";
cin >> n;
cout<<"enter for undirected grah"<<endl;
     cin>>x>>y;
    if(x>=n&&y>=n)
        cout<<"please enter within range"<<endl;
        else
        {
    while(x!=-1&&y!=-1)
    {
        a[x][y]=1;
        a[y][x]=1;
        cin>>x>>y;

    }
    }
    for(i=0;i<n;i++)
    { cout<<endl;
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
    }
cout <<"enter initial vertex";
cin >>v;
cout <<"AFTER DFS ORDER COMES -:"<<endl;
for(i=0;i<n;i++)
    visited[i]=0;
DFS(v);
}
