#include<iostream>
#include<stdlib.h>
using namespace std;
int a[10][10],i,j,k,n,qu[10],front=0,rare=0,v,visit[10],visited[10],x,y;

int main()
{
cout <<"enter no of vertices";
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

cout <<"enter initial vertex";
cin >>v;
cout <<"Visitied vertices\n";
cout << v<<" ";
visited[v]=1;
k=1;
while(k<n)
{
    for(j=0;j<=n;j++)
        if( a[v][j]!=0 && visited[j]!=1 && visit[j]!=1 )
        {
            visit[j]=1;
            qu[rare++]=j;
        }
    v=qu[front++];
    cout<<v << " ";
    k++;
    visit[v]=0;
    visited[v]=1;
}
}
