int ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    int digit;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            digit = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            digit = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            digit = str[i] - 'A' + 10;
        else
            break;
        if (digit >= str_base)
            break;
        res = res * str_base + digit;
        i++;
    }
    return (res * sign);
}

/*
  Lowercase: str[i] - 'a' + 10

  'a' has ASCII value 97. So:
  - 'a' - 'a' + 10 = 0 + 10 = 10
  - 'b' - 'a' + 10 = 1 + 10 = 11
  - 'f' - 'a' + 10 = 5 + 10 = 15

  Uppercase: str[i] - 'A' + 10

  Same idea. 'A' has ASCII value 65:
  - 'A' - 'A' + 10 = 0 + 10 = 10
  - 'F' - 'A' + 10 = 5 + 10 = 15

  The + 10 is there because a/A represents the value 10 in hex
  (digits 0–9 already cover 0–9, so a starts at 10).
*/