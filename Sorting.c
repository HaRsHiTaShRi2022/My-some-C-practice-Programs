#include<stdio.h>
#include<stdlib.h>
void selection(void);
void bubble(void);
void inserstion(void);
void linear_search(void);
void binary_search(void);
void merging(void);
void mergesort(void);
int A[40];
int main(){
    int j,i=0,n,c;
    printf("enter the length of sting: ");
    for(j=0;j<n;i++){
        printf("enter the array element %d: ",i+1);
        scanf("%d",&A[i]);
    }
    printf("enter your choice\n1:selection\n2:bubble\n3:inserting\n4:search binary\n5:search liner\n6:Merging\n7:Merge sort\n");
    scanf("%d",&c);
    if(c==1){
        selection();
    }
    if(c==2){
        bubble();
    }
    if(c==3){
        inserstion();
    }
    if(c==4){
        linear_search();
    }
    if(c==5){
        binary_search();
    }
    if(c==6){
        merging();
    }
    if(c==7){
        mergesort();
    }
}