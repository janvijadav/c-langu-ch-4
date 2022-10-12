
	//example2...
	//example of initialization of stur..

	struct Demo
	{
		int a;
		float b;
		char c;
	};
	void main()
	{
		struct Demo d={100,19.234,'c'};
		clrscr();
		printf("\n a =%d",d.a);
		printf("\n b=%.2f",d.b);
		printf("\n c=%c",d.c);
		printf("\n struct demo occupy %d bytes",sizeof(d));
		getch();
	}
