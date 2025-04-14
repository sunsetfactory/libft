#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if (s1 == NULL || s2 == NULL)
        return 0;
    const unsigned char *p1 = s1;
    const unsigned char *p2 = s2;
    while(n--) {
        if (*p1 != *p2)
            return ((int)*p1 - (int)*p2);
        p1++;
        p2++;
    }
    return 0;
}