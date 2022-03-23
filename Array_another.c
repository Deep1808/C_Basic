#include <stdio.h>

void main()
{
    int arr1[100], arr2[100];
    int i, n;      
 printf("Input the number of elements:");
       scanf("%d",&n);
for(i=0;i<n;i++)
        {
	      scanf("%d",&arr1[i]);
	}
    
for(i=0; i<n; i++)
	{
        	arr2[i] = arr1[i];
	}

    printf("\nThe elements stored in the first array  :\n");
    for(i=0; i<n; i++)
    {
        printf("%d", arr1[i]);
    }
    printf("\n\nThe elements copied into the second array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d", arr2[i]);
    }
}

