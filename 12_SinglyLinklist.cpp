#include <conio.h>
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
        cout << "Insert the " << i << " value : ";
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

void insertf()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    cout << "Enter the new element - ";
    cin >> temp->info;
    temp->next = start;
    start = temp;
}

void insertl()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter the new element - ";
    cin >> newnode->info;
    struct node *temp = start;
    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            temp->next = newnode;
            newnode->next = NULL;
        }
        temp = temp->next;
    }
}

void insertm(int p, int v)
{
    struct node *fpos = start;
    struct node *pos = start->next;
    while (pos->info != p)
    {
        fpos=fpos->next;
        pos=pos->next;
    }
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->info = v;
    temp->next = pos;
    fpos->next = temp;
}

void deletef()
{
    struct node *temp = start;
    start = start->next;
    free(temp);
}

void deletel()
{
    struct node *prev = start;
    struct node *temp = start->next;
    while (temp->next != NULL)
    {
        prev = prev->next;
        temp = temp->next;
    }
    free(temp);
    prev->next = NULL;
}

void deletem(int p)
{
    struct node *fpos = start;
    struct node *pos = start->next;
    while (pos->info != p)
    {
        fpos=fpos->next;
        pos=pos->next;
    }
    fpos->next = pos->next;
    free(pos);
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

void search(int key)
{
    struct node *temp = start;
    while (temp != NULL)
    {
        if (temp->info == key)
        {
            cout << "----------Yes, value is exits----------\n";
            break;
        }
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "----------No, value is not exits----------\n";
    }
    getch();
}

int main()
{
    int n;
    cout << "\n\t[ At first create a linklist and element should be more than one ] ";
    cout << "\nEnter how many element you want to insert -> ";
    cin >> n;
    if (n == 1)
    {
        cout << "\n\t\t\t[ Wrong input ]";
        exit(0);
    }
    else
    {
        create(n);
    }
    system("cls");
    display();

    while (true)
    {
        int c;
        cout << "_________________________\n| 1. Insert in first\t|\n| 2. Insert in last\t|\n| 3. Insert in middle\t|\n| 4. Delete from first\t|\n| 5. Delete from last\t|\n| 6. Delete from middle\t|\n| 7. Searching\t\t|\n| 8. Exit\t\t|\n|_______________________|\n\nChoose anyone which we want perform -> ";
        cin >> c;
        switch (c)
        {
        case 1:
            insertf();
            break;
        case 2:
            insertl();
            break;
        case 3:
            int p,v;
            cout<<"Which value before you want to insert the element : ";
            cin>>p;
            cout<<"Enter the insert the value : ";
            cin>>v;
            insertm(p,v);
            break;
        case 4:
            deletef();
            break;
        case 5:
            deletel();
            break;
        case 6:
            int i;
            cout<<"Enter which value you want to delete : ";
            cin>>i;
            deletem(i);
            break;
        case 7:
            int key;
            cout << "Search this value -> ";
            cin >> key;
            search(key);
            break;
        case 8:
            exit(0);
            system("cls");
            break;
        default:
            cout << "\n--------Try Again--------";
            getch();
            break;
        }
        system("cls");
        display();
    }
    return 0;
}
