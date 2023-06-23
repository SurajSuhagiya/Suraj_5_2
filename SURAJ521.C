// Write a program to find the minimum number from the given 3 numbers using nested if else. Also, draw a flowchart in your book.
#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c;
clrscr();
printf("Enter the first number : ");
scanf("%d",&a);
printf("Enter the second number : ");
scanf("%d",&b);
printf("Enter the third number : ");
scanf("%d",&c);
if(a>c){
    if(a>c){
    printf("A is minimum...");
    }else{
    printf("C is minimum...");
    }
}else{
    if(b>c){
    printf("C is minimum...");
    }else{
    printf("B is minimum...\n");
    }
}
    printf("the minimum value is : 3 ");
getch();
}