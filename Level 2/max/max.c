int             max(int *tab, unsigned int len)
{
    unsigned int i = 1;
    int biggest = tab[0];
    if (len <= 0)
        return 0;
    while (i < len)
    {
        if (tab[i] > biggest)
            biggest = tab[i];
        i++;    
    }
    return biggest;
}