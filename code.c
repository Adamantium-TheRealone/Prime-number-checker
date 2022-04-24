// Hello this video is about making a prime number checker in C
#include<stdio.h>
int main(){
int number,i,signal;

//number 1 and 0 aren't prime
scanf("%d", &number);

if(number == 0 || number == 1){
 signal = 0;
}

for(i = 2; i <= number /2 ; ++i){
    if(number % i == 0){
        signal = 1;
    }
}

if(signal == 1){
    printf("the Number isn't prime");
}
else{
    printf("The number is prime");
}



return 0;
}