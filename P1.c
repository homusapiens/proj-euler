// Project Euler - Problem 1
// Sum of multiples of 3 and 5 under 1000
#include <stdio.h>

int main(){
    int a = 1, ans = 0;

    while (a < 1000){
        if (a%5==0 || a%3==0) {
            ans=ans+a;
            a++;
        }
        else{
            a++;
        }
    }
    printf("The sum of multiples of 3 and 5 is %i.",ans);
    return 0;
}