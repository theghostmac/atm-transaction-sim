#include <stdio.h>
#include "authentication.h"

typedef struct {
    char accountNumber[20];
    char pin[6];
} User;

int main() {
    User users[] = {
            {"1234567890", "1234"},
            {"9876543210", "9876"}
    };

    int numUsers = sizeof(users) / sizeof(users[0]);

    if (authenticateUser(users, numUsers)) {
        printf("Authenticated!\n");
    } else {
        printf("Authentication failed.\n");
    }

    return 0;
}