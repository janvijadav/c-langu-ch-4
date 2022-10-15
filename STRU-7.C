	
	//example 7
	//expain array and pointer with exa..
	
	void main()
	{
		int a[5],i;
		clrscr();
		for(i=0;i<5;i++)
		{
			printf("Enter a[%d]:",i+1);
			scanf("%d",(a+i));
		}
		for(i=0;i<5;i++)
		{
			printf("\n a[%d]=%d",i+1,*(a+i));
		}
		getch();
	}
 
 o/p:-
 Enter a[1]:1
 Enter a[2]:2
 Enter a[3]:3
 Enter a[4]:4
 Enter a[5]:5
 
 a[1]=1
 a[2]=2
 a[3]=3
 a[4]=4
 a[5]=5
