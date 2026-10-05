void save_file(sll *ptr)
{
     printf("\033[34m--------------------------------------------\n");  
     if(ptr==0)
     {
        printf("There is No records \n");
        return;
        printf("--------------------------------------------\033[0m\n");
     }
     
     char s[20];
     printf("Enter the File name To Save !! \n");
     scanf("%s", s);

     FILE *fp=fopen(s,"w");
 
     while(ptr)
     {
         fprintf(fp, "%d %s %f\n", ptr->rollno, ptr->name, ptr->marks );

         ptr=ptr->next;
     }
     printf("Data saved in file \n");
     fclose(fp);
 
}
void read_file(sll **ptr)
{
     sll *new,*last;

    // char s[20];
    // printf("Enter the file name to Read data \n");
     //scanf("%s", s);

     FILE *fp=fopen("data","r");
     if(fp==0)
     {
                printf("\n \033[5;31m Student database Not Found !! \033[0m\n");
                return;
     }
     while(1)
     {
            new=malloc(sizeof(sll));
        
            if(fscanf(fp,"%d %s %f", &new->rollno, new->name, &new->marks)==-1)
            break;

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
}
