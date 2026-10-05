#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
typedef struct one
{
	int rollno;
	char name [20];
	float marks;

	struct one *next;  //self referantial pointer...

} sll;

void add_beg(sll**); //call by reference....//struct one ----> sll (re-named)
void PrintNode(sll *);//call by value ;
int countNode(sll *);
void save_file(sll *);
void read_file(sll **);
void deleteAll_nodes(sll**);
void add_end(sll**);
void reverse_print(sll *);
void print_Rec(sll *);
void reverse_Rec(sll *);
void search_Node(sll *);
void sort_data(sll *);
void del_desire_node(sll **);
void reverse_links(sll **);
void insert_node(sll **ptr);