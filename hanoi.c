#include<stdio.h>
void toh(int n,char rod1,char rod3,char rod2){
    if(n==1){
        printf("\nMove a disk from %c to %c",rod1,rod3);
        return;
    }
    toh(n-1,rod1,rod2,rod3);
    printf("\nMove a %d disk from %c to %c",n,rod1,rod3);
    toh(n-1, rod2, rod3,rod1);
}
int main(){
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    toh(n,'A','C','B');
    return 0;
}
