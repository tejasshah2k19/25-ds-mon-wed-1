#include<stdio.h>


void sub(){
    printf("\nhi");
    sub();
}


void add(){
    sub();//infinite , stack overflow 

    //stack 
    //recursion break condition -> infinite 
    //condition -> base case ->
    //when recursion will stop 
    
}



int main(){

    sub();
    return 0;
}

