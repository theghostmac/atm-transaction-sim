#ifndef RECEIPT_H
#define RECEIPT_H

#include "authentication.h"

void generateReceipt(const User* users, int numUsers, const char* sourceAccountNumber, const char* destinationAccountNumber, double amount);

#endif