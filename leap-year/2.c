// To Check Leap Year
// Header Files
#include<stdio.h>
int main(){

    // Variable Declaration
    int year;
    // INPUT
    printf("Enter a Year : ");
    scanf("%d", &year);

    if( (year % 400 == 0) || ( year % 4 == 0 && year % 100 != 0) ){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }

return 0;
}
