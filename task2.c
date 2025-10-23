#include <stdio.h>

int main()
{
    int arr[3][3]={
        {12,34,56},
        {72,4,6},
        {90,67,12}};

    int max=arr[3][3],r=0,c=0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if (arr[i][j]>max)
           {
                max=arr[i][j],r=i,c=j;
           }
           
        }
        
    }
    printf("Max = %d at [%d][%d]", max, r, c);

    return 0;
}