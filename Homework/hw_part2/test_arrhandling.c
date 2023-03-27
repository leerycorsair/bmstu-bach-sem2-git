/**
 * \file test_arrhandling.c
 * \brief Тестирование модуля arrhandling.h
*/

#include "arrhandling.h"

#include <stdio.h>


/**
 * \brief Функция для сравнения содеражания двух массивов
*/
long arr_cmp(long a[], long b[], size_t size)
{
    for (size_t i = 0; i <size; i++)
        if (a[i]!=b[i])
            return 1;
    return 0;
}


/**
 * \brief Запуск тестирования функций
*/  
int main()
{
    long arr_s_1 [10] = {1, 2, 3, 4, 5, 6, 7};
    long num_to_insert_1 = 10;
    long index_to_insert_1 = 4;
    long arr_p_1 [10] = {1, 2, 3, 4, 10, 5, 6, 7};
    value_ins(arr_s_1, num_to_insert_1, index_to_insert_1, 8);
    if (arr_cmp(arr_s_1, arr_p_1, 8) == 0)
        printf("test 1 value_ins: SUCCESS\n");
    else
        printf("test 1 value_ins: FAIL\n");

    long arr_s_2 [10]= {1};
    long num_to_insert_2 = 2;
    long index_to_insert_2 = 1;
    long arr_p_2[10] = {1, 2};
    value_ins(arr_s_2, num_to_insert_2, index_to_insert_2, 1);
    if (arr_cmp(arr_s_2, arr_p_2, 2) == 0)
        printf("test 2 value_ins: SUCCESS\n");
    else
        printf("test 2 value_ins: FAIL\n");
    
    long arr_s_3 [10]= {1,2};
    long num_to_insert_3 = 2;
    long index_to_insert_3 = 0;
    long arr_p_3[10] = {2, 1, 2};
    value_ins(arr_s_3, num_to_insert_3, index_to_insert_3, 2);
    if (arr_cmp(arr_s_3, arr_p_3, 2) == 0)
        printf("test 3 value_ins: SUCCESS\n");
    else
        printf("test 3 value_ins: FAIL\n");

    long arr_s_4 [10] = {3, 61, 21};
    long size_s_4 = 3;
    long arr_p_4 [10] = {3, 3, 61, 7, 21};
    sumisertion(arr_s_4, &size_s_4);
    if (arr_cmp(arr_s_4, arr_p_4, 5) == 0)
        printf("\ntest 1 sumisertion: SUCCESS\n");
    else
        printf("\ntest 1 sumisertion: FAIL\n");

    long arr_s_5 [10] = {-1};
    long size_s_5 = 1;
    long arr_p_5 [10] = {-1};
    sumisertion(arr_s_5, &size_s_5);
    if (arr_cmp(arr_s_5, arr_p_5, 1) == 0)
        printf("test 2 sumisertion: SUCCESS\n");
    else
        printf("test 2 sumisertion: FAIL\n");

    long arr_s_6 [10] = {-1, 71};
    long size_s_6 = 2;
    long arr_p_6 [10] = {-1, 71, 8};
    sumisertion(arr_s_6, &size_s_6);
    if (arr_cmp(arr_s_6, arr_p_6, 3) == 0)
        printf("test 3 sumisertion: SUCCESS\n");
    else
        printf("test 3 sumisertion: FAIL\n");
}