#include <stdio.h>

int main()
{
    int min(int, int); int i, num, value1, value2, value, minimum;
    scanf("%d", &num); scanf("%d%d", &value1, &value2);
    minimum = min(value1, value2);

    for(i = 0; i < num-2; i++)
    {
        scanf("%d", &value);
        minimum = min(minimum, value);
    }

    printf("%d", minimum);
    return 0;
}

int min(int x, int y)
{
    if(x >= y) return y;
    else return x;
}
