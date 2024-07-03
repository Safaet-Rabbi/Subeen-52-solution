#include <stdio.h>
#include <math.h>
int main()
{
    long long int a, b, c;
    int n;
    double x;
    scanf("%d", &n);

    while (n--)
        {
        scanf("%lld", &a);
        x = sqrt(a);
        b = ceil(x);
        c = floor(x);

        if (b == c)
            printf("YES\n");
        else
            printf("NO\n");
    }


}
