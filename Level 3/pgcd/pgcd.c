#include <stdio.h>
#include <stdlib.h>

void    pgcd(int a, int b)
{
    int n = a < b ? a : b;
    while (n > 0)
    {
        if (a % n == 0 && b % n == 0)
        {
            printf("%d\n", n);
            return;
        }
        n--;
    }
}

int main(int ac, char *av[])
{
    if (ac == 3)
        pgcd(atoi(av[1]), atoi(av[2]));
    else printf("\n");
}

// #include <stdio.h>
// #include <stdlib.h>
// void pgcd(int a, int b){int n=a<b?a:b;while(n>0){if(a%n==0&&b%n==0){printf("%d\n",n);return;}n--;}}
// int main(int ac, char*av[]){if(ac==3){if(atoi(av[1])<= 0||atoi(av[2])<= 0){printf("\n");
// return(0);}pgcd(atoi(av[1]),atoi(av[2]));}elseprintf("\n");}