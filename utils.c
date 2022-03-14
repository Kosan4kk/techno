#include "utils.h"
//start
size_t timer_from(unsigned char from) {
    size_t counter = 0;
    for (unsigned char i = from; i > 0; --i) {
        ++counter;
        printf("%d\n",i);
    }
    return counter;
}



int custom_pow(int base, int power) //возвращает результат возведения base в степень pow
{
    int a = 0;
    a = pow(base,power);
    return a;
}

int isPrime(int n) //является ли число, поданное на вход, простым
{
    if (n > 1)
    {
        for (int i = 2; i < n; i++){
            if (n % i == 0){
                return 0;
            }
        }
        return 1;
    }
    else
        return 0;
}

void F(int x) //выводит через пробел все целые числа от 1 до n
{
    if (x > 1) F(x-1); 
    printf("%d ",x);
}


/*
size_t timer_from(unsigned char from) {
    size_t counter;
    for (unsigned char i = from; i >= 0; --i) надо убрать знак равно{
        ++counter;
        printf(i); не хватает "%d"
    }
    return counter;
}
*/
