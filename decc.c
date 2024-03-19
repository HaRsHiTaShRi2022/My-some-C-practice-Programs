#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,max=5;
int que[5];
void endqueue();
void dequeue();
void disp();
void main(){
 int n;
 while(1){
 printf("1:Endqueue\n2:Dequeue\n3:Display\n4:Exit\n");
 scanf("%d",&n);
 switch (n){
 case 1:
 endqueue();
 break;
 case 2:
 dequeue();
 break;
 case 3:
 disp();
 break;
 case 4:
 exit(0);
 break;
 default:
 printf("Enter valid expression");
 }
 }
}
void endqueue(){
 int el;
 if(rear == max-1){
 printf("Overflow");
 }
 else{
 int i=rear;
 printf("Enter the element: ");
 scanf("%d",&el);
 while(i!=-1 && que[i]<el){
 que[i+1]=que[i];
 i--;
 }
 que[i+1]=el;
 rear++;
 if(front==-1){
 front=0;
 }
 }
}
void dequeue(){
 if(front>rear || front==-1){
 printf("underflow");
 }
 else{
 que[front]=0;
 front++;
 }
}
void disp(){
 int i;
 if(front>rear){
 printf("Underflow");
 }
 else{
 for(i=0;i<5;i++){
 printf("%d",que[i]);
 }
 }
