#include <stdio.h>
#include <stdbool.h>

double area(int r);
double area(int r)
{
    return 3.14 * r * r;
}

int main()
{
    int n = 3;
    double n1 = 5.5;
    char c = '#';
    char s[5] = "hello";
    printf("%c%.1f%c%d%s%d\n", c, n1, '-', n, s, true);
    printf("n + 5 = %d\n", n + 5);
    printf("면적은 %.2f", area(n));
    return 0;
}