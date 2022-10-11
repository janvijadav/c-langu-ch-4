
	//structure 3
	//example of array with in structure..

	struct stud
	{
		int rn;
		char nm[20];
		int m[3],total;
	};

	void main()
	{
		struct stud s[5];
		int i,j;
		clrscr();
		for(i=0;i<5;i++)
		{
			printf("Enter rollno,Name and Marks of 3");
			scanf("%d %s",&s[i].rn,s[i].nm);
			s[i].total=0;
			for(j=0;j<3;j++)
			{
				scanf("%d",&s[i].m[j]);
				s[i].total+=s[i].m[j];
			}
		}
		printf("\n Rollno \t Name \t m1 \t m2 \t m3 \t total");
		for(i=0;i<5;i++)
	{
		printf("\n %d \t \t %s", s[i].rn,s[i].nm);
		for(j=0;j<3;j++)
		printf("\t %d",s[i].m[j]);
		printf("\t %d",s[i].total);
	}
	getch();
}

