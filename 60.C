
#include <stdio.h>
int main()
{   int i;
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;


    int length = sizeof(arr)/sizeof(arr[0]);
	 for (i=0;i<5;i++)
	   {
		  sum = sum + arr[i];
	   }
    printf("Sum of all the elements of an array: %d", sum);
    getch();
}