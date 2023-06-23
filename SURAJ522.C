// Write a program to find the minimum number from the given 4 numbers using nested if else. Also, draw a Flowchart in your book.
#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c,d;

clrscr();
printf("Enter the value :");
scanf("%d",&a);
printf("Enter the value :");
scanf("%d",&b);
printf("Enter the value :");
scanf("%d",&c);
printf("Enter the value :");
scanf("%d",&d);

if(a>b){
 if(a<c){
 printf("C is maximum...\n");
 }else{
 printf("A is maximum...\n");
 }
}else{
 if(b>c){
 printf("B is maximum...\n");
 }else{
 printf("C is maximum...\n");
 }
 if(c>d){
 printf("C is maximum...\n");
 }else{
 printf("D is maximum...\n");
 }
}
 printf("The maximum value is : 12");
getch();
}