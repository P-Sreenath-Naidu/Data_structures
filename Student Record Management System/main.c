#include "header.h"
int main ()
{
       sll *headptr=0;
       int op,c=0;   
     
       while(1)
       {
               
               printf("\n \033[33m ♥  My dear ! enter your choise \033[0m\n");

               printf("\n \033[32m 1. Add begin 2. Add End  3. Print Node 4. Count Node  \n 5. Save file 6. Read File data 7. Delete All Nodes 8. Reverse print \n 9. Print_Rec 10. Reverse_Rec 11. Search Node 12. Sort_data \n 13. Delete_desire_node 14. Reverse Links  15. Insert Node 16. Exit \033[0m\n");

               scanf(" %d", &op);
               switch(op)
               {
                    case 1  : add_beg(&headptr);break;
                    case 2  : add_end(&headptr);break;
                    case 3  : PrintNode(headptr); break;
                    case 4  : c=countNode(headptr);
                              printf("count = %d\n" , c);break;
                    case 5  : save_file(headptr);break;
                    case 6  : read_file(&headptr);break;
                    case 7  : deleteAll_nodes(&headptr);break;
                    case 8  : reverse_print(headptr);break;
                    case 9  : print_Rec(headptr); break;
                    case 10 : reverse_Rec(headptr);break;
                    case 11 : search_Node(headptr);break;
                    case 12 : sort_data(headptr);break;
                    case 13 : del_desire_node(&headptr);break;
                    case 14 : reverse_links(&headptr);break;
                    case 15 : insert_node(&headptr);break;

                    case 16: printf("\n \033[31m ♥  Bye.......!\n \033[0m\n"); return 0;

                    default : printf("\n \033[5;31m invalid Choise \033[0m\n");
                              break;
                              
               }
       }
}
