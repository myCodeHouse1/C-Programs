// To find whether a number is even or odd
// Header Files
#include<stdio.h>
// Main calling function
int main(){
    int N;
    // INPUT
    printf("Input a Number: ");
    scanf("%d", &N);
    // Calculation
    if(N % 2 == 0){
        // even no
        printf("Even No.");
    }else{
        printf("Odd No.");
    }
return 0;
}
