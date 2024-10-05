#include <iostream>
#include <conio.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *start = NULL;

int create(int n)
{
    for (int i = 0; i < n; i++)
    {
        struct node *newnode, *current;
        newnode = (struct node *)malloc(sizeof(struct node));
        cout << "Enter the element of linklist : ";
        cin >> newnode->data;
        newnode->next = start;
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

int insertf(int n)
{
    struct node *newnode, *temp = start;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->next = temp;
    start = newnode;
}

void search(int key)
{
    struct node *temp = start;
    if (temp == NULL)
    {
        cout << "List is empty";
    }
    do
    {
        if (temp->data == key)
        {
            cout << "Yes, it's exist";
            break;
        }
        temp = temp->next;
    } while (temp != start);
}

void display()
{
    struct node *temp = start;
    cout << "\nAll Linklist Element is : ";
    if (temp == NULL)
    {
        cout << "Is empty.";
    }
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != start);
    cout << endl;
}

int main()
{
    while (1)
    {
        int c;
        cout << "_________________________\n| 0. Break\t\t|\n| 1. Create LinkList\t|\n| 2. Insert in first\t|\n| 3. Insert in last\t|\n| 4. Insert in middle\t|\n| 5. Delete from first\t|\n| 6. Delete from last\t|\n| 7. Delete from middle\t|\n| 8. Searching\t\t|\n| 9. Display\t\t|\n|_______________________|\n\nChoose anyone which we want perform -> ";
        cin >> c;
        switch (c)
        {
        case 0:
            system("cls");
            exit(0);
            break;

        case 1:
            int n;
            cout << "Enter how many element you want to insert : ";
            cin >> n;
            create(n);
            break;

        case 2:
            int n1;
            cout << "Insert element is : ";
            cin >> n1;
            insertf(n1);
            break;

        case 8:
            int k;
            cout << "Enter which valu you want to find : ";
            cin >> k;
            search(k);

        case 9:
            display();
            getch();
            break;
        }
        system("cls");
    }
    return 0;
}
