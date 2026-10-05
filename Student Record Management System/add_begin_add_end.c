void add_beg(sll **ptr)
{
     sll *new;  //struct one *ptr // is, declaring a struct pointer 
     
     static int roll=1;
     new=malloc(sizeof(sll));// allocate a Dma for the ptr (sizeof (struct one ))
     
      new->rollno=roll++; 
      
      printf("enter the Data of Student \n");
    
     scanf("%s %f",new->name, &new->marks);

     new->next=*ptr; 

     *ptr=new;
}
void add_end(sll **ptr)
{
     sll *new ,*last;

     new=malloc(sizeof(sll));//create size for node;

     printf("Enter the Student data \n");
     scanf("%d %s %f",&new->rollno , new->name, &new->marks);
   
     new->next=0;

     if(*ptr==0)
     {
        *ptr=new;
     }
     else
     {
           last=*ptr;

          while(last->next)
          last=last->next;
          last->next=new;
     }

}