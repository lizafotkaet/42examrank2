#include <stdlib.h>

int *ft_range(int start, int end)
{
    int *arr;
    int *temp;
    size_t size;

    if (start <= end)
        size = end - start + 1;
    else
        size = start - end + 1;
    arr = (int *)malloc(sizeof(int) * size);
    if (!arr)
        return (NULL);
    temp = arr;
    while (size)
    {

        *arr = start;
        if (start <= end)
            start++;
        else
            start--;
        arr++;
        size--;
    }
    return (temp);
}
// #include <stdio.h>
// int main(void) // just to check
// {
//     int *arr;
//     int *temp;

//     arr = ft_range(5, 1);
//     temp = arr;
//     while (*arr) // this condition won't work if there's a 0 in the array. adjust accordingly im too lazy
//     {
//         printf("%d\n", *arr);
//         arr++;
//     }
//     free(temp);
//     return (0);
// }
