
	/**
 * 79 C program to copy one string to another string without using strcpy()
 */

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char a[MAX_SIZE];
    char b[MAX_SIZE];
    int i;

    printf("Enter any string: ");
    gets(a);


    for(i=0; a[i]!='\0'; i++)
    {
	b[i] = a[i];
    }

    b[i] = '\0';

    printf("First string = %s\n", a);
    printf("Second string = %s\n", b);
    printf("Total characters copied = %d\n", i);

    return 0;
}