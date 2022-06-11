//Write a program that reads a file containing integers 
//appends at its end the sum of all the integers
#include<stdio.h>

int main(){
    FILE *f;
    int i=0,num,l,sum=0;
    int arr[i];
    f=fopen("INTEGERS","w");
    printf("Enter number of integers:\n");
    scanf("%d",&l);
    printf("FILE:");
    for(i=0;i<l;i++){
        scanf("%d",&num);
        putw(num,f);
        sum+=num;
    }
    putw(sum,f);
    // while(i!=EOF){
    //    scanf("%d",i);    also scanf jesa koi or func
    //    putw(i,f);
    // }
    fclose(f);
    f=fopen("INTEGERS","r");
    printf("INTEGERS FILE: \n");
    for(i=0;i<=l;i++){
        num=getw(f);
        printf("%d\n",num);
    }
    return 0;
}