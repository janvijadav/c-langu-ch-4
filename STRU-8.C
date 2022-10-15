	
	//example 8
	//aray and pointer (method 2)
	
	void main()
	{
		int a[5],i,*p;
		clrscr();
		p=a;//p=&a[0];
		for(i=0;i<5;i++)
		{
			printf("Enter a[%d]:",i);
			scanf("%d",p);
			p++;
		}
		p=a;
		for(i=0;i<5;i++)
		{
			printf("\n a[%d]=%d",i,*p);
			p++;
		}
		getch();
	}
	
o/p:-
Enter a[0]:1
Enter a[1]:2
Enter a[2]:3
Enter a[3]:4
Enter a[4]:5

a[0]=1
a[1]=2
a[2]=3
a[3]=4
a[4]=5

	