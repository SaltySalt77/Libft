#include "libft.h"
#include <stdio.h>

int	main()
{
	int	result;
//	char	stddest[20] = "std";
	char	stdsrc[] = "std";

	result = strlcat(NULL, stdsrc, 10);
	printf("%d", result);
	return (0);
}
