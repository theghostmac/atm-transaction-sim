#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

typedef struct {
    char accountNumber[20];
    char pin[6];
} User;

int authenticateUser(const User* users, int numUsers);

#endif
