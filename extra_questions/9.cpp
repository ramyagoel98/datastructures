#include<iostream>
using namespace std;
int main()
{
    int size,c,a[20],i=0,s1=0;
    int x=1;
     cout<<"please enter size sir"<<endl;
     cin>>size;
     cout<<"where you want to insert element sir in stack 1 or 2"<<endl;
     cin>>c;
     while(c!=0)
     {
     if(c==1)
     {

         while(x!=0 && i<size)
         { if(x==0)
                break;
             cout<<"sir please enter element in stack 1"<<endl;
             cin>>a[i];
             i++;
             s1++;
             cout<<"enter 1 to continue entering in stack 1 else ,0 to exit"<<endl;
             cin>>x;


         }
         cout<<"enter now in stack2 "<<endl;
         int j=size-1;
         int y=1;
         while(y!=0 && j>=size-i )
         { if(y==0)
                break;
             cout<<"sir please enter element in stack 2"<<endl;
             cin>>a[j];
             j--;
             cout<<"enter 1 to continue entering in stack 1 else ,0 to exit"<<endl;
             cin>>y;
         }
          for(i=0;i<size;i++)
            cout<<a[i]<<" ";
            break;
         }
     else if(c==2)
     {  int j=size-1;
         int y=1;
         while(y!=0 && j>=size-i-1 )
         { if(y==0)
         break;
             cout<<"sir please enter element in stack 2"<<endl;
             cin>>a[j];
             j--;
             i++;
             cout<<"enter 1 to continue entering in stack 1 else ,0 to exit"<<endl;
             cin>>y;
         }
         while(x!=0 && i<size)
         { if(x==0)
                break;
             cout<<"sir please enter element in stack 1"<<endl;
             cin>>a[s1];
             s1++;
             cout<<"enter 1 to continue entering in stack 1 else ,0 to exit"<<endl;
             cin>>x;


         }
         for(i=0;i<size;i++)
            cout<<a[i]<<" ";
            break;

     }
     else
     {
         for(i=0;i<size;i++)
            cout<<a[i];
     }
}
cout<<"choice sir please"<<endl;
cin>>c;

}
