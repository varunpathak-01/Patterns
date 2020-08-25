#include<iostream>

int main()
{
    int j,n,c=0;
    std::cout<<"Enter n";
    std::cin>>n;
    std::cout<<"\n";

    for(int i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
       {
          if(j>n-i-1)
            std::cout<<++c;
         else
            std::cout<<" ";
        }
       std::cout<<"\n";

    }
return 0;
}
/*

Enter n5


    1
   23
  456
 78910

 */
