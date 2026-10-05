
void deleteAll_nodes(sll **ptr)
{
      
     printf("\033[34m--------------------------------------------\n");  
     if(*ptr==0)
     {
        printf("There is No records \n");
        return;
        printf("--------------------------------------------\033[0m\n");
     }
     sll *del;
     del=*ptr;//started from first node 

    int c=1;
    while(del)
    {
        *ptr=del->next;
        printf("Node deleted : %d\n", c++);
        sleep(1);//1 second delay
         free(del);
        del=*ptr;
    }
    printf("All nodes are Deleted...\n");

}
void del_desire_node(sll **ptr)
{
	if(*ptr==0)
	{
		printf("No Records \n");
		return ;
	}
	char name[20];
	printf("Enter the name for Checking the Nodes \n");
	scanf("%s", name);

	sll *del=*ptr,*prev;

	while(del)
	{
		if(strcmp(name , del->name)==0)
		{
			if(del==*ptr)
			{
				*ptr=del->next;
			}
			else
			{
				prev->next=del->next;
			}
			free(del);
                        printf("Node deleted Successfuly\n");
			return;
		}
		prev=del;
		del=del->next;
	}
}
