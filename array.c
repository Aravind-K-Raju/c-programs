#include<stdio.h>
void create(int [],int);
void insert(int [],int*);
void delete(int m[100],int*);
void display(int m[100],int);
int main()
{
    int n,i,N,j,a[100];
    while (1)
    {
    printf("Enter '1' to create an array\n");
    printf("Enter '2' to insert element to array\n");
    printf("Enter '3' to delete element from array\n");
    printf("Enter '4' to display array\n");
    printf("Enter '5' to Exit\n\n");
    printf("Enter choice : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("\nEnter the number of elements to be inserted (array limit 100): ");
            scanf("%d",&N);
            if (N>100)
            {
                printf("Array limit reached\n\n");
                break;
            }
            else
            { 
            create(a,N);
            break;
            }

        case 2:
            if (N==100)
            {
                printf("Array limit reached");
            }
            else
            { 
                insert(a,&N);
                break;
            }

        case 3:
            if(N==0)
            {
                printf("UNDERFLOW , No elements to delete");
            }
            else
            {
                delete(a,&N);
                break;
            }

        case 4:
            display(a,N);
            break;

        case 5:
            printf("Exiting...");
            return 0;

        default:
            printf("Invalid choice...");
            break;
    }
    }
}

void create(int m[100],int q)
{
    int i;
    printf("\nEnter the elements\n");
    for (i=0;i<q;i++)
    {
        scanf("%d",&m[i]);
    }
    printf("Elements entered\n\n");
}

void insert(int m[100],int*c)
{   
    int n,p,i;
    printf("\nEnter the number to be inserted\n");
    scanf("%d",&n);
    printf("Enter the position to be inserted\n");
    scanf("%d",&p);
    if(p>*c+1||p<0)
    {
        printf("Invalid position\nEnter from 1 to %d\n\n",*c+1);
    }
    else
    {
    for(i=*c;i>p;i--)
    {
        m[i]=m[i-1];
    }
    m[p-1]=n;
    printf("Element inserted\n\n");
    *c++;
    }
}

void delete(int m[100],int *q)
{
    int i,p;
    printf("\nEnter the position of the number to be deleted \n");
    scanf("%d",&p);
     if(p>*q||p<0)
    {
        printf("Invalid position\nEnter between 1 and %d",*q+1);
    }
    else
    {
    for(i=p;i<=*q;i++)
    {
        m[i-1]=m[i];
    }
    m[i]=0;
    printf("Element deleted\n\n");
    *q--;
    }
}

void display(int m[100],int c)
{
    int i;
    printf("The array\n");
    for (i=0;i<c;i++)
    {
        printf("%d\n",m[i]);
    }
    printf("\n");
}