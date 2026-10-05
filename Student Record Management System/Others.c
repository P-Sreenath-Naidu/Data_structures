void PrintNode(sll *ptr)
{
     printf("\033[34m--------------------------------------------\n");
  
     if(ptr==0)
     {
        printf("There is No records \n");
        printf("--------------------------------------------\033[0m\n");
        return;
     }

     while(ptr)
     {
          printf("%d %s %f\n", ptr->rollno, ptr->name , ptr->marks );

          ptr=ptr->next;
     }
     printf("\n-----------------------------------------------------\033[0m\n");

     printf("\n \033[31m ♥  if there's anything else please let me Known !!!! \033[0m\n");
}
void print_Rec(sll *ptr)
{
     if(ptr)
     {
             printf("%d %s %f\n", ptr->rollno, ptr->name , ptr->marks);
             
             ptr=ptr->next;
            print_Rec(ptr);
     }
     else
     printf("No Records \n");
}
void reverse_Rec(sll *ptr)
{
     if(ptr)
     {
               if(ptr->next!=0)
              reverse_Rec(ptr->next);
              printf("%d %s %f\n", ptr->rollno, ptr->name , ptr->marks);
     }
     else
     printf("No Records \n");

}
int countNode(sll *ptr)
{
     printf("\033[34m--------------------------------------------\n");  
     if(ptr==0)
     {
        printf("There is No records \n");
        printf("--------------------------------------------\033[0m\n");
     }
    int c=0;
    while(ptr)
    {
          c++;
       ptr=ptr->next;
    }
    return c;
}