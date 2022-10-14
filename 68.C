#include<stdio.h>
void main()
{
	int i,ar1[10],ar2[10],sum[10];
	printf("Enter first array:-\n");
	for(i=0;i<=9;i++)
	{
		printf("ar1[%d]=",i);	
		scanf("%d",&ar1[i]);
	}
	printf("Enter second array:-\n");	
	for(i=0;i<=9;i++)
	{
		printf("ar2[%d]=",i);	
		scanf("%d",&ar2[i]);
	}
	
	for(i=0;i<=9;i++)
	{
		sum[i]=ar1[i]+ar2[i];
	}
	
	printf("Sum of arrays:-");	
	for(i=0;i<=9;i++)
	{
		printf("\nsum[%d]=%d",i,sum[i]);	
	}
		
}


Enter first array:-
ar1[0]=1
ar1[1]=2
ar1[2]=3
ar1[3]=4
ar1[4]=5
ar1[5]=6
ar1[6]=7
ar1[7]=8
ar1[8]=9
ar1[9]=10
Enter second array:-
ar2[0]=11
ar2[1]=22
ar2[2]=33
ar2[3]=44
ar2[4]=55
ar2[5]=66
ar2[6]=77
ar2[7]=88
ar2[8]=99
ar2[9]=100
Sum of arrays:-
sum[0]=12
sum[1]=24
sum[2]=36
sum[3]=48
sum[4]=60
sum[5]=72
sum[6]=84
sum[7]=96
sum[8]=108
sum[9]=110