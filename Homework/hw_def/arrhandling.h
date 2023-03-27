/**
 * \file arrhandling.h
 * \brief Заголовочный файл для модуля arrhandling.c
*/
#ifndef ARRHANDLING_H
#define ARRHANDLING_H

#define NMAX 1024


#define SUCCESS 0
#define SIZE_READING_ERROR -1
#define INCORRECT_SIZE_ERROR -2
#define ARRAY_READING_ERROR  -3
#define INCORRECT_ORDER -4
#define INCORRECT_NUM_TO_INS -5

#include <stdlib.h>

long input_reading(long a[], size_t* size, long* num_to_insert);
void insert_num(long arr[], size_t* size, long num_to_insert);
void printing(const long a[], size_t size);

#endif