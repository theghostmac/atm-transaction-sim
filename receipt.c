#include "receipt.h"
#include "authentication.h"
#include <stdio.h>
#include <string.h>

void generateReceipt(const User* users, int numUsers, const char* sourceAccountNumber, const char* destinationAccountNumber, double amount) {
    int sourceIndex = -1;
    int targetIndex = -1;

    // Find the indexes of the source and destination accounts.
    for (int i = 0; i < numUsers; ++i) {
        if (strcmp(sourceAccountNumber, users[i].accountNumber) ==  0 ) {
            sourceIndex = i;
        }
        if (strcmp(destinationAccountNumber, users[i].accountNumber) == 0) {
            targetIndex = i;
        }
    }

    if (sourceIndex == -1 || targetIndex == -1) {
        printf("Error generating receipt.\n");
        return;
    }

    printf("-------- Receipt --------\n");
    printf("Source Account: %s\n", sourceAccountNumber);
    printf("Target Account: %s\n", destinationAccountNumber);
    printf("Transferred Amount: $%.2lf\n", amount);
    printf("New Balance for %s: $%.2lf\n", sourceAccountNumber, users[sourceIndex].balance);
    printf("New Balance for %s: $%.2lf\n", destinationAccountNumber, users[targetIndex].balance);
    printf("------------------------\n");

}