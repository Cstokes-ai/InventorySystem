//
// Created by corne on 12/29/2023.
//
#include <stdio.h>
#include <string.h>
#include "Register.h"


#ifndef INVENTORYSYSTEM_LOGINCREDENTIALS_H
#define INVENTORYSYSTEM_LOGINCREDENTIALS_H

#endif //INVENTORYSYSTEM_LOGINCREDENTIALS_H

void UserLogin(){
    char inputUserName[50];
    char inputUserPassword[50];
    printf("Username:\n");
    scanf("%s",inputUserName);
    printf("Username: %s\n", inputUserName);
    printf("Password:");
    scanf("%s",inputUserPassword);
    printf("Password: %s\n", inputUserPassword);

    int i;
    int usernameMatch = strcmp(inputUserName, users[i].UserName);
    int passwordMatch = strcmp(inputUserPassword, users[i].UserPassword);
    if(usernameMatch==0 && passwordMatch==0) {
        printf("Login Successful\n");

    }
    else{
        printf("Invalid Username or password.\n");
    }

}