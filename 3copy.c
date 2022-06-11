//Write a program to copy the content of one file into another
#include<stdio.h>

int main(){
    FILE *p1,*p2;
    char c;
    printf("INPUT DATA IN FILE1:\n");
    p1=fopen("FILE1","w");
    while((c=getchar())!=EOF){
        putc(c,p1);
    }
    fclose(p1);
    printf("INPUT DATA IN FILE2:\n");
    p2=fopen("FILE2","w");
    while((c=getchar())!=EOF){
        putc(c,p2);
    }
    fclose(p2);
    p1=fopen("FILE1","w");
    p2=fopen("FILE2","r");
    while((c=getc(p2))!=EOF){
        putc(c,p1);
    }
    fclose(p1);
    fclose(p2);
    p1=fopen("FILE1","r");
    printf("FILE1: \n");
    while((c=getc(p1))!=EOF){
        printf("%c",c);
    }
    fclose(p1);
    return 0;
}