
void reverse_print(sll *ptr)
{
      if(ptr==0)
      {
            printf("No records found \n");
            return ;
      }
      
       sll *t=ptr;

      int c=countNode(ptr);
      int i,j;

      for(i=0; i<c; i++)
      {
            t=ptr;

           for(j=0; j<c-1-i; j++)
           {
               t=t->next;
           }
           printf("%d %s %f\n", t->rollno, t->name , t->marks);
      }
}
void reverse_links(sll **ptr)
{
     if(*ptr==0)
     {
           printf("No records \n");
           return ;
     }
     sll *t=*ptr,**a;
     int c=countNode(*ptr);
     if(c>1)
     {
          a=malloc(sizeof(sll *)*c);
 
          int i,j;
         
          for(i=0; i<c; i++)
          {
               a[i]=t;
               
               t=t->next;
          }
          for(i=c-1; i>0; i--)
          {
                a[i]->next = a[i-1];
          }
          a[0]->next=0;
          *ptr=a[c-1];
     }
}
