#include <stdio.h>

int main(){

    int permission,execute=4,write=2,read=1;

    printf("Enter permission: ");
    scanf(" %d",&permission);

    if ((permission & execute) == execute){
        printf("Access granted: full control");
    }
    else if ((permission & write) == write && (permission & read) == read){
        printf("Access granted: read and write");
    }
    else if ((permission & write) == write){
        printf("Access granted: write-only");
    }
    else if ((permission & read) == read){
        printf("Access granted: read-only");
    }
    else{
        printf("Access denied");
    }    
    
    return 0;
}