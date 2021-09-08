// Project Euler - Problem 1
// Sum of Fibonacci even numbers under 4000000
#include <stdio.h>

int main(){
    int a = 0, b = 1, c = 0, ans=0;

    while(c < 4000000)
    {   
        c=a+b;
        if(c%2==0){
            ans=ans+c;
        }
        a=b;
        b=c;
    }
    printf("The sum of all Fibonacci even numbers under 4000000 is %i.",ans);
    return 0;
}