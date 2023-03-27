/**
 * \file test_arrhandling.c
 * \brief Тестирование модуля arrhandling.c
*/

#include "arrhandling.h"
#include <stdio.h>



/**
 * \brief Функция для сравнения содеражания двух массивов и их размеров
*/
long arr_cmp(long a[], long b[], size_t size_1, size_t size_2)
{   
    if (size_1 != size_2)
        return 1;
    for (size_t i = 0; i <size_1; i++)
        if (a[i]!=b[i])
            return 1;
    return 0;
}


/**
 * \brief Тестирование функции insert_num
*/
void test_insert_num()
{
    long arr_s_1[100] = {1, 2, 3, 4, 5};
    size_t s_1 = 5;
    long num_to_insert_1 = -5;
    long arr_p_1[100] = {-5, 1, 2, 3, 4, 5};
    size_t p_1 = 6;
    insert_num(arr_s_1, &s_1, num_to_insert_1);
    if (arr_cmp(arr_s_1, arr_p_1, s_1, p_1) == 0)
        printf("test 1 insert_num: SUCCESS\n");
    else
        printf("test 1 insert_num: FAIL\n");


    long arr_s_2[100] = {1, 2, 3, 4, 5};
    size_t s_2 = 5;
    long num_to_insert_2 = 50;
    long arr_p_2[100] = {1, 2, 3, 4, 5, 50};
    size_t p_2 = 6;
    insert_num(arr_s_2, &s_2, num_to_insert_2);
    if (arr_cmp(arr_s_2, arr_p_2, s_2, p_2) == 0)
        printf("test 2 insert_num: SUCCESS\n");
    else
        printf("test 2 insert_num: FAIL\n");
    

    long arr_s_3[100] = {1, 2, 3, 4, 5};
    size_t s_3 = 5;
    long num_to_insert_3 = 3;
    long arr_p_3[100] = {1, 2, 3, 3, 4, 5};
    size_t p_3 = 6;
    insert_num(arr_s_3, &s_3, num_to_insert_3);
    if (arr_cmp(arr_s_3, arr_p_3, s_3, p_3) == 0)
        printf("test 3 insert_num: SUCCESS\n");
    else
        printf("test 3 insert_num: FAIL\n");   
}

int main()
{
    test_insert_num();
}