char    *ft_strcpy(char *dest, const char *src)
{
    char    *temp;

    temp = dest;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (temp);
}

//#include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     char    src[] = "hello";
//     char    *dst;

//     dst = NULL;
//     dst = (char *)malloc(sizeof(char) * 6);
//     dst = ft_strcpy(dst, src);
//     printf("%s\n", dst);
//     free(dst);
//     return (0);
// }
