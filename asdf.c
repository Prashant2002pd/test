#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

#define N 10
int stack[N];
int top=-1;

int push();
int pop();
int  display();

int main(){

int choice;

while(true){
 printf("1.push\n");
  printf("2.pop\n");
   printf("3.Display\n");
    printf("4.exit\n");
     printf("enter the choice: ");
     scanf("%d",&choice);

     switch(choice){
      case 1:
      push();
      break;

      case 2:
      pop();
      break;

      case 3:
      display();
      break;

      case 4:
      return(0);
      break;


      default:
      printf("wrong choice");
     }
}



}

 int push(){

 int item;
 if(top==N-1)
 printf("stack is full");

 else{
  printf("enter the value");
  scanf("%d",&item);
  top++;
  stack[top]=item;

 }
 return(0);
}

 int pop(){
 if(top==-1)
 printf("stack is empty");
 else{
  printf("poped value is %d\n ",stack[top]);
  top--;
 }
 return(0);
}

int display(){
 if(top==-1)
 printf("stack is empty");
 else{
  for(int i=0;i<=top;i++)
  printf("%d",stack[i]);
 }
 printf("\n");
 printf("hii");
 return(0);
}












