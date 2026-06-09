#include <unistd.h>

int is_letter(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

int main (int ac, char *av[])
{
    int i = 1;
    int j;
    char c;
    if (ac >= 2)
    {
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                c = to_lower(av[i][j]);
                if (is_letter(c) && (j == 0 || av[i][j - 1] == ' ' || av[i][j - 1] == '\t'))
                    c = to_upper(c);
                write (1, &c, 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    else write(1, "\n", 1);
}

// #include <unistd.h>
// int is_letter(char c){return((c>='a'&&c<='z')||(c>='A'&&c<='Z'));}
// int to_upper(char c){if(c>='a'&&c<='z')return(c-32);return(c);}
// int to_lower(char c){if(c>='A'&&c<='Z')return(c+32);return(c);}
// int main(int ac,char*av[]){int i=1;int j;char c;if(ac>=2){while(av[i]){j=0;while(av[i][j])
// {c=to_lower(av[i][j]);if(is_letter(c)&&(j==0||av[i][j-1]==32||av[i][j-1]=='\t'))c=to_upper(c);write(1,&c,1);j++;}write(1,"\n",1);i++;}}else write(1,"\n",1);}