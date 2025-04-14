#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	if (!s)
		return NULL;
    unsigned char *p = s;
    while (n--)
        *p++ = (unsigned char)c;
    return s;
}