////
//// Created by admin on 2019/12/18.
////
//#include <stdio.h>
//#include "my_func_01.h"
//
//float max_f(float x, float y);
//
//
//void printstar()              /*定义printstar函数*/
//{
//    printf("* * * * * * * * * * * * * * * *\n");
//}
//
//void print_message()          /*定义print_message函数*/
//{
//    printf("How do you do!\n");
//}
//
//void f1() {
//    void printstar();           /*对printstar函数声明*/
//    void print_message();
//    /*对print_message函数声明*/
//    printstar();                 /*调用printstar函数*/
//    print_message();             /*调用print_message函数*/
//    printstar();                 /*调用printstar函数*/
//}
//
////************************
//int max(int x, int y)    /*定义有参函数max */
//{
//    int z;
//
//    z = x > y ? x : y;
//
//    return (z);
//}
//
//void f2() {
//    int max(int x, int y);   /* 对max函数的声明 */
//    int a, b, c;
//    printf("please input two number:\n");
//    scanf("%d %d", &a, &b);
//    c = max(a, b);
//    printf("Max is %d", c);
//}
//
//
////************************
//float max_f(float x, float y) {
//    float z;
//    z = x > y ? x : y;
////    printf("x is %f,y is %f,z is %f", x, y, z);
//    return z;
//}
//
//
//void f3() {
//    float max_f(float x, float y);
//    float a, b;
//    float c;
//    printf("please input two number:\n");
//    scanf("%f, %f", &a, &b);
//    c = max_f(a, b);
//    printf("Max is %f\n", c);
//}
//
////*******************
//void f4() {
//    int f_4(int a, int b);  /* 函数声明 */
//
//    int i = 2, p, p1;
//
//    p = f_4(i, i++);        /*  函数调用 */
//    p1 = f_4(i, ++i);
//    /*
//     * 此处关于i++和++i的理解非常重要
//     */
//
//
//    printf("p:%d\n", p);
//    printf("p1:%d\n", p1);
//}
//
//int f_4(int a, int b)              /*  函数定义 */
//{
//    int c;
//    printf("a:%d,b:%d\n", a, b);
//    if (a > b) {
//        c = 1;
//    } else if (a == b) {
//        c = 0;
//    } else {
//        c = -1;
//    }
//
//    return (c);
//}
//
////***********
//
//void f5() {
//
//    float a, b, c;
//    float add_1(float x, float y);  //对被调用函数add的声明
//    /*
//     * 注释最后要有一个空格
//     */
////    a=1;
////    b=2;
//    scanf("%f, %f", &a, &b);
//    printf("a:%f,b:%f\n", a, b);
//    c = add_1(a, b);
//    printf("c:%f", c);
//}
//
//float add_1(float x, float y)
///*函数首部*/
//{
//    float z;        /*  函数体 */
//
//    z = x + y;
//    printf("x:%f,y:%f,z:%f\n", x, y, z);
//    return z;
//}
////****************
//
//
//void f6(void) {
//    double power(double x, double y);
//    double x = 3.0, y = 3.0, z;
//
//    z = power(x, y);
//
//    printf("%.1f to the power of %.1f is %.1f\n", x, y, z);
//}
//
//double power(double x, double y) {
//    double z = x;
//
//    while (--y) {
//        z *= x;
//    }
//
//    return z;
//}
//
//int sqrt_02(int question);
//
//void f7() {
//    int question = 25, answer;
//
//    answer = sqrt_02(question);
//
//    if (answer < 0)
//        printf("Error: sqrt returns %d, answer\n", answer);
//    else
//        printf("The square root of %d is %d\n", question, answer);
//}
//
//int sqrt_02(int question) {
//    int temp = question / 2;
//
//    while (temp--) {
//        if (temp * temp == question)
//            return temp;
//    }
//
//    return -1;
//}
//
//void f8() {
//    int i;
//    long s = 0;
//    long square_1(int p);
//    for (i = 2; i <= 3; i++) {
//        s = s + square_1(i);
//    }
//
//    printf("%ld\n", s);
//}
//
//long square_1(int p) {
//    int k;
//    long r;
//    long factorial_1(int);
//
//    k = p * p;
//    r = factorial_1(k);
//    printf("k:%d,r:%ld\n", k, r);
//    return r;
//}
//
//long factorial_1(int q) {
//    long c = 1;
//    int i;
//    for (i = 1; i <= q; i++) {
//        c += i;
//    }
//    printf("c:%ld\n", c);
//    return c;
//}
//
//void f9() {
//    int n;
//    long result;
//    long recursion(int n);
//
//    printf("input a integer number:\n");
//    scanf("%d", &n);
//
//    result = recursion(n);
//    printf("%d! = %ld\n", n, result);
//}
//
//long recursion(int n) {
//    long temp_result;
//
//    if (n < 0) {
//        printf("n < 0, input error!\n");
//    } else if (n == 0 || n == 1) {
//        temp_result = 1;
//    } else {
//        temp_result = recursion(n - 1) * n;
//    }
//
//    return temp_result;
//}
//
////*********************
//void f10() {
//    void hanoi(int n, char one, char two, char three);
//    /* 对hanoi函数的声明 */
//    int m;
//
//    printf("input the number of diskes:");
//    scanf("%d", &m);
//    printf("The step to moveing %d diskes:\n", m);
//
//    hanoi(m, 'A', 'B', 'C');
//}
//
//void hanoi(int n, char one, char two, char three)
///*  定义hanoi函数, 将ｎ个盘从one座借助two座，移到three座 */
//{
//    void move(char x, char y);     /* 对move函数的声明 */
//    if (n == 1) {
//        move(one, three);
//    } else {
//        hanoi(n - 1, one, three, two);
//        move(one, three);
//        hanoi(n - 1, two, one, three);
//    }
//}
//
//void move(char x, char y)           /*  定义move函数 */
//{
//    printf("%c-->%c\n", x, y);
//}
////*********************
//
//
//void f() {
//    void test(int v);
//    int a[10] = {1, 2, 3, 4, -1, -2, -3, -4, 2, 3};
//    int i;
//
//    for (i = 0; i < 10; i++) {
//        test(a[i]);
//    }
//
//    printf("\n");
//}
//
//void test(int v) {
//    if (v > 0) {
//        printf("%d ", v); //回车前有时没有空格？
////        printf("          ");
//    } else {
//        printf("%d ", 0);
//    }
//}
//
//
//void f12() {
//    void test_1(int b[10]);
//    int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
//    test_1(a);
//
//    putchar('\n');
//}
//
//void test_1(int b[10]) {
//
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", b[i]);
//    }
//}
//
//
//void f13() {
//    double average(double array[]);  /* 函数声明 */
//
//    double score[10] = {82, 100, 87.5, 89, 78, 85, 67.5, 92.5, 93, 94}, result;
//
//    result = average(score);
//    printf("average score is %5.2lf\n", result);
//
//    putchar('\n');
//}
//
//double average(double array[]) {
//    double result = 0;
//    int i = 0;
//
//    for (i = 0; i < 10; i++) {
//        result += array[i];
//    }
//    result /= 10;
//
//    return result;
//}
//
//
//int s1, s2, s3;
//
//int vs(int a, int b, int c) {
//    int v;
//
//    v = a * b * c;
//    s1 = a * b;
//    s2 = b * c;
//    s3 = a * c;
//
//    return v;
//}
//
//void f14() {
//    int v, l, w, h;
//
//    printf("\ninput length,width and height\n");
//    scanf("%d%d%d", &l, &w, &h); //long, width, high
//
//    v = vs(l, w, h); //v体积
//    printf("\nv=%d,s1=%d,s2=%d,s3=%d\n", v, s1, s2, s3);
//}
//
//float Max = 0, Min = 0;    /*全局变量*/
//
//void f15() {
//    float average_1(float array[], int n);
//    float ave, score[10];
//
//    int i;
//    for (i = 0; i < 10; i++) {
//        scanf("%f", &score[i]);
//    }
//
//    ave = average_1(score, 10);
//
//    printf("max = %6.2f\nmin = %6.2f\naverage = %6.2f\n", Max, Min, ave);
//}
//
//float average_1(float array[], int n)       /*定义函数，形参为数组*/
//{
//    int i;
//    float ave, sum = array[0]; //试试改为ave;
//    Max = Min = array[0];
//
//    for (i = 1; i < n; i++) {
//        if (array[i] > Max)
//            Max = array[i];
//        else if (array[i] < Min)
//            Min = array[i];
//
//        sum += array[i];
//    }
//    ave = sum / n;
//
//    return ave;
//}
//
///*********************************/
///* 该小程序考察静态局部变量的值。*/
///*********************************/
//
//int ff(int a) {
//    auto int b = 0;
//    static int c = 3;
//
//    b = b + 1; // b == 1 , 1 , 1
//    c = c + 1; // c == 4 , 5 , 6
//
//    return (a + b + c); // 7 , 8 , 9
//
//}
//
//void f16() {
//    int a = 2, i;
//    int ff(int a);
//
//    for (i = 0; i < 3; i++) {
//        printf("%d\n", ff(a));
//    }
//}
//
//
///*********************/
///* 打印1到5的阶乘值。*/
///*********************/
//
//
//int fac(int n) {
//    static int f = 1, g = 2; //两个变量都是static
//
//    f = f * n; // 1, 2, 2*3, 6*4, 24*5
//    g = g * n;
//    printf("f:%d,g:%d\n", f, g);
//    return (f); // 1, 2, 6, 24, 120
//}
//
//void f17() {
//    int i;
//
//    for (i = 1; i <= 5; i++) {
//        printf("%d! = %d\n", i, fac(i)); // 1, 2, 6, 24, 120
//    }
//
//}
//
//
///*********************/
///* 打印1到5的阶乘值。*/
///*    改进版本!!     */
///*********************/
//
//int fac_1(int n)   //注意，这个版本不用static特性，所以把阶乘的过程放在fac()函数中实现。
//{
//    register int i, f = 1;
//
//    for (i = 1; i <= n; i++) {
//        f *= i;
//    }
//
//    return (f);
//}
//
//void f18() {
//    int i;
//
//    for (i = 1; i <= 15; i++) {
//        printf("%d! = %d\n", i, fac_1(i));
//    }
//
//}
//
///*************************************************/
///* 用extern声明外部变量，扩展程序文件中的作用域。*/
//
//
//int max_1(int x, int y) {
//    int z;
//
//    z = x > y ? x : y;
//
//    return (z);
//}
//
//
//void f19() {
//    extern A, B;  //试试去掉extern关键字。
//
//    printf("%d\n", max_1(A, B));
//
//}
//
//
//int A = 13, B = -8;
//
//
//
