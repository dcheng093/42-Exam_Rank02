#include<unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i])
        {
            char c = av[1][i];
            int r = 1;
            if(c >= 'a' && c <= 'z')
                r = c - 'a' + 1;
            else if(c >= 'A' && c <= 'Z')
                r = c - 'A' + 1;
            while(r--)
                write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
}