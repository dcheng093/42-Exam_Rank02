#include <stddef.h>

// basically for each character in s, loop through each character in reject. if a match is found then return the length, else return the length of s anyway

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    while (s[i])
    {
        size_t j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return i;
            j++;
        }
        i++;
    }
    return i;
}