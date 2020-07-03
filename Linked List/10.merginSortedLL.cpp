#include <bits\stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *sortedMerge(Node *head_A, Node *head_B)
{
    // code here
    Node *third, *last;

    if (head_A->data <= head_B->data)
    {
        third = last = head_A;
        head_A = head_A->next;
        third->next = NULL;
    }
    else
    {
        third = last = head_B;
        head_B = head_B->next;
        third->next = NULL;
    }

    while (head_A != NULL && head_B != NULL)
    {
        if (head_A->data <= head_B->data)
        {
            last->next = head_A;
            last = head_A;
            head_A = head_A->next;
            last->next = NULL;
        }
        else
        {
            last->next = head_B;
            last = head_B;
            head_B = head_B->next;
            last->next = NULL;
        }
    }
    if (head_A != NULL)
        last->next = head_A;
    if (head_B != NULL)
        last->next = head_B;
    return third;
}