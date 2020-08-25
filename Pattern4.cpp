#include<iostream>

int main()
{
    int j,n;
    std::cout<<"Enter n";
    std::cin>>n;
    std::cout<<"\n";

    for(int i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
       {
           if(i==0 || i==n-1)
           {
               std::cout<<"*";
           }
           else if(j==0 || j==n-1)
           {
               std::cout<<"*";
           }
           else
            std::cout<<" ";
       }
        std::cout<<"\n";
       }
return 0;
}
/*
Enter n5

*****
*   *
*   *
*   *
*****

*/
