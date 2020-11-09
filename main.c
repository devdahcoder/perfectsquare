#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int perfectSquare(int n)
{
    int num = n;
    for(int x = 0; x <= n; x++) {
        if (x * x == num) return 1;
    }
    return 0;
}


int main()
{
    int square, perfectSquare(int);

    printf("Enter a number: ");

    scanf("%d", &square);
    printf("%d\n", perfectSquare(square));

    return 0;
}

