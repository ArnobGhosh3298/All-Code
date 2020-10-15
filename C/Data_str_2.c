#include <stdlib.h>
#include <stdio.h>
// Declare the Node
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
// Insert the node a the beginning of a linked list
void insert(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    head = temp;
}
void print()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->data); 
        temp = temp->next;
        printf("\n");
    }
}
int main()
{
    head = NULL;
    insert(4);
    insert(5);
    insert(6);
    print();
}