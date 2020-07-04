//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data;
        node = node->next;
    }
    cout << "\n";
}

Node *addOne(Node *head);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Node *head = new Node(s[0] - '0');
        Node *tail = head;
        for (int i = 1; i < s.size(); i++)
        {
            tail->next = new Node(s[i] - '0');
            tail = tail->next;
        }

        head = addOne(head);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends

//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/
Node *newNode(int data)
{
    Node *new_node = new Node(data);
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

int addWithCarry(Node *head)
{
    if (head == NULL)
        return 1;

    int res = head->data + addWithCarry(head->next);
    head->data = res % 10;

    return res / 10;
}

Node *addOne(Node *head)
{
    // Your Code here
    // return head of list after adding one
    int carry = addWithCarry(head);

    if (carry)
    {
        Node *newNode = new Node(0);
        newNode->data = carry;
        newNode->next = head;
        head = newNode;
    }
    return head;
}