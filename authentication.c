#include <stdio.h>
#include "authentication.h"
#include <string.h>

int authenticateUser(const User* users, int numUsers) {
    char enteredAccountNumber[20];
    char enteredPIN[6];

    printf("Enter your account number: ");
    fflush(stdout);
    scanf("%s", enteredAccountNumber);

    printf("Enter your PIN: ");
    fflush(stdout);
    scanf("%s", enteredPIN);

    for (int i = 0; i < numUsers; ++i) {
        if (strcmp(enteredAccountNumber, users[i].accountNumber) == 0 && strcmp(enteredPIN, users[i].pin) == 0) {
            printf("Authentication successful. \n");
            return 1; // return 1 for successful authentication.
        }
    }

    printf("Authentication failed. \n");
    return 0; // return 0 for unsuccessful authentication.
}