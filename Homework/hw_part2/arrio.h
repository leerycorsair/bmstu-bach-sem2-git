/**
 * \file arrio.h
 * \brief Заголовочный файл для модуля arrio.c
*/
#ifndef ARRIO_H
#define ARRIO_H


/// Максимальное число элементов, которые может содержать массив
#define NMAX 200
/// Код ошибки, возвращаемый в случае успеха
#define SUCCESS 0
/// Код ошибки, возвращаемый в ошибки чтения размера массива
#define SIZE_READING_ERROR 1
/// Код ошибки, возвращаемый в некорректного по значению размера массива
#define INCORRECT_SIZE_ERROR 2
/// Код ошибки, возвращаемый в ошибки чтения элемента массива
#define ARRAY_READING_ERROR 3

long reading(long a[], long *n);
void printing(long a[], long n);


#endif