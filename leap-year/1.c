// To Check Leap Year
// Header Files
#include<stdio.h>
int main(){

    // Variable Declaration
    int year;
    // INPUT
    printf("Enter a Year : ");
    scanf("%d", &year);

    // Calculation to Check for leap Year
    if( year % 4 == 0){
        // it may be leap Year
        if( year % 100 == 0){
            // it may be leap year
            if( year % 400 == 0){
                printf("Leap Year");
            }else{
                printf("Not a Leap Year");
            }
        }else{
            // Not a Century Year but divisible by 4
            printf("Leap Year");
        }
    }else{
        printf("Not a Leap Year\n");
    }

return 0;
}
