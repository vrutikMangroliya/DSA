#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 1, d;
    c = a && b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = a && ++b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = ++a && b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = a && ++b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = --a && b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = --a && ++b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = --a && --b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = a && b;
    printf("a:%d b: %d c: %d", a, b, c);

    // or op

    c = a || b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = a || ++b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = ++a || b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = a || ++b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = --a || b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = --a || ++b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = --a || --b;
    printf("a:%d b: %d c: %d", a, b, c);

    c = a || b;
    printf("a:%d b: %d c: %d", a, b, c);

    // a=1,b=2,c=1,d;
    d = a && b && c;
    printf("a:%d b: %d c: %d d: %d", a, b, c, d);

    printf("a:%d a:%d", a, a++);
    printf("a:%d a:%d", a, ++a);
    printf("a:%d a:%d", a++, a++);
    printf("a:%d a:%d", ++a, ++a);
    printf("a:%d a:%d a:%d", a, a++, a++);
    printf("a:%d a:%d a:%d", a, ++a, ++a);
    printf("a:%d a:%d a:%d", a++, a++, a++);
    printf("a:%d a:%d a:%d", ++a, a++, ++a);
    printf("a:%d a:%d a:%d", a++, ++a, ++a);
}
