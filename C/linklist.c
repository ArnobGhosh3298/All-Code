#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};

struct node *emplist(struct node *start, int data);

struct node *beg(struct node *start, int data);

struct node *end(struct node *start, int data);

struct node *nthposition(struct node *start, int data, int position);

void disp(struct node *start);

int main()
{
    struct node *start = NULL;
    int ch, data, position;

    while (1)
    {
        printf("1. Insert in an Emptylist\n");
        printf("2. Insert at begining\n");
        printf("3. Insert at End\n");
        printf("4. Insert at Nthposition\n");
        printf("5. Display\n");
        printf("6. End program\n");
        printf("Enter a choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            if (start != NULL)
            {
                printf("List is no empty\n");
                break;
            }
            printf("Enter Elements : ");
            scanf("%d", &data);
            start = emplist(start, data);
            break;
        case 2:
            printf("Enter Elements : ");
            scanf("%d", &data);
            start = beg(start, data);
            break;
        case 3:
            printf("Enter Elements : ");
            scanf("%d", &data);
            start = end(start, data);
            break;
        case 4:
            printf("Enter Elements : ");
            scanf("%d", &data);
            printf("Enter Position : ");
            scanf("%d", &position);
            start = nthposition(start, data, position);
            break;
        case 5:
            disp(start);
            break;
        case 6:
            exit(0);
        default:
            printf("ERROR\n");
        }
    }

    return 0;
}

struct node *emplist(struct node *start, int data)
{
    struct node *temp;

    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = start;
    start = temp;
    return start;
}

struct node *beg(struct node *start, int data)
{
    struct node *temp;

    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = start;
    start = temp;
    return start;
}

struct node *end(struct node *start, int data)
{
    struct node *p, *temp;

    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    p = start;

    while (p->link != NULL)
    {
        p = p->link;
    }
    p->link = temp;
    temp->link = NULL;
    return start;
}

struct node *nthposition(struct node *start, int data, int position)
{
    int i;

    struct node *p, *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;

    if (position == 1)
    {
        temp->link = start;
        start = temp;
        return start;
    }

    p = start;
    for (i = 1; i < position - 1 && p != NULL; i++)
    {
        p = p->link;
    }

    if (p == NULL)
    {
        printf("There are less than %d elements\n", position);
    }
    else
    {
        temp->link = p->link;
        p->link = temp;
    }
    return start;
}

void disp(struct node *start)
{
    struct node *p;
    if (start == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        p = start;
        printf("LIST : \n");
        while (p != NULL)
        {
            printf("%d\t", p->info);
            p = p->link;
        }
        printf("\n");
    }
}