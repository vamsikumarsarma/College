#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../headers/defs.h"

int main(){

	int ch;
	struct node *head = NULL;
	while(1){
		printf("\n**Enter Choices**\n");
		printf("1.Registration\n");
		printf("2.display\n");
		printf("3.exit\n");
		printf("Enter a choice\n");
		scanf("%d", &ch);

		switch(ch){
			case 1 : registration(&head);
					 break;
			case 2 : if(head == NULL)
						printf("No Registrations yet\n");
					 else{
					 	display(head);
					 }
					 break;
			case 3 : exit(0);
		}
	}

	return 0;
}

void registration(struct node **node){
 
	struct node *temp;
	char name[50], branch[26];
	temp = (struct node *)malloc(sizeof(struct node));
	printf("Enter name\n");
	fscanf(stdin,"%s", name);
	strcpy(temp->name, name);
	printf("Enter branch\n");
	fscanf(stdin,"%s", branch);
	strcpy(temp->branch, branch);

	if(*node == NULL){
		*node = temp;
	}
	else{
		struct node *q = *node;
		while(q->next != NULL)
			q = q->next;
		q->next = temp;
	}
}

void display(struct node *node){

	while(node){
		printf("Student name: %s\t Branch: %s\n", node->name, node->branch);
		node = node->next;
	}
}