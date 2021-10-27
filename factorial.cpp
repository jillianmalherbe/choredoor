#include <iostream>
#include <stdio.h>

int factorial (int n)
{
    int temp; // we could solve without local variable

    if (n == 0)
        temp = 1;
    else
    {
        temp = n * factorial (n-1);
    }
    return temp;
} //factorial()

int ans;

int main (void)
{
    int x = 9;
    ans = factorial (x);
    printf("factorial (%d) = %d\n", x, ans);
} //main()