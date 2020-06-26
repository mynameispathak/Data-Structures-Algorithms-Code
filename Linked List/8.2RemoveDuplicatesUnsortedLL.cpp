// Remove Duplicates from Sorted Linked List
#include <bits\stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;

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
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

Node *removeDuplicates(Node *head)
{
    // your code goes here
    set<int> s;
    Node *t = head;
    s.insert(t->data);
    while (t->next != NULL)
    {
        if (s.find(t->next->data) != s.end())
        {
            t->next = t->next->next;
        }
        else
        {
            t = t->next;
            s.insert(t->data);
        }
    }
    return head;
}

int main()
{
    int A[] = {10, 20, 20, 40, 50, 50, 50, 60};
    create(A, 8);
    removeDuplicates(first);
    Display(first);
    return 0;
}