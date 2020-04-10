#include<stdio.h>
#include<stdlib.h>
void push1(int);
void push2(int);
int pop1();
int pop2();
void show();
void dequeue();
void enqueue();
void create();
int stack1[100], stack2[100];
int top1 = -1, top2 = -1;
int total = 0;
int main()
{
   int choice;
   printf("\nQUEUE USING STACKS IMPLEMENTATION\n\n");
   printf("\n1.SHOW");
   printf("\n2.DEQUEUE");
   printf("\n3.ENQUEUE");
   printf("\n4.EXIT");
   printf("\n");
   create();
   while (true)
   {
       printf("Enter the choice : ");
       scanf("%d", &choice);
       switch (choice)
       {
           case 1:
               show();
               break;
           case 2:
               dequeue();
               break;
           case 3:
               enqueue();
               break;
           case 4:
               exit(0);
           default:
               printf("enter correct choice");
       }}}


void create()
{
   top1 = top2 = -1;
}


void push1(int element)
{
   stack1[++top1] = element; 
}


int pop1()
{
   return(stack1[top1--]); 
}


void push2(int element)
{
   stack2[++top2] = element; 
}

int pop2()
{
   return(stack2[top2--]); 
}


void display()
{
   int i;
   if(top1 == -1)
   {
       printf("queue is empty");
   }
   else
   {
       printf("elements in the queue");
       for (i = 0;i <= top1;i++)
       {
           printf(" %d ", stack1[i]);
       }printf("\n");
}}


void dequeue()
{
   int i;
   for (i = 0;i <= total;i++)
   {
       push2(pop1()); 
   }
   pop2(); 
   total--;
   for (i = 0;i <= total;i++)
   {
       push1(pop2()); 
   }}
   
void enqueue()
{
   int data, i;
   printf("Enter the data : ");
   scanf("%d", &data);
   push1(data); 
   count++;
}

