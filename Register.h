//
// Created by corne on 12/29/2023.
// whenever creating a register file, always do something like this
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifndef INVENTORYSYSTEM_REGISTER_H
#define INVENTORYSYSTEM_REGISTER_H
#define MAX_USERS 50
typedef struct{
    char UserName[50];
    char UserPassword[50];
} User;

int numUsers=0;

User users[MAX_USERS];
void UserRegister(){
    if(numUsers<MAX_USERS){
        printf("Registering...\n");
        printf("Username:\n");
        scanf("%s", users[numUsers].UserName);
        printf("Username: %s\n ", users[numUsers].UserName);
        printf("Password\n");
        scanf("%s", users[numUsers].UserPassword);
        printf("Password: %s",users[numUsers].UserPassword);

    }

}
#endif //INVENTORYSYSTEM_REGISTER_H

