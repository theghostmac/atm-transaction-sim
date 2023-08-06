#include <stdio.h>
#include "authentication.h"
#include "balance.h"
#include "string.h"
#include "transfer.h"

int main() {
    User users[] = {
            {"1234567890", "1234", 1500.0},
            {"9876543210", "9876", 2000.0}
    };

    int numUsers = sizeof(users) / sizeof(users[0]);

    if (authenticateUser(users, numUsers)) {
        printf("Authenticated!\n");

        char enteredAccountNumber[20];
        strcpy(enteredAccountNumber, users[0].accountNumber);

        checkBalance(users, numUsers, enteredAccountNumber);

        char destinationAccountNumber[20];
        printf("Enter the account to transfer to: ");
        fflush(stdout);
        scanf("%s", destinationAccountNumber);

        double transferAmount;
        printf("Enter the amount to transfer: ");
        fflush(stdout);
        scanf("%lf", &transferAmount);

        transferFunds(users, numUsers, enteredAccountNumber, destinationAccountNumber, transferAmount);

    } else {
        printf("Authentication failed.\n");
    }

    return 0;
}