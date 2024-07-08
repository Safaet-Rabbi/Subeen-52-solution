#include <stdio.h>
int main()
{
    int n, run1, run2, ball, balldone;
    double present_rate, wishing_rate, z, y, x;
    scanf("%d", &n);
    while (n--)
        {
         scanf("%d %d %d", &run1, &run2, &ball);
         balldone = 300 - ball;
         x = ((run2*1) / balldone) * 6;
         present_rate = x;

        y = run1 - run2;
        y = (y + 1)*1;
        z = (y / ball)*6;
        wishing_rate = z;

        printf("%.2lf %.2lf\n", present_rate, wishing_rate);
    }

    return 0;
}
