/**
 * \file main.c
 * \brief Основная программа
 * 
 * Постановка задачи:
 * Пользователь вводит упорядоченный массив, необходимо вставить число, вводимое с клавиатуры, в массив так, чтобы не нарушить его порядок.
 * 
 * Допущения:
 * + Максимальный размер массива 1024 элемента.
 * + Первое число при вводе - количество чисел в массиве.
 * + Элементы массива принаждежат отрезку [ -2^32 ; 2^32-1 ]. 
 * + Элементы массива целочисленные.
 * + Используется десятичная система счисления.
 * + Массив может быть не строго упорядочен.
 * + Массив упорядочен по возрастанию.
*/
#include <stdio.h>
#include "arrhandling.h"

/**
 * \brief Тело функции основной программы
*/
int main (void)
{
    setbuf(stdout, NULL);
    long array[NMAX+1];
    size_t size;
    long EC;
    long num_to_insert;
    EC = input_reading(array, &size, &num_to_insert);
    if (EC == SUCCESS)
    {
        insert_num(array, &size, num_to_insert);
        printing(array, size);
        return EC;
    }
    else if (EC == SIZE_READING_ERROR)
        printf("Ошибка чтения размера массива.");
    else if (EC == INCORRECT_SIZE_ERROR)
        printf("Некорректный размер массива.");
    else if (EC == ARRAY_READING_ERROR)
        printf("Некорректный ввод элементов массива.");
    else if (EC == INCORRECT_ORDER)
        printf("Массив не является упорядоченным.");
    else if (EC == INCORRECT_NUM_TO_INS)
        printf("Не корректное число для вставки.");
    else
        printf("Неизвестная ошибка");
    return EC;
}