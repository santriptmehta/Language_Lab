#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int isIdentifier(char a[]){
    int flag, i=1;
    if(a[0]==95){
        flag=1;
    }else if(isalpha(a[0])){
        flag=1;
    }else{
        return 0;
    }
    while(a[i]!='\0'){
        if(!isdigit(a[i]&&!isalpha(a[i]))){
            flag=0;
            break;
        }
        i++;
    }
    if(i>6){
        flag=0;
    }
    if(flag==1){
        return 1;
    }
}