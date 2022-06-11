#include<stdio.h>
struct hotel{
    char name[20];
    char add[100];
    int grade;
    int charge;
    int rooms;
}data[3];              //why cant i take it as l
void display(){
    for(int i=0;i<3;i++){
        printf("Hotel %d name: %s \n",i+1,data[i].name);
        printf("Hotel %d's Address: %s \n",i+1,data[i].add);
        printf("Grade: %d \n",data[i].grade);
        printf("Room Charge: %d \n",data[i].charge);
        printf("Number of Rooms: %d \n",data[i].rooms);
    }
}
int main(){
    // extern int l;
    // printf("enter the no of hotels");
    // scanf("%d",&l);
    for(int i=0;i<3;i++){
        printf("Hotel %d name: \n",i+1);
        scanf("%s",data[i].name);
        printf("Hotel %d's Address: \n",i+1);
        scanf("%s",data[i].add);
        printf("Grade: \n");
        scanf("%d",&data[i].grade);        //problem in taking grade as char
        printf("Room Charge: \n");
        scanf("%d",&data[i].charge);
        printf("Number of Rooms: \n");
        scanf("%d",&data[i].rooms);
    }
    display();
    return 0;
}