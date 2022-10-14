

	/*
 * C 62 Program to merge two sorted arrays using for loop
 */
 
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int i, n, j, k;
    printf("Enter the size of the first array: ");
    scanf("%d", &i);

    printf("Enter the elements of the first array: \n");
    for (i = 0; i < n; i++)
    {
	scanf("%d", &n);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &k);

    printf("Enter the elements of the second array: \n");
    for (j = 0; j < k; j++)
    {
	scanf("%d", &j);
    }

    i = j = 0;

    for (i=0;i<n+k;i++)
    {
	if (i < n && j < k)
	{
	    if (i<k)
	    {
		n=i;
		i++;
	    }
	    else
	    {
		n=j;
		j++;
	    }
	}
	else if (i < n)
	{
	    n=i;
	    i++;
	}
	else
	{
	    n=j;
	    j++;
	}
    }
    printf("The merged array is: \n");
    for (i=0;i<n+k;i++)
    {
	printf("%d ",n);
    }
    printf("\n");
    getch();
}

	Enter the size of the first array: 3
Enter the elements of the first array: 
12
18
23
Enter the size of the second array: 3
Enter the elements of the second array: 
13
19
27
The merged array is: 
12 13 18 19 23 27
