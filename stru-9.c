	
	//exapmle 9..
	//pointer and 2d array.
	
	void main()
	{
		int a[2][3]={10,20,30,40,50,60},i,j;
		clrscr();
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\t %d",*(*(a+i)+j));
			}
			printf("\n");
		}
		getch();
	}
	
o/p:-
	10 20 30
	40 50 60