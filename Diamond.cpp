#include<iostream>
using namespace std;
int main()
{
    int i,n,j,a,c;
    cout<<"Enter the number of rows:";
    cin>>n;
    a=n/2;
    for(i=0;i<n;i++)
    {
        if(i<=n/2)
        {
        for(j=0;j<n;j++)
        {
            if(j==a-i || j==a+i)
                cout<<"*";
            else
                cout<<" ";
        }
        }
        else
        {
             for(j=0;j<n;j++)
        {
            if(j==a-(n-i) || j==a+(n-i))
                cout<<"*";
            else
                cout<<" ";
        }
        if(i==n-1)
        {
            cout<<endl;
            for(j=0;j<=a;j++)
            {
                if(j==a)
                    cout<<"*";
                else
                    cout<<" ";
            }

        }
        }
        cout<<endl;
    }


    return 0;
}
