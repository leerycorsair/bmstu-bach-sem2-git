/*!
 * \file arrhandling.c
 * \brief Модуль для обработки массива.
*/
#define __USE_MINGW_ANSI_STDIO
#include "arrhandling.h"
#include <stdio.h>
#include <assert.h>


/**
 * \brief Функция для чтения массива и числа для вставки
 * 
 * \param[out] a - массив
 * \param[out] size - количество элементов в массиве
 * \param[out] num_to_insert - число для вставки
 * \param[out] EC - код ошибки
 * 
*/
long input_reading(long a[], size_t* size, long* num_to_insert)
{
    size_t k = 0;
    long EC = SUCCESS;
    printf("Введите количество элементов в массиве:\n");
    if (scanf("%zu", size) != 1)
        EC = SIZE_READING_ERROR;
    else if (*size==0 || *size>(NMAX))
        EC = INCORRECT_SIZE_ERROR;
    else 
    {
        printf("Вводите элементы массива через пробел:\n");
        if (scanf("%ld", &a[k])!=1)
            EC = ARRAY_READING_ERROR;
        k += 1;
        while (k < *size && EC == SUCCESS)
        {
            if (scanf("%ld", &a[k])!=1)
                EC = ARRAY_READING_ERROR;
            else if (a[k] < a[k - 1])
                EC = INCORRECT_ORDER;
            k += 1;
        }
    }
    if (EC == SUCCESS)
    {
        printf("Введите число для вставки:\n"); 
        if (scanf("%ld", num_to_insert) != 1)
            EC = INCORRECT_NUM_TO_INS;
    }
    return EC;
}



/**
 * \brief Функция для печати массива на экран
 * 
 * \param[in] a - массив для печати
 * \param[in] n - количество элементов в массиве
 * 
 * Допущение: количество элементов - натуральное число.
*/
void printing(const long a[], size_t size)
{
    assert( size > 0 );
    printf("\nЭлементы после вставки массива:\n");
    for (size_t i = 0; i < size; i++)
        printf("%ld ", a[i]);
}



/**
 * \brief Функция для вставки числа в массив, согласно порядку
 * 
 * \param[in] num_to_insert - число для вставки
 * \param[in,out] a - массив для вставки
 * \param[in,out] n - количество элементов в массиве
 * 
 * 
 * Допущение: количество элементов - натуральное число, массив является упорядоченным.
*/
void insert_num(long arr[], size_t* size, long num_to_insert)
{
    assert( *size > 0 );
    size_t i = 0;
    while (arr[i] < num_to_insert && i < *size) i++;
    for (size_t j = *size; j > i; j--)
        arr[j] = arr[j-1];
    arr[i] = num_to_insert;
    *size += 1;
}