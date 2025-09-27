#include <stdio.h>
#include <string.h>

int main() {
    char username[]="muhammadahmed";
    int password = 1234;

    char check_username[25];
    int check_password;
    
    printf("Enter usename:");
    scanf(" %s", &check_username);

    if (strcmp(username,check_username)== 0 ){

        printf("Enter passowrd: ");
        scanf(" %d", &check_password);

        if (check_password==password){
            printf("Account logged in.");
        }
        else{
            printf("Wrong password");
        }
    }
    else{
        printf("User name is invalid.");
    }


    return 0;
}    