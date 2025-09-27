#include <stdio.h>

int main(){
    int age;

    printf("Enter the age: ");
    scanf(" %d", &age);

    if (age<5){
        printf("Kid under 5 are free.");
    }
    else if (age>65){
        printf("Senior citizen discount");
    }
    else if (age>5||age<65){
        printf("NO Discount, Standard price.");
    }
    else{
        printf("Invalid input");
    }

    return 0;
}