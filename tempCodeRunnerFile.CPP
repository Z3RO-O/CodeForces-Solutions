#include<iostream>
using namespace std;

int main()
{
    int k = 71;
    for(int i = 0;i<=4;i++)
    {
        for(int j = 1;j<i+1;j++)
    {
        printf("%d ",k);
        k++;
    }   
    printf("\n");
    }
    return 0;
}