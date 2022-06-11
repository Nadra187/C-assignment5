//Two files Data1 and Data2 contain sorted list of integers
//produce a third file Data which holds a single sorted, merged
//list of these two lists. Use command line arguments to specify the file names.
#include<stdio.h>
int main(int argc,char *argv[]){
    int i,j;
    FILE *f1,*f2,*f3;
    f1=fopen(argv[1],"w");
    f2=fopen(argv[2],"w");
    int arr1[10]={1,9,80,2000,7000,70001,8000,10000,10002,10010};
    int arr2[10]={2,3,6,89,100,200,203,900,1000,1234};
    for(i=0;i<10;i++){
        putw(arr1[i],f1);
        putw(arr2[i],f2);
    }
    fclose(f1);
    fclose(f2);
    f3=fopen(argv[3],"w");
    i=0,j=0;
    while((i<10)&&(j<10)){
        if (arr1[i]>=arr2[j]){
            putw(arr2[j],f3);
            j++;
        }
        else if(arr1[i]<arr2[j]){
            putw(arr1[i],f3);
            i++;
        }
    }
    if(i==10){
        putw(arr2[j],f3);
    }
    else if(j==10){
        putw(arr1[i],f3);
    }
    f3=fopen(argv[2],"r");
    printf("%s: \n",argv[3]);
    while((i=getw(f3))!=EOF){
        printf("%d \n",i);
    }
    fclose(f3);

    return 0;
}