#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <string.h>
 
#define SLEN 255
 
 struct list {
   int  no;
   char name[SLEN];
   struct list *next;
 };
 
 int main() {
   int no;
   char s[255];
  
   struct list *head    = NULL;
   struct list *current = NULL;
   struct list *prev    = NULL;
  
   while(1) {
     printf("No. = ");
     scanf("%d", &no);
    
     if (no == 0)
       break;
  
     printf("Name = ");
     scanf("%s", s);
    
     current = (struct list *)malloc(sizeof(struct list));
     if (current == NULL)
       exit(EXIT_FAILURE);
      
     current->next = NULL;
    
     current->no = no;
     strncpy(current->name, s, SLEN -1);
     current->name[SLEN -1] = '\0';
    
     if (head == NULL)
       head = current;
     else
       prev->next = current;
      
     prev = current;
   }
  
   // display linked list
   current = head;
   while(current != NULL) {
     printf("No. = %d, Name = %s\n", current->no, current->name);
     current = current->next;
   }
  
   // free linked list
   current = head;
   while(current != NULL) {
     prev = current;
     current = current->next;
     free(prev);
   }
 }
/*
typedef struct ns
{
	int data;
	struct ns *next;
}node;

node* create(int);
void insert(node*, node*);
//void remove(node*);
void print(node*);
//void free(node*);

void instructions(void);
int main(int argc, char *argv[]) {
	int choice;
	int item;
	
	node* list = (node*)malloc(sizeof(node));
    list->data = NULL;
    list->next = NULL;
	
	instructions();
	printf("?");
	scanf("%d",&choice);
	
	while(choice!=4)
	{
		switch(choice)
		{
			case 1:
				printf("enter value:");
				scanf("%d",&item);
				node *data=create(item);
				insert(list,data);
				print(list);
				break;
			case 3:
			
				break;
			default:
				printf("Invalid choice\n\n");
				instructions();
				break;
				
		}
	}
}
void instructions(void)
{
	printf("enter yoour choice:\n"
	"	1.	insert data\n"
	"	2.	remove data\n"
	"	3.	print data");
	
}
node* create(int item)
{
	node* n = (node*)malloc(sizeof(node));
	n->data = item;
    n->next = NULL;

    return n;
}
void insert(node* list, node* item)
{
	if(list->data==NULL)
	{
		list->data=item->data;
		list->next=item->next;
	}
	else
	{
	
	item->next=list->next;
	list->next=item;
	}
}
void print(node* lists)
{
    node* n = lists;

    // 依序印出節點內容
    while (n != NULL)
    {
        printf("%d ", n->data);

        n = n->next;
    }

    printf("\n");
}
*/
/*
// 宣告節點結構
typedef struct ns
{
    int data;
    struct ns* next;
} node;

// 宣告相關函式
node* create_node(int);
void insert_node(node*, node*);
void remove_node(node*);
void print_lists(node*);
void free_lists(node*);

int main(void)
{
    // 宣告節點
    node* lists = create_node(0);
    node* a = create_node(1);
    node* b = create_node(2);
    node* c = create_node(3);
    node* d = create_node(4);
    node* e = create_node(5);

    // 0 -> 5
    insert_node(lists, e);

    // 0 -> 1 -> 5
    insert_node(lists, a);

    // 1 -> 2 -> 5
    insert_node(a, b);

    // 1 -> 3 -> 2
    insert_node(a, c);

    // 5 -> 4
    insert_node(e, d);

    print_lists(lists);
    free_lists(lists);

    system("pause");
}

node* create_node(int data)
{
    // 動態配置記憶體
    node* n = (node*)malloc(sizeof(node));

    n->data = data;
    n->next = NULL;

    return n;
}

void insert_node(node* n1, node* n2)
{
    n2->next = n1->next;
    n1->next = n2;
}

void remove_node(node* n1)
{
    n1->next = n1->next->next;
}

void print_lists(node* lists)
{
    node* n = lists;

    // 依序印出節點內容
    while (n != NULL)
    {
        printf("%d ", n->data);

        n = n->next;
    }

    printf("\n");
}

void free_lists(node* lists)
{
    // 遞迴刪除串列所有節點
    if (lists->next != NULL)
    {
        free_lists(lists->next);
    }

    free(lists);
}*/
