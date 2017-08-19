#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct treeNode{
	struct treeNode *leftPtr;
	int data;
	struct treeNode *rightPtr;
	
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

void insertNode(TreeNodePtr *treePtr,int value);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);

int main(int argc, char *argv[]) {
	
	int i,item;
	TreeNodePtr rootPtr=NULL;
	
	srand(time(NULL));
	printf("The number being placed in the tree:\n");
	
	for(i=1;i<=10;i++){
		item=rand()%15;
		printf("%3d",item);
		insertNode(&rootPtr,item);
	}
	
	printf("\n\n The preOrder traversal is:\n");
	preOrder(rootPtr);
	
	printf("\n\n The inOrder traversal is:\n");
	inOrder(rootPtr);
	
	printf("\n\n The postOrder traversal is:\n");
	postOrder(rootPtr);

	return 0;
}

void insertNode(TreeNodePtr *treePtr,int value)
{
	if(*treePtr==NULL)
	{
		*treePtr=malloc(sizeof(TreeNode));
		if(*treePtr!=NULL){
		(*treePtr)->data=value;
		(*treePtr)->leftPtr=NULL;
		(*treePtr)->rightPtr=NULL;
		}else{
			printf("%d not insert. No memory available\n");
		}
	}else/*tree is not empty*/
	{
		if(value<(*treePtr)->data){
			insertNode(&((*treePtr)->leftPtr),value);
		}
		else if(value>(*treePtr)->data){
			insertNode(&((*treePtr)->rightPtr),value);
		}else
		{
			printf("dup");//因為有大於小於，但沒有處理等於 
		}
		
	}
}

void inOrder(TreeNodePtr treePtr)
{
	if(treePtr!=NULL){
	inOrder(treePtr->leftPtr);
	printf("%3d",treePtr->data);
	inOrder(treePtr->rightPtr);
	}
}
void preOrder(TreeNodePtr treePtr)
{
	if(treePtr!=NULL){
	printf("%3d",treePtr->data);
	preOrder(treePtr->leftPtr);
	preOrder(treePtr->rightPtr);
	}
}
void postOrder(TreeNodePtr treePtr)
{
	if(treePtr!=NULL){
	postOrder(treePtr->leftPtr);
	postOrder(treePtr->rightPtr);
	printf("%3d",treePtr->data);
	}
}
