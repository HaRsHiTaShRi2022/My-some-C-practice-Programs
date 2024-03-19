#include<stdio.h>
int top=0,n;
void push(int A[],int n);
int pop(int A[]);
void display(int A[]);
int main(){
    printf("Enter the number of max-elements: ");
    scanf("%d",&n);
    int A[n];
    int E=1;
    do{
        printf("\nEnter the operation you wanted to do: \n1:push\n2:pop\n3:dispaly\n0:stop\n");
        scanf("%d",&E);
        if(E==2){
            pop(A);
        }
        if(E==1){
            push(A,n);
        }
        if(E==3){
            display(A);
        }
    }
    while(E>0);
}
void push(int A[],int n){
    int p;
    if(top==n){
        printf("Overflowed\n");
    }
    else{
        printf("Enter the value to be pushed: ");
        scanf("%d",&p);
        A[top++]=p;
    }
}
int pop(int A[]){
    if(top==0){
        printf("Underflowed\n");
    }
    else{
        return A[top--];
    }
}
void display(int A[]){
    for(int i=0;i<top;i++){
        printf("%d\t",A[i]);
    }
}