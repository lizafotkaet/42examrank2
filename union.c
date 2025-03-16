#include <unistd.h>

void    ft_union(char *s1, char *s2)
{
    char seen[256] = {0};
    
    while (*s1)
    {
        if (!seen[(unsigned char)*s1])
        {
            seen[(unsigned char)*s1] = 1;
            write(1, s1, 1);
        }
        s1++;
    }
    while (*s2)
    {
        if (!seen[(unsigned char)*s2])
        {
            seen[(unsigned char)*s2] = 1;
            write(1, s2, 1);
        }
        s2++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    else
        write(1, "\n", 1);
    return (0);
}
