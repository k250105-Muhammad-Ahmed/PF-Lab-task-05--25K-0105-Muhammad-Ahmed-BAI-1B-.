#include <stdio.h>

int main() {
    int prerequisite;
    int coursefull;

    printf("Enter 1 if student is prerequisite for course enrollment or 0 of not: ");
    scanf(" %d", &prerequisite);

    printf("Enter 1 if course is full or not 0: ");
    scanf(" %d",&coursefull);

    if (prerequisite==1 && coursefull==0 ){
            printf("Enrolled Successfully.");
        }
    else if(prerequisite==1 && coursefull==1) {
        printf("Cannot enroll: course is full");
    }  
    else if(prerequisite==0 && coursefull==0){
        printf("Cannot enroll: prerequisite missing");
    }
    else if(prerequisite==0 && coursefull==1){
        printf("Cannot enroll: prerequisite missing and course is full");
    }
    else{
        printf("invalid input");
    }
    

    return 0;
}