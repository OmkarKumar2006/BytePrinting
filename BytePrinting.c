#include<stdio.h>
void main(){
    int x=400;
    char* ptr=(char*)&x;
    for (int i = 0; i < sizeof(int); i++)
    {
        printf("%u=%d \n",ptr,*ptr);  
        ptr++;
    }
    
}