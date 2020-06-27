// Reverse a Linked List using Sliding Pointers
#include <bits\stdc++.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = NULL;
    last = head;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
/*
q, r = NULL

____________    ____________    ____________    ____________
| 10 |  \0 |<---| 20 | 190 |<---| 40 | 200 |<---| 60 | 210 |
 190             200             210             220                
                                 r               q  p=NULL           
                                                 head         
*/
void Reverse(struct Node *p) // p = head
{
    struct Node *q = NULL, *r = NULL; // O(1) : Space
    while (p != NULL)                 // O(n) : Time
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head = q;
}

int main()
{
    int A[] = {10, 20, 40, 50, 60};
    // 60, 50, 40, 20, 10
    create(A, 5);
    Reverse(head);
    Display(head);
    return 0;
}