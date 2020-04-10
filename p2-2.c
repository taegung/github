#include <stdio.h>
struct student {
char lastName[13];
int studentId;
short grade;
};


int main()
{
    printf("[----- [À±ÅÂ°æ] [2019038059] -----]\n");
struct student pst;
printf("size of student = %ld\n", sizeof(struct student));
printf("size of int = %ld\n", sizeof(int));
printf("size of short = %ld\n", sizeof(short));
return 0;
}