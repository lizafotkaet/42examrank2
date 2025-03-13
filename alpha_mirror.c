#include <unistd.h>

void alpha_mirror(char *str)
{
    int i = 0;

    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            i = 'z' - (*str - 'a');
            write(1, &i, 1);
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            i = 'Z' - (*str - 'A');
            write(1, &i, 1);
        }
        else
            write(1, str, 1);    
        str++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        alpha_mirror(argv[1]);
    else
        write(1, "\n", 1);
    return (0);
}
