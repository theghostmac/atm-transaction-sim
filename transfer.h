#ifndef TRANSFER_H
#define TRANSFER_H
#include "authentication.h"

void transferFunds(User* users, int numUsers, const char* sourceAccountNumber, const char* destinationAccountUser, double amount);

#endif
