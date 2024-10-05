#include <iostream>
using namespace std;

struct node
{
    int info;
    struct node *next;
} *start = NULL;

void create(int n)
{
    for (int i = 1; i <= n; i++)
    {
        struct node *newnode, *current;
        newnode = (struct node *)malloc(sizeof(struct node));
        cout << "Insert the new node data : ";
        cin >> newnode->info;
        newnode->next = NULL;
        if (start == 0)
        {
            start = newnode;
            current = newnode;
        }
        else
        {
            current->next = newnode;
            current = current->next;
        }
    }
}

void reverse()
{
    struct node *current = start, *pre = NULL, *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = pre;
        pre = current;
        current = next;
    }
    start = pre;
}

void display()
{
    struct node *temp = start;
    cout << "Current list is - ";
    while (temp != NULL)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter how many element you want to insert -> ";
    cin >> n;
    create(n);
    display();
    cout << "After, reverse linklist : "<<endl;
    reverse();
    display();
    return 0;
}
