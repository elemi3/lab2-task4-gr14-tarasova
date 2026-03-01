/* student.c */
/* Подключение стандартной библиотеки для ввода-вывода */
#include <stdio.h>
/* Подключение заголовочного файла с объявлением структур */
#include "student.h"

/**
 * Функция для создания и вывода информации о студенте
 * Использует структуры StudentData и stu_address
 */
void sstudent(void) {
    /* Объявление переменной типа struct StudentData */
    struct StudentData student;
    
    /* Присвоение значений полям структуры StudentData */
    student.stu_name = "Tarasova";      // Фамилия студента
    student.stu_id = 123456;             // Номер студенческого билета
    student.stu_age = 19;                 // Возраст студента
    
    /* Заполнение вложенной структуры с адресом */
    student.stuAddress.street = "4, pr. Nezavisimosti";  // Улица и дом
    student.stuAddress.state = "Minskaya";                // Область
    student.stuAddress.city = "Minsk";                     // Город
    student.stuAddress.country = "Belarus";                // Страна
    
    /* Вывод информации на экран */
    printf("Hello, %s!", student.stu_name);
    printf("\nStudent Id is: %d", student.stu_id);
    printf("\nStudent Age is: %d", student.stu_age);
    printf("\nCountry %s, Region %s, City %s, Address %s", 
           student.stuAddress.country, 
           student.stuAddress.state, 
           student.stuAddress.city, 
           student.stuAddress.street);
    printf("\nGoodbye!");
}