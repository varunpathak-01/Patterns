#include<iostream>

int main()
{
    int j,n;
    std::cout<<"Enter n";
    std::cin>>n;
    std::cout<<"\n";

    for(int i=0;i<n;i++)
    {
        for(j=n-i;j>0;j--)
       {

            std::cout<<j<<" ";

        }
       std::cout<<"\n";

    }
return 0;
}
/*
Enter n5

5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/
