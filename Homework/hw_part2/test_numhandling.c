/**
 * \file test_numhandling.c
 * \brief Тестирование модуля numhandling.h
*/
#include <stdio.h>
#include "numhandling.h"




/**
\brief Тестирование функции is_prime
*/
void test_is_prime()
{
    long m = 10;
    if (is_prime(m)!=0)
        printf("test is_prime(10) FAIL: expected 0, returned value = %ld\n", is_prime(m));
    else
        printf("test is_prime(10) SUCCESS\n");
    m = -5;
    if (is_prime(m)!=0)
        printf("test is_prime(-5) FAIL: expected 0, returned value = %ld\n", is_prime(m));
    else
        printf("test is_prime(-5) SUCCESS\n");

    m = 11;
    if (is_prime(m)!=1)
        printf("test is_prime(11) FAIL: expected 1, returned value = %ld\n", is_prime(m));
    else
        printf("test is_prime(11) SUCCESS\n");

    m = 1073676287;
    if (is_prime(m)!=1)
        printf("test is_prime(1073676287) FAIL: expected 1, returned value = %ld\n", is_prime(m));
    else
        printf("test is_prime(1073676287) SUCCESS\n");

    m = 6679881;
    if (is_prime(m)!=0)
        printf("test is_prime(6679881) FAIL: expected 0, returned value = %ld\n", is_prime(m));
    else
        printf("test is_prime(6679881) SUCCESS\n");

    m = 6679901;
    if (is_prime(m)!=1)
        printf("test is_prime(6679901) FAIL: expected 1, returned value = %ld\n", is_prime(m));
    else
        printf("test is_prime(6679901) SUCCESS\n");


}


/**
\brief Тестирование функции nums_counter
*/
void test_nums_counter()
{
    long m = 52;
    if (nums_counter(m)!=7)
        printf("test nums_counter(52) FAIL: expected 7, returned value = %ld\n", nums_counter(m));
    else
        printf("test nums_counter(7) SUCCESS\n");
    
    m = 100;
    if (nums_counter(m)!=1)
        printf("test nums_counter(100) FAIL: expected 1, returned value = %ld\n", nums_counter(m));
    else
        printf("test nums_counter(100) SUCCESS\n");

}



/**
\brief Запуск тестирования функций
*/
int main()
{
    test_is_prime();
    test_nums_counter();
}