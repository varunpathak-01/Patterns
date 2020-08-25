#include<iostream>

int main()
{
    int i,j,n,c=1,d=1;
    std::cout<<"Enter N:";
    std::cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            std::cout<<c-j;
            d++;
        }
        c=j+d;
        std::cout<<"\n";
    }
 return 0;
}
/*
Enter N:5
1
32
654
10987
1514131211
*/
