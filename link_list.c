#include<stdio.h>
#include<conio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;	
}*start=NULL;

void create()
{
	char ch;
	
	do
	{
		struct node *current,*new_node;
		new_node=(struct node *)malloc(sizeof(struct node));
		printf("\n Enter Data \n");
		scanf("%d",&new_node->data);
		new_node->next=NULL;
		if(start==NULL)
		{
			start=new_node;
			current=new_node;
		}
		else
		{
			current->next=new_node;
			current=new_node;
			
		}
		printf("nDo you want to creat another : ");
 		ch=getche();
	}while(ch!='n');
	
	
	
}
void show()
{
	struct node *tmp;
	tmp=start;
	do {
		printf("\n Data Is %d \n",tmp->data);
    	tmp = tmp->next; 

		}while(tmp!=NULL);
}
int main()
{
	create();
	show();
	return 0;
}
