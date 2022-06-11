//meging in ascending order
#include<stdio.h>

int main(){
    int count;
    printf("Enter the number of elements in both the arrays.\n");
    scanf("%d",&count);
    printf("Enter the elements of the arrays in descending order.\n");
    printf("FIRST ARRAY: \n");
    int arr1[count],arr2[count],merged[count*2],i,j,k;
    for(i=0;i<count;i++){
        scanf("%d",&arr1[i]);
    }
    printf("SECOND ARRAY: \n");
    for(i=0;i<count;i++){
        scanf("%d",&arr2[i]);
    }
    // int arr1[6]={1,2,4,10,15,100};
    // int arr2[6]={0,5,7,9,14,200};
    i=0,j=0;
    while((i<count)&&(j<count)){
        if (arr1[i]>=arr2[j]){
            printf("\n%d",arr2[j]);
            j++;
        }
        else if(arr1[i]<arr2[j]){
            printf("\n%d",arr1[i]);
            i++;
        }
    }
    if(i==count){
        printf("\n%d",arr2[j]);
    }
    else if(j==count){
        printf("\n%d",arr1[i]);
    }
    return 0;
}