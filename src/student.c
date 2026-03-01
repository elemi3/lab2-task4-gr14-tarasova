#include <stdio.h>
#include "student.h"

void sstudent (void) {
    struct StudentData student;
   
    student.stu_name = "Tarasova";   
    student.stu_id = 123456;         
    student.stu_age = 19;                
    student.stuAddress.street = "4, pr. Nezavisimosti";
    student.stuAddress.state = "Minskaya";
    student.stuAddress.city = "Minsk";
    student.stuAddress.country = "Belarus";

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
