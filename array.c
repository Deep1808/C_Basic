#include<stdio.h>

void main()
{

int id,newMark;
int marks[5]={80,84,74,70,97};
printf("Enter id of student\n");
scanf("%d",&id);
printf("Current Marks is %d\n",marks[id]);
scanf("%d",&newMark);
marks[id]=newMark;
printf("\nUpdated marks is %d",marks[id]);
}
