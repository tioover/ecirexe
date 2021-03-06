#include <stdio.h>
#define N 10

int main(int argc, const char *argv[])
{
    int i, j, tmp, a[N];
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < N; i++) {
        tmp = a[i];
        for (j = i; j > 0 && a[j-1] > tmp; j--) {
            a[j] = a[j-1];
        }
        a[j] = tmp;
    }

    for (i = 0; i < N; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
