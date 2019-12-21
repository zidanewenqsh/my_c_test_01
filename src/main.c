//
// Created by admin on 2019/12/18.
//
#include <stdio.h>
#include "../headers/header.h"
#include "../funcs/my_func_01.h"
#include "../funcs/my_func_02.h"
int main()
{
    printf("Hello, World!\n");
    int a = 1;
    float b = 1.0;
    double c = 2222222222.222226666;
    long double d = 2222222222.222226666L;
    long c1 = 9223372036854775807;
    long long d1 = 9223372036854775807L;
    printf("double: %.9lf, %d\n", c, sizeof(c));
    printf("long double: %.9Lf, %d\n", d, sizeof(d));
    printf("long: %ld, %d\n", c1, sizeof(c1));
    printf("long long: %lld, %d\n", d1, sizeof(d1));
    print_int(a);
    print_str("hello");
    print_float(b);
    printf("*******************\n");


//    f();
    g();
    return 0;
}

//int main()
//{
//    double sum=0,multiply=1;
//    long double sum1=0,multiply1=1;
//    int n;
//    for(n=1;n<=150;n++)
//    {
//        multiply*=n;
//        sum+=multiply;
//        multiply1*=n;
//        sum1+=multiply1;
////        printf("sum:%lf, multiply: %lf\n", sum, multiply);
////        printf("sum1:%lf, multiply1: %lf\n", sum1, multiply1);
//    }
//    printf("%e\n",sum);
//    printf("%e\n",sum1);
//    return 0;
//}