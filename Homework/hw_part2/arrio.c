/*!
 * \file arrio.c
 * \brief Модуль для ввода и вывода массива.
*/
#include "arrio.h"

#include <stdio.h>
#include <assert.h>

/**
 * \brief Функция для печати массива на экран
 * 
 * \param[in] a - массив для печати
 * \param[in] n - количество элементов в массиве
 * 
 * Допущение: количество элементов - натуральное число.
*/
void printing(long a[], long n)
{
    assert( n > 0 );
    printf("\nЭлементы массива: \n");
    for (long i = 0; i < n; i++)
        printf("%ld ", a[i]);
}



/**
 * \brief Функция для чтения массива
 * 
 * Сначала пользователь вводит количество элементов в массиве, затем непосредственно элементы
 * 
 * \param[out] a - массив для заполнения
 * \param[out] n - количество элементов в массиве
 * \param[out] EC - код ошибки
 * 
*/
long reading(long a[], long *n)
{
    long k = 0;
    long EC = SUCCESS;
    printf("Введите количество элементов в массиве:\n");
    if (scanf("%ld", n) != 1)
        EC = SIZE_READING_ERROR;
    else if (*n<=0 || *n>(NMAX/2))
        EC = INCORRECT_SIZE_ERROR;
    else 
    {
        printf("Вводите элементы массива через пробел(целые числа):\n");
        while (k < *n)
        {
            if (scanf("%ld", &a[k])!=1)
                {
                    EC = ARRAY_READING_ERROR;
                    k = *n;
                }
            k += 1;
        }
    }
    return EC;
}
