#include <stdio.h>

int main(){
    
    int power;
    char color;

    printf("Enter 1 for powerOn and 0 for powerOff: ");
    scanf(" %d", &power);

    if (power==1){
        printf("Enter color of traffic light, G for green, R for red, Y for yellow: ");
        scanf(" %c",&color);

        if (color=='G'|| color=='g'){
            printf("Go");
        }
        else if (color=='R'|| color=='r'){
            printf("Stop");
        }
        else if (color=='Y'|| color=='y'){
            printf("Caution");
        }
        else{
            printf("invalid input");
        }
    }
    else if(power==0){
        printf("Signal off");
    }
    else{
        printf("invalid input");
    }
    
    return 0;
}
