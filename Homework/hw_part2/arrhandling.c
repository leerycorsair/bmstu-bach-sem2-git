/**
 * \file arrhandling.c
 * \brief Модуль для обработки массива
*/

#include "arrhandling.h"
#include "numhandling.h"
#include <assert.h>



/**
 * \brief Функция для вставки заданного числа в массив
 * 
 * \param[in,out] a - исходный массив
 * \param[in/out] n - количество элементов в исходном массиве
 * \param[in] num - число для вставки
 * \param[in] k - индекс для вставки
 * 
 * Допущение: индекс вставки не превышает размер массива, размер массива - натуральное число.
 */
void value_ins(long a[], long num, long k, long n)
{
    assert (n>0);
    assert (k<=n);
    for (long i = n; i>k; i--)
        a[i] = a[i-1];        
    a[k] = num;
}




/**
 * \brief Функция для вставки в массив суммы цифр после каждого простого числа
 * 
 * \param[in/out] a - исходный массив
 * \param[in/out] n - количество элементов в исходном массиве
 * 
 * 
 * Допущение: размер массива - натуральное число.
 */
void sumisertion(long a[], long *n)
{

    assert( *n > 0);
    long k = 0;
    while (k < *n)
    {
        long num = a[k];
        if (is_prime(num))
        {
            value_ins(a, nums_counter(num), (k+1), *n);
            k+=2;
            *n += 1;
        }
        else
            k += 1;
    }
}