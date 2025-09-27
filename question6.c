#include <stdio.h>

int main(){
    
    char room;
    char action;

    printf("Enter L for living room and K for kitchen: ");
    scanf(" %c", &room);

    switch (room)
    {
    case 'L':
    case'l':
        printf("Enter action L of light and T for thermostate: ");
        scanf(" %c",&action);

        switch (action)
        {
        case 'L':
        case'l':
            printf("Adjusting ambient lighting.");
            break;
        case 'T':
        case't':
            printf("Setting living room temperature.");
            break;
        default:
            printf("invalid input");
            break;
        }
        break;
    case 'T':
    case't':
        printf("Enter action L of light and T for thermostate: ");
        scanf(" %c",&action);

        switch (action)
        {
        case 'L':
        case'l':
            printf("Turning on bright task lighting..");
            break;
        case 'T':
        case 't':
            printf("Setting kitchen temperature.");
            break;
        default:
            printf("invalid input");
            break;
        }
        break;    
    
    default:
        printf("invalid input");    
        break;
    }

    return 0;
}