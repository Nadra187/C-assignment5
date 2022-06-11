//1.Define a structure called cricket,Player name,team name,Batting average
//Using cricket, declare an array player with 5 elements 
//write a program to read information about all the 5 players and print a team-wise list containing names of players with their batting average.
#include<stdio.h>
#include<string.h>

int main(){
    int i;
    struct cricket{
        char player_name[20];
        char team_name[20];
        int avg;
    }player[5];
    for(i=0;i<5;i++){
        printf("Player %d name: \n",i+1);
        scanf("%s",player[i].player_name);
        printf("Team %d name: \n",i+1);
        scanf("%s",player[i].team_name);
        printf("Player %d's batting average: \n",i+1);
        scanf("%d",&player[i].avg);
    }
    int p[5]={0,0,0,0,0};
    for(i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if((strcmp(player[i].team_name,player[j].team_name)==0)&&(p[i]>=0)){
                p[i]++;
                p[j]=-1;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("p[%d]= %d",i,p[i]);
    }
    for(i=0;i<5;i++){
        while(p[i]>=0){
            printf("\nTeam Name %s",player[i].team_name);
            int k=0;
            for(int j=0;j<5;j++){
            if(strcmp(player[i].team_name,player[j].team_name)==0){
                k++;
                printf("\nPlayer%d : %s",k,player[j].player_name);
                printf("\nBatting Average : %d ",player[j].avg);
            }
            }
            p[i]--;
        }
    }

    return 0;
}
