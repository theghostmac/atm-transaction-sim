#include "transfer.h"
#include "authentication.h"
#include <stdio.h>
#include <string.h>

void transferFunds(User* users, int numUsers, const char* sourceAccountNumber, const char* destinationAccountNumber, double amount) {
    int sourceIndex = -1;
    int targetIndex = -1;

    // Find the indexes of source and target accounts.
    for (int i = 0; i < numUsers; ++i) {
        if (strcmp(sourceAccountNumber, users[i].accountNumber) == 0) {
            sourceIndex = i;
        }
        if (strcmp(destinationAccountNumber, users[i].accountNumber) == 0) {
            targetIndex = i;
        }
    }

    if (sourceIndex == -1 || targetIndex == -1) {
        printf("Invalid source or target account.\n");
        return;
    }

    // Check if source account has enough balance.
    if (users[sourceIndex].balance < amount) {
        printf("Insufficient funds for the transfer.\n");
        return;
    }

    // Perform the funds transfer.
    users[sourceIndex].balance -= amount;
    users[targetIndex].balance += amount;

    printf("Transfer successful. New balance for %s: $%.2lf\n", sourceAccountNumber, users[sourceIndex].balance);
    printf("New balance for %s: $%.2lf\n", destinationAccountNumber, users[targetIndex].balance);
}