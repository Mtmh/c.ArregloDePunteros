#include <stdio.h>

int main(void)
{
    int x, y, z, u, v;
    int *a[5] ={&x, &y, &z, &u, &v};// Puede ser asi o como esta a vajo
    a[0] = &x;
    a[1] = &y;
    a[2] = &z;
    a[3] = &u;
    a[4] = &v;

    *a[0] = 1;
    *a[1] = 2;
    *a[2] = -15;
    *a[3] = 400;
    *a[4] = 5;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);
    printf("u: %d\n", u);
    printf("v: %d\n", v);
    return 0;
}
