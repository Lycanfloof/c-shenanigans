#include <stdio.h>

// Interesting. It seems like the array doesn't get copied in the execution of a function.
// Update: It indeed doesn't. The function copies the POINTER you pass as an argument.

int *findMid(int a[], int n)
{
    printf("mid: %p\n", &a[n / 2]);
    printf("n: %p\n", &n);

    return &a[n / 2];
}

void main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof a / sizeof a[0];

    printf("mid: %p\n", &a[n / 2]);
    printf("n: %p\n", &n);

    int *mid = findMid(a, n);

    printf("mid: %p\n", mid);
    printf("n: %p\n", &n);
}