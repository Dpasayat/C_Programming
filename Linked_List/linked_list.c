#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node* link;
};
struct node *head;

struct node *createnode(struct node* head, int value)
{
    struct node *p, *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = NULL;
    p = head;

    if(p)
    {
        while(p->link != NULL)
        {
            p = p->link;
            
        }
        p->link = temp;
        return head;
    }
    else{
        head = temp;
        return head;
    }
}
void display(struct node *head)
{
    struct node *p;
    if(head == NULL)
    {
        printf("Empty list\n");
        return 1;
    }
    p = head;
    printf("List is :\n");
    while(p != NULL){
        printf("%d ", p->data);
        p = p->link;
    }
    printf("\n");
}

struct node *insert_at_begining(struct node *head, int data)
{
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = data;
    p->link = head;
    head = p;
    return head;
}
struct node *insert_at_end(struct node *head, int data){
	struct node *p;
	p = (struct node*)malloc(sizeof(struct node));
	p->data = data;
	p->link = NULL;
	struct node *temp = head;
	while(temp->link != NULL)
	{
		temp = temp->link;
	}
	temp->link = p;
	return head;
}

int main()
{
    head = NULL;
    int n;
    printf("Enter the number of elements you want to add in the list : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int value;
        printf("Enter the value of element %d : ", i+1);
        scanf("%d", &value);
        head = createnode(head, value);
    }
        display(head);
	head = insert_at_begining(head, 0);
	head = insert_at_end(head, 999);
	display(head);

    
    return 0;
}
