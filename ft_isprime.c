#include "libft.h"

int ft_isprime(int num)
{
	int i;

	i = 2;
	if (num <= 1)
		return (0);
	while (i <= (num / 2))
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}