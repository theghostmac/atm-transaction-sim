cmake_minimum_required(VERSION 3.26)
project(atm_transaction_sim C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(atm_transaction_sim
        authentication.c
        balance.c
        main.c
        receipt.c
        transfer.c
        authentication.h
        transfer.h
        receipt.h
)
