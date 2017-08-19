#include <stdio.h>
#include <stdlib.h>
/*sptr	previousPtr	currentPtr*/

/*structure for node*/
struct listnode
{
	char data;//data type
	struct listnode *nextPtr;//point to next node
};

typedef struct listnode Listnode;//get node name
typedef Listnode *ListnodePtr;//pointer for Listnode, like listnode*

/*宣告*/
void insert(ListnodePtr *sPtr, char value);//sptr - startPtr
char delete(ListnodePtr *sPtr,char vlaue);
int isEmpty(ListnodePtr sPtr);//if sptr =null, no data;else have data
void printList(ListnodePtr currentPtr);//print list
void instructuions(void);//show choice for user

int main(int argc, char *argv[])
{

	ListnodePtr startPtr=NULL;//give null value for pointer
	int choice;
	char item;//data
	
	instructuions();//show choice
	printf("?");
	scanf("%d",&choice);
	
	/*while loop for user choice unless choice 3 for left*/
	while(choice!=3)
	{
		switch(choice)
		{
			case 1:
				printf("Enter a character:");
				scanf("\n%c",&item);
				insert(&startPtr,item);//to startPtr and data
				printList(startPtr);
				break;
			case 2:
				/*if character not empty*/
				if(!isEmpty(startPtr)){
					printf("Enter character to be delete:");
					scanf("\n%c",&item);
					/*if character is found, remove*/
					if(delete(&startPtr,item))
					{
					
						printf("%c delete \n",&item);
						printList(startPtr);
					}
					else{
						printf("%c not found\n\n",item);
					}

					
				}
				else
				{
				
					printf("list is empty");
				}
				break;
			default:
				printf("Invalid choice");
				instructuions();
				break;
					
		}
		printf("?");
		scanf("\n%d",&choice);
	}
	printf("End run");
	
	return 0;
}

void instructuions(void)
{
	printf("enter choice;\n"
	"	1 insert data to list\n"
	"	2 delete a data from list\n"
	"	3 to end");
	
}
void insert(ListnodePtr *sPtr, char value)
{
	ListnodePtr newPtr;//point to new node
	ListnodePtr previousPtr;//point to the node before in list
	ListnodePtr currentPtr;//point to current node in list
	
	newPtr=malloc(sizeof(Listnode));//create new mem space for new node and let newptr point to it
	
	if(newPtr!=NULL)//because some time mall will fail
	{
		newPtr->data=value;
		newPtr->nextPtr=NULL;
		
		previousPtr=NULL;
		currentPtr=*sPtr;//if it's only node
		
		/*order node*/
		while(currentPtr!=NULL&&value>currentPtr->data)
		{
			previousPtr=currentPtr;
			currentPtr=currentPtr->nextPtr;
		}
		
		/*insert to list*/
		if(previousPtr==NULL)//insert new node at beginning of list
		{
			/*this is swap each other*/
			newPtr->nextPtr=*sPtr;
			*sPtr=newPtr;
		}
		else//insert node between previous and current
		{
			previousPtr->nextPtr=newPtr;
			newPtr->nextPtr=currentPtr;
		}
	}
	else
	{
		printf("%c not inserted. No mem available...\n");
	}
}
char delete(ListnodePtr *sPtr, char value)
{
	ListnodePtr previousPtr;//point to the node before in list
	ListnodePtr currentPtr;//point to current node in list
	ListnodePtr tempPtr;
	
	/*delete first node*/
	if(value==(*sPtr)->data)//because it's want to delete first node
	{
		tempPtr=*sPtr;//temp point to  first node
		*sPtr=(*sPtr)->nextPtr;//use sPtr re-point to new node at begging of list
		
		free(tempPtr);//release mem space
		return value;
	}
	else
	{
		/*把sptr的node給previousPtr，並把sPtr的下一個節點給currentPtr*/
		previousPtr=*sPtr;
		currentPtr=(*sPtr)->nextPtr;
		
		//walk
		while(currentPtr!=NULL&&currentPtr->data!=value)
		{
			previousPtr=currentPtr;
			currentPtr=currentPtr->nextPtr;
		}
		if(currentPtr!=NULL)
		{
			tempPtr=currentPtr;
			previousPtr->nextPtr=currentPtr->nextPtr;//null
			free(tempPtr);
			return value;
		}
	}
	return '\0';
}
int isEmpty(ListnodePtr sPtr)
{
	return sPtr==NULL;
}
void printList(ListnodePtr currentPtr)
{
	if(currentPtr==NULL)
	{
		printf("is Empty list\n");
	}
	else
	{
		printf("list:");
		while(currentPtr!=NULL)
		{
			printf("%c-->",currentPtr->data);
			currentPtr=currentPtr->nextPtr;
		}
		printf("NULL\n\n");
	}
}



























