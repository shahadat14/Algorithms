#include<stdio.h>
#include<string.h>
int main (){
    char str[100] , trg[100];
    gets(str);
    gets(trg);
    int n= strlen(str), m=strlen(trg);
    int cntr=0 , ck=1,temp;
    for(int i=0;i<n-m+1;i++){
        temp=i;
        if(str[i]==trg[0]){
            for(int j=0;j<m;j++,i++){
                if(str[i]==trg[j]){
                    cntr++;
                }}
                if(cntr==m){
                    ck=0;
                    printf("Found");
                    break;
                }
                else{
                    i=temp;
                    cntr=0;
                }
            
        }
    }
    if(ck){
        printf("Not Found");
    }
}
