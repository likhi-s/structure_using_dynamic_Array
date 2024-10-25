#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[50];
    unsigned int id;
    char address[100];
};
int main()
{
    int i,n;
    printf("Enter required number students\n",n);
    scanf("%d",&n);
    struct student *s[n];
    printf("Record of %d students\n",n);
    for(i=0;i<n;i++)
    {
        s[i] =(struct student *)malloc(sizeof(struct student));

        printf("Enter Details of Student %d\n",i+1);
        printf("Enter Student Name:");
        scanf("%s",&s[i]->name);
        printf("Enter Student ID:");
        scanf("%d",&s[i]->id);
        printf("Enter Student Address:");
        scanf("%s",&s[i]->address);
    }


    for(i=0;i<n;i++)
    {
        printf("Record of Student-%d\n",i+1);
        printf("Name:%s\nID:%d\nAddress:%s\n",s[i]->name,s[i]->id,s[i]->address);
        free(s[i]);
    }


}
