#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct linkedlist *initialize();
void add(struct linkedlist* list, int value);
void print_list(struct linkedlist *list);

struct node{
    int data;
    struct node *next;
};

struct linkedlist{
    int size;
    struct node *head;
};

// (ptr) -> dataMember x->y if x is a ptr
// (instance) . datamember x.y if x is an instance

struct linkedlist *initialize(){
    struct linkedlist* list = malloc(sizeof(struct linkedlist));
    list->size = 0;
    list->head = NULL;	//We can use null to track end of list
    return list;
}

void add(struct linkedlist* list, int value)
{
    //Code to add an element to a LinkedList
    struct node * temp = malloc(sizeof(struct node));
    temp->data = value;
    temp->next = list->head;
    list->head = temp;
    list->size++;
}

void print_list(struct linkedlist *list)
{
    struct node * temp = list->head;
    while(temp != NULL)
    {
    	printf("%d ", temp->data);
    	temp = temp->next;
    }
}

// delete()
// 	iterate over list to find what you want to delete
//	--- Need to be looking at temp->next->data
//      --- toBeFreed = temp->next
//      --- temp->next = temp->next->next
//      free(toBeFreed)

void print_reverse(struct linkedlist *list)
{
    //Code to print a LinkedList in reverse
}

int main()
{
	struct linkedlist* example = initialize();
	add(example, 10);
	add(example, 20);
	add(example, 30);
	print_list(example);
	printf("\n");
}
   
