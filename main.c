#include <stdio.h>
#include "authentication.h"
#include "balance.h"

int main() {
    User users[] = {
            {"1234567890", "1234"},
            {"9876543210", "9876"}
    };

    int numUsers = sizeof(users) / sizeof(users[0]);

    if (authenticateUser(users, numUsers)) {
        printf("Authenticated!\n");

        char enteredAccountNumber[20];
        strcpy(enteredAccountNumber, users[0].accountNumber);

        checkBalance(users, numUsers, enteredAccountNumber);
    } else {
        printf("Authentication failed.\n");
    }

    return 0;
}