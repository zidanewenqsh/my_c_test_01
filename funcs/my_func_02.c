//
// Created by admin on 2019/12/19.
//
#include <stdio.h>
#include "my_func_02.h"

#include <stdio.h>

void g1() {
    int a, b;
    int *pointer_1, *pointer_2;

    a = 100;
    b = 10;
    pointer_1 = &a;
    pointer_2 = &b;

    printf("%d,%d\n", a, b);
    printf("%d,%d\n", *pointer_1, *pointer_2);
    printf("%d,%d\n", pointer_1, pointer_2);
}

void g2() {
    int *p1, *p2, *p, a, b;

    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;

    if (a < b) {
        p = p1;
        p1 = p2;
        p2 = p;
    } //此后，p1指向b, p2指向a ^_^

    printf("a = %d, b = %d\n", a, b);
    printf("max = %d, min = %d\n", *p1, *p2);
}


void g3() {
    int a, b;
    void swap(int *p1, int *p2);
    int *pointer_1, *pointer_2;

    scanf("%d %d", &a, &b);

    pointer_1 = &a;
    pointer_2 = &b;

    if (a < b) {
        swap(pointer_1, pointer_2); //swap实现的是交换……
    }

    printf("\n%d > %d\n", a, b);

}

void swap(int *p1, int *p2) {
    int temp;

    printf("I'm swapping……\n");
    printf("Please wait^_^\n");

    temp = *p1;  //temp = a;
    *p1 = *p2;   //a = b;
    *p2 = temp;  //b = temp;

}


