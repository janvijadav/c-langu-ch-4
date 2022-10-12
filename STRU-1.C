
	//example 1
	//example of structure..

	struct demo
	{
		int a;
		float b;
		char c;
	};
	void main()
	{
		struct demo d;
		clrscr();
		printf("Enter an int , a float and a char.type value:");
		scanf("%d %f %c",&d.a,&d.b,&d.c);
		printf("\n a=%d",d.a);
		printf("\n b=%.2f",d.b);
		printf("\n c=%c",d.c);
		getch();
	}