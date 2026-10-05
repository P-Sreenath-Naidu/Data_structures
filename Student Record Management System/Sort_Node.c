void sort_data(sll *ptr)
{
	if(ptr==0)
	{
		printf("No Records Found \n");
		return;
	}
	int c=countNode(ptr),i,j;
	sll *p1=ptr , *p2,t;

	for(i=0; i<c-1; i++)
	{
		p2=p1->next;
		for(j=0; j<c-1-i; j++)
		{
			if(p1->rollno > p2->rollno)
			{
				t.rollno=p1->rollno;
				strcpy(t.name, p1->name);
				t.marks=p1->marks;

				p1->rollno=p2->rollno;
				strcpy(p1->name , p2->name);
				p1->marks = p2->marks;

				p2->rollno = t.rollno;
				strcpy(p2->name , t.name);
				p2->marks = t.marks;
			}
			p2=p2->next;
		}
		p1=p1->next; 
	}
}
