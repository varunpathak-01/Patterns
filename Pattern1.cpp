#include<iostream>

int main()
{
    int j,n;
    std::cout<<"Enter n";
    std::cin>>n;
    std::cout<<"\n";

    for(int i=0;i<n;i++)
    {
       for(j=0;j<n-i;j++)
       {
           std::cout<<" ";
       }
       for(j=i;j>=0;j--)
       {
           std::cout<<j+1;

       }
       for(j=1;j<=i;j++)
       {
           std::cout<<j+1;

       }
       std::cout<<"\n";

    }
return 0;
}
/*
Enter n5

     1
    212
   32123
  4321234
 543212345
*/
