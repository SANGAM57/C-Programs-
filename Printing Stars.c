
#include <stdio.h>

int main()
{
    int i=0,j=0,n;
    printf("Enter the number of stars :");
            scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
            
        }
        printf("\n");
        
        
    }

    return 0;
}
