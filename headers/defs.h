struct node{
	char name[50];
	char branch[26];
	struct node *next;
};

void registration(struct node **node);
void display(struct node *node);

/*
struct node{
	char name[50];
	char branch[26];
	struct node *next;
};


(base) vvurubin@VVURUBIN-M-80MR College % make
gcc src/app.c -o college
In file included from src/app.c:2:
src/../headers/defs.h:1:26: warning: declaration of 'struct node' will not be
      visible outside of this function [-Wvisibility]
void registration(struct node **node);
                         ^
src/../headers/defs.h:2:21: warning: declaration of 'struct node' will not be
      visible outside of this function [-Wvisibility]
void display(struct node *node);
                    ^
src/app.c:23:26: warning: incompatible pointer types passing 'struct node **' to
      parameter of type 'struct node **' [-Wincompatible-pointer-types]
                        case 1 : registration(&head);
                                              ^~~~~
src/../headers/defs.h:1:33: note: passing argument to parameter 'node' here
void registration(struct node **node);
                                ^
src/app.c:28:16: warning: incompatible pointer types passing 'struct node *' to
      parameter of type 'struct node *' [-Wincompatible-pointer-types]
                                                display(head);
                                                        ^~~~
src/../headers/defs.h:2:27: note: passing argument to parameter 'node' here
void display(struct node *node);
                          ^
src/app.c:38:6: error: conflicting types for 'registration'
void registration(struct node **node){
     ^
src/../headers/defs.h:1:6: note: previous declaration is here
void registration(struct node **node);
     ^
src/app.c:61:6: error: conflicting types for 'display'
void display(struct node *node){
     ^
src/../headers/defs.h:2:6: note: previous declaration is here
void display(struct node *node);
     ^
4 warnings and 2 errors generated.
make: *** [college] Error 1
*/