void g4() {
    void exchange(int *q1, int *q2, int *q3);

    int a, b, c, *p1, *p2, *p3;

    scanf("%d %d %d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;

    exchange(p1, p2, p3);  //确保a > b > c
    printf("%d %d %d\n", a, b, c);
}


void exchange(int *q1, int *q2, int *q3) //int *q1 = p1;
{
    void swap_1(int *pt1, int *pt2); //用于交换&……&%

    if (*q1 < *q2) {
        swap(q1, q2);
    }
    if (*q1 < *q3) {
        swap(q1, q3);
    }
    if (*q2 < *q3) {
        swap(q2, q3);
    }
}

void swap_1(int *pt1, int *pt2) {
    int temp;

    temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;
}

int max1, min1;      /*全局变量*/

void g5()
{
    int i, number[10];
    void max_min_value(int array[], int n);
    printf("enter 10 integer numbers:\n");

    for( i=0; i < 10; i++)
    {
        scanf("%d", &number[i]);
        printf("num:%d", number[i]);
    }
    printf("over");
    max_min_value(number, 10);

    printf("\nmax=%d, min=%d\n", max1, min1);

}

void max_min_value(int array[], int n)
{
    int *p, *array_end;

    array_end = array + n;

    max1 = min1 = *array;

    for( p=array+1; p < array_end; p++)
    {
        if( *p > max1 )
        {
            max1 = *p;
        }
        else if( *p < min1 )
        {
            min1 = *p;
        }
    }
}



void g6()
{
    int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
//    void reverse(int x[],int n);   /* 形参x是数组名 */
    void reverse(int *x,int n);   /* 形参x是数组的首地址 */
    printf("The original array:\n");

    for( i=0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    reverse(a, 10);  //作用使得数组重新倒序排放

    printf("The array has been inverted:\n");

    for( i=0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

}
//void reverse(int x[], int n)   /*形参x是数组名*/
void reverse(int *x, int n)   /*形参x是数组名*/
{
    int temp, i, j, m;

    m = (n-1)/2;

    for( i=0; i <= m; i++)
    {
        j = n-1-i;  //j指向对应的元素

        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }

}



void g7()
{
    int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
    void reserve_1(int *x, int n);   /*形参x为指针变量*/
    printf("The original array:\n");

    for( i=0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    reserve_1(a, 10);

    printf("The array has benn inverted:\n");

    for( i=0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reserve_1(int *x, int n)   /*形参x为指针变量*/
{
    int *p, temp, *i, *j, m;

    m = (n-1)/2;
    i = x;         //i指向数组的第一个元素
    j = x-1+n;     //j指向的是数组的最后一个元素
    p = x+m;       //指向中间，配对……

    for( ; i <= p; i++, j--)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}

#include <stdio.h>

void g8()
{
    int *p, i, a[10];
//    int a[10];
//    int i;
//    int *p;

    p = a;

    for( i=0; i < 10; i++ )
    {
        scanf("%d", p++);
    }
    printf("\n");

    for( p=a; p < (a+10); p++ )
    {
        printf("%d\n", *p);
    }
}

void g9()
{
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    printf("a: %d\n", a);

    printf("*a: %d\n", *a);

    printf("a[0]: %d\n", a[0]);

    printf("&a[0]: %d\n", &a[0]);

    printf("&a[0][0]: %d\n", &a[0][0]);

    printf("a+1: %d\n", a+1);

    printf("*(a+1): %d\n", *(a+1));

    printf("a[1]: %d\n", a[1]);

    printf("&a[1]: %d\n", &a[1]);

    printf("&a[1][0]: %d\n", &a[1][0]);

    printf("a+2: %d\n", a+2);

    printf("*(a+2): %d\n", *(a+2));

    printf("a[2]: %d\n", a[2]);

    printf("&a[2]: %d\n", &a[2]);

    printf("&a[2][0]: %d\n", &a[2][0]);

    printf("a[1]+1: %d\n", a[1]+1);

    printf("*(a+1)+1: %d\n", *(a+1)+1);

    printf("*(a[1]+1): %d\n", *(a[1]+1));

    printf("*(*(a+1)+1): %d\n", *(*(a+1)+1));

}

void g10()
{

    int a[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    int (*p)[4];

    int i, j;

    p = a;

    for( i=0; i < 3; i++)
    {
        for( j=0; j < 4; j++)
        {
            printf("%2d  ", *(*(p+i)+j));

        }
        printf("\n");
    }
}

void sort(int x[], int n);

void g11()
{
    int *p, i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};

    printf("The original array:\n");

    for( i=0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }


    printf("\n");

    p = a;
    sort( p, 10 );

    printf("The result is:\n");

    for( p=a,i=0; i < 10; i++ )
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n");

}

void sort(int x[], int n)
{
    int i, j, k, t;

    for( i=0; i < n-1; i++)
    {
        k = i;

        for( j=i+1; j < n; j++ )
        {
            if( x[j] > x[i] )
            {
                t = x[j];
                x[j] = x[i];
                x[i] = t;
            }
        }
    }
}

void  g12( )
{
    int a[3][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    int (*p)[4], i, j;

    p = a;

    printf("i = ");
    scanf("%d", &i);
    while( i > 2 || i < 0 )
    {
        printf("i = ");
        scanf("%d", &i);
    }
    printf("j = ");
    scanf("%d", &j);
    while( j > 3 || i < 0 )
    {
        printf("j = ");
        scanf("%d", &j);
    }

    printf("a[%d, %d] = %d\n", i, j, *(*(p+i)+j));

}

void g13()
{
    char a[] = "Fishc.com is a good web site!", b[30], *a1, *b1; //b的索引一定要够，否则结果很奇怪
//    char a[] = "Fishc.com is a good web site!", b[30], (*a1)[], (*b1)[];
    int i;
//    char (*a1)[], (*b1)[]; //指针数组
//    int (*p)[4];
    a1 = a;
    b1 = b;
    printf("address a:%d, b:%d\n", a1,b1);
    printf("String a1 is: %s\n", a);
    for(i=0; *(a+i) != '\0'; i++)
    {
//        printf("%s\n", *(a+i));
        *(b+i) = *(a+i);
        printf("a0:%c, b0:%c, ai:%c, bi:%c, i:%d\n", a[0], b[0], a[i], b[i], i);

    }
    *(b+i) = '\0';
    printf("address a:%d, b:%d\n", a1,b1);

    printf("String a is: %s\n", a);
    printf("sizeof(a)1 = %lu\n", sizeof(a));
    printf("sizeof(b)1 = %lu\n", sizeof(b));
    printf("String b is: ");


    for(i=0; b[i] != '\0'; i++)
    {
        printf("%c", b[i]);

    }
    printf("\n");
    printf("String b is: %s\n", b);

    printf("\n\n");
}

void g14()
{
    char a[] = "Fishc.com is a good web site!", b[40], *p1, *p2;
    int i;

    p1 = a;
    p2 = b;

    for( ; *p1 != '\0'; p1++, p2++)
    {
        *p2 = *p1;
    }
    *p2 = '\0';

    printf("String a is: %s\n", a);
    printf("String b is: ");
    for(i=0; b[i] != '\0'; i++)
    {
        printf("%c", b[i]);
    }
    printf("\n");
    for(p2=b; *p2 != '\0'; p2++)
    {
        printf("%c",*p2);
    }

    printf("\n");
}
