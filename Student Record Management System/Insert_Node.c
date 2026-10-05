void insert_node(sll **ptr)
{
	sll *new , *t=*ptr;
	
       int c=countNode(*ptr),i,pos;

	if(*ptr==0)
	{
		printf("No records \n");
		return;
	}
	new=malloc(sizeof(sll));
        printf("Enter the data for Insert , Rollno , name , marks \n");
	scanf("%d %s %f",&new->rollno, new->name, &new->marks);

        printf(" Enter the position for Insert \n");
        scanf("%d", &pos);

	if(pos==1)
	{
		new->next=*ptr;
		*ptr=new;
		return;
	}
	for(i=0; i<pos-1; i++)
		t=t->next;

	new->next=t->next;
	t->next=new;
}