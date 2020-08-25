#include<iostream>

int main()
{
    int n;
    std::cout<<"Enter n :";
    std::cin>>n;
    for(int i=1;i<=2*n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1 || i==n || j==n)
                std::cout<<"*";
            else
                std::cout<<" ";
        }
        std::cout<<"\n";
    }
}
