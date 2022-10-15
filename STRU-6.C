	
	//example 6
	//pointer
	
	void main()
	{
		int x=10,y;
		int *ptr;
		clrscr();
		ptr=&x;
		y=*ptr;//y=valur at address(ptr)
		printf("\n \t x:%d",x);
		printf("\n \t %u refers %d",&x,x);
		printf("\n \t %d id dtored at %u",*&x,&x);
		printf("\n \t %u refers with %u",ptr,&ptr);
		printf("\n \t y: %d",y);
		*ptr=25;
		printf("\n \t now x=%d",x);
		getch();
	}
	
o/p:-
x:10
65524 refers 10 
10 id dtored at 65524
65524 refers with 65520
y:10
now x=25