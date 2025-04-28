#include<stdio.h.>
void main()
{
    char name[1000];
    int age;
    printf("Enter your name : ");
    // scanf("%d",&name);
    gets(name);
    printf("Hi ");
    puts(name);
    printf("Enter your age ");
    scanf("%d",&age);
    if (age<15)
    {
        printf("Hii .....\nHow do you do...");
    }
    else
    {
        printf("how can i help you...");
    }
}