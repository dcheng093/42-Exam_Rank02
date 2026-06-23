typedef struct  s_point
{
int           x;
int           y;
}               t_point;

void fill(char **tab, t_point size, int x, int y, char old)
{
    if (x < 0 || y < 0 || x >= size.x || y >= size.y || tab[y][x] != old)
        return;

    tab[y][x] = 'F';

    fill(tab, size, x + 1, y, old);
    fill(tab, size, x - 1, y, old);
    fill(tab, size, x, y + 1, old);
    fill(tab, size, x, y - 1, old);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    char old;

    old = tab[begin.y][begin.x];

    if (old == 'F')
        return;

    fill(tab, size, begin.x, begin.y, old);
}
// #include <stdio.h>
// int main(void)
// {
//     char row1[] = "AAAAAA";
//     char row2[] = "ABBBAA";
//     char row3[] = "ABBAAA";
//     char row4[] = "AAAAAA";

//     char *map[] = {
//         row1,
//         row2,
//         row3,
//         row4
//     };

//     t_point size = {6, 4};
//     t_point begin = {1, 1};

//     flood_fill(map, size, begin);

//     for (int i = 0; i < size.y; i++)
//         printf("%s\n", map[i]);

//     return (0);
// }