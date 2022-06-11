// structure hotel. the name, address, grade, room charge, and number of rooms.
// Write functions to perform the following operations:
// To print out hotels of a given grade in order of charges.
// To print out hotels with room charges less than a given value. 
#include<stdio.h>
struct hotel{
    char name[20];
    char add[100];
    int grade;
    int charge;
    int rooms;
}data[11];   
void check1(int gr,struct hotel data[11]){
    int min;
    for(int i=0;i<11;i++){
        min=data[i].charge;
        for(int j=i+1;j<11;j++){
            if((data[i].grade==data[j].grade)&&(data[j].grade==gr)&&(min>data[j].charge)){
                min=data[j].charge;
            }
        }
        for(int j=0;j<11;j++){
            if(min==data[j].charge){
                printf("\nHotel Name: %s",data[j].name);
                printf("\nCharge per room : %d",data[j].charge);
                printf("\nNumber of Rooms : %d",data[j].rooms);
                printf("\nAddress : %s",data[j].add);
                data[j].charge+=20000;
            }
        }
    }
}
int main(){
    struct hotel data[11]={{"Taj Hotel","Street avenue,Mumbai",5,5000,500},
    {"Grand Sai Hotel","Budh Bazar,Moradabad",3,1000,40},
    {"Five Star Hotel","Sarai beach side ,Goa",5,8000,400},
    {"Hotel Complex","Jhabbu ka nala,Sambhal",2,1500,10},
    {"Hotel Haveli","Civil lines,Rampur",4,4000,100},
    {"Soori Hotel","Bibi ka alawa,Hyderabad",4,5000,300},
    {"Royal Hotel","Oonchi Pahadi,Nainital",4,7000,70},
    {"Hotel Mahesh","Mohd Ali Road,Ramnagar",3,1000,200},
    {"Shiva Hotel","Delhi-Moradabad Highway,Gajraula",2,2000,300},
    {"Ertugrul Bey Hotel","Peer Sahab ki ziyarat,Kashmir",5,10000,550},
    {"Bajar Ganj Hotel","Mullon ki Masjid,Suaar",1,800,70}};
    char g;
    int rs;
    printf("Enter the desired grade of a hotel: ");
    scanf("%d",&g);
    check1(g,data);
    printf("Enter the desired room charge: ");
    scanf("%d",&rs);
    return 0;
}