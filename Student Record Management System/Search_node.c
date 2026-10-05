void search_Node(sll *ptr)
{
       if(ptr==0)
       {
            printf("No Records \n");
            return ;
       }
       int flag=0;
       
      // char name[20];
     //  printf("Enter the string for search \n");
      // scanf("%s", name);
       int num;
       printf("Enter the Rollno for search \n");
       scanf("%d", &num);

       while(ptr)
       {
             //  if(strcmp(ptr->name,name)==0)
               if(ptr->rollno==num)
               {
                   flag=1;
               printf("%d %s %f\n",ptr->rollno, ptr->name , ptr->marks);
               }
                  ptr=ptr->next;
               
       }
       if(flag==0)
       printf("No record Found \n");
}