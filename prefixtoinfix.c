#include<stdio.h>
#include<ctype.h>
char S[100],F[100];
void pop();
void push(char a);
int priority(char a);
int top=0,top1=0;
int main(){
    int n;
    scanf("%d",&n);
    char E[n],R[n];
    printf("Enter the expression: ");
    scanf("%s",E);
    for(int i=0;i<n+1;i++){
        R[n-i]=E[i];
    }
    for(int j=0;j<n+1;j++){
        printf("%c\n",R[j]);
    }
    for(int k=0;k<n+1;k++){
        if(isalnum(R[]))
    }
    while(top1!=-1){
        pop();
    }
    printf("this");
    for(int j=0;j<n+1;j++){
        printf("%c",F[j]);
    }
}
void pop(){
    F[top1++]=S[top--];
}
void push(char a){
    S[top]=a;
}
int priority(char a){
    if(a=='+'||a=='-'){
        return 1;
    }
    if(a=='*'||a=='/'){
        return 2;
    }
    if(a=='^'){
        return 3;
    }
    if(a=='('){
        return 0;
    }
}