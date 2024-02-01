#include<stdio.h>

int main(){

    FILE *ptr;

    char string[50]="My name is skill";
    
    // ptr=fopen("mytext.txt","r");
    // fscanf(ptr,"%s",string);

    // printf("The text is %s\n",string);

    ptr=fopen("mytext.txt","a");
    fprintf(ptr,"%s",string);


}