#include <unistd.h>

void    rotone(char *str)
{
    char c;

    c = 0;
    while (*str)
    {
        c = *str;
        if ((*str >= 'a' && *str <='y') || (*str >= 'A' && *str <='Y'))
            c = *str + 1;
        else if (*str == 'z')
            c = 'a';
        else if (*str == 'Z')
            c = 'A';
        write(1, &c, 1);
        str++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);
    else
        write(1, "\n", 1);
    return (0);
}
