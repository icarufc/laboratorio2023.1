#include <stdio.h>
int main()
{
    char a = 'R';
    int b = 2;
    float c = 4.5f;
    double d = 3.14;
    printf("size(a) = %ld, location(a) = %p\n", sizeof(a), &a);
    printf("size(b) = %ld, location(b) = %p\n", sizeof(b), &b);
    printf("size(c) = %ld, location(c) = %p\n", sizeof(c), &c);
    printf("size(d) = %ld, location(d) = %p\n", sizeof(d), &d);
    return 0;
}