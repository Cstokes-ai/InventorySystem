#include <stdio.h>
#include "Register.h"
#include "LoginCredentials.h"
#include "Inventory.h"

int main() {

    int option;
    do {
        printf("Choose an option:\n");
        printf("1. User Registration\n");
        printf("2. User Login\n");
        printf("3. Inventory");
        scanf("%d", &option);

        switch (option) {
            case 1:
                UserRegister();
                break;

            case 2:
                UserLogin();
                break;
            case 3:
                inventory();
            default:
                printf("Invalid option. Please select 1 or 2.\n");
                break;
        }
    } while (option != 0);

    return 0;
}