/**
 * \file numhandling.c
 * \brief Модуль для обработки чисел.
*/
#include "numhandling.h"
#include <math.h>
#include <assert.h>
#include <stdio.h>



/**
 * \brief Функция для определения, является ли число простым
 * 
 * \param[in] m - число
 * \param[out] check - признак
*/
long is_prime(long m)
{   
    long check = 1;
    if (m <= 1)
        check = 0;
    else
    {   
        double sqrt_m = sqrt(m);
        for (long i=2; (i<=sqrt_m && check == 1); i++)
            if (m % i == 0)
                check = 0;
    }
    return check;
}




/**
 * \brief Функция для вычисления суммы цифр числа
 * 
 * \param[in] m - число
 * \param[out] sum - сумма цифр
*/
long nums_counter(long m)
{
    assert(m > 0);
    long sum = 0;
    while (m > 0)
    {
        sum += m % SN_BASE;
        m /= SN_BASE;
    }
    return sum;
}