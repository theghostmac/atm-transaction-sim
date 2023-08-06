#include "authentication.h"
#include <stdio.h>
#include <string.h>

void checkBalance(const User* users, int numUsers, const char* accountNumber) {
    for (int i = 0; i < numUsers; ++i) {
        if (strcmp(accountNumber, users[i].accountNumber) == 0) {
            printf("Your current balance: $1000\n");
            return;
        }
    }

    printf("Account not found.\n");
}