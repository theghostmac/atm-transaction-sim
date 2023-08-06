#include <stdio.h>
#include "authentication.h"

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