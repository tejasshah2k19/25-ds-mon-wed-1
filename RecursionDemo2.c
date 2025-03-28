#include<stdio.h>



void mulTable(int num,int count){
    if(count <= 10){
        printf("\n%d * %d = %d",num,count,num*count);
        count++;
        mulTable(num,count);
    }
} 

int main(){


    mulTable(5,1);
    return 0;
}