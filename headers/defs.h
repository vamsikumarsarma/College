void registration(struct node **node);
void display(struct node *node);

struct node{
	char name[50];
	char branch[26];
	struct node *next;
};