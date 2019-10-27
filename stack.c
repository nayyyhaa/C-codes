#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int top=0;
int arr[MAX];

void display()
{
  int i;
  if(top==0)
  {
    printf("Stack is empty");
  }
  else
  {
    printf("Elements in stack are : ");
    for(i=0;i<top;i++)
    {
      printf("%d ",arr[i]);
    }
  }
}

void push(int num)
{
  if(top==MAX)
  {
    printf("Stack Overflow");
  }
  else
  {
    arr[top]=num;
    top++;
    printf("Elemet pushed.\n");
    display();
  }
}

void pop()
{
  if(top==0)
  {
    printf("Stack Underflow");
  }
  else
  {
    top--;
    printf("Deleted element is %d\n",arr[top]);
    display();
  }
}

void wait()
{
  printf("\n\n");
  printf("Press ENTER to continue...");
  getchar();
  getchar();
}

int main()
{
  int choice;
  int element;
  while(1)
  {
    system("clear");
    printf("                              STACK DATA STRUCTURE");
    printf("\n");
    printf("--------------------------------------------------------------------------------");
    printf("\n\n");
    printf("List of Operations :  1. Push\n");
    printf("                      2. Pop\n");
    printf("                      3. Display\n");
    printf("                      0. Exit\n");
    printf("\n\n\n");
    printf("Enter the Number of Operation you want to perform : ");
    scanf("%d",&choice);
    printf("\n\n");

    switch(choice)
    {
      case 1:
        printf("Enter the number you want to push : ");
        scanf("%d",&element);
        push(element);
        wait();
        break;
      case 2:
        pop();
        wait();
        break;
      case 3:
        display();
        wait();
        break;
      case 0:
        wait();
        exit(0);
        break;
      default:
        printf("Wrong input....");
        printf("\n");
        wait();
    }
  }
  return 0;
}
