//
// Created by corne on 12/29/2023.
//

#ifndef INVENTORYSYSTEM_INVENTORY_H
#define INVENTORYSYSTEM_INVENTORY_H
void inventory() {
    int basic = 500; // Basic inventory level for all items given by the user in the system.
    int level = 0; // Initialize level and restock before using them.
    int restock = 0;
    int count = 0; // Not being used currently
    double sales = 0; // Not being used currently
    char item[20];
    int option = 1; // Initialize option to start the loop

    printf("Inventory System\n");
    printf("What item is in the inventory system?\n");
    scanf("%s", item);
    printf("Item: %s\n", item);

    printf("How much of the item is in the system\n");
    scanf("%d", &level);
    printf("Item Level: %d\n", level);

    while (option != 0) {
        printf("What operation (add or subtract from stock) are you wanting to do?\n");
        printf("1. Add to stock\n");
        printf("2. Subtract from stock\n");
        printf("0. Exit\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("How much is being added: ");
                scanf("%d", &restock);
                if (level + restock <= 500) {
                    level += restock;
                    printf("The current stock is now: %d\n", level);
                } else {
                    printf("Maximum stock limit exceeded!\n");
                }
                break;

            case 2:
                printf("How much is being taken away from the stock: ");
                scanf("%d", &restock);
                if (level - restock >= 200) {
                    level -= restock;
                    printf("The current stock is now: %d\n", level);
                } else {
                    printf("Minimum stock limit reached! Cannot subtract more.\n");
                }
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid option! Please try again.\n");
                break;
        }
    }
}

#endif //INVENTORYSYSTEM_INVENTORY_H

