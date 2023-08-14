#include<stdio.h>
int main (){
    int n, key;
    printf("Enter the array number :");
    scanf("%d",&n);
    int array[n],found=0;
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the key");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(array[i]==key){
        found++;
        break;}

    }
    if (found==0)
        printf("Not found\n");
    
    else
    printf("Found");

}
