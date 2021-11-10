#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

void	test_ft_strlcat(void)
{
	char    dest1[20] = "test";
	char    dest2[20] = "test";
	char    dest3[20] = "test";
	char    dest4[20] = "test";
	char    dest5[20] = "";
	char    dest6[20] = "";
	char    dest7[20] = "test";
	char    src1[20] = "done!!";
	char    src2[20] = "";

	char    fdest1[20] = "test";
	char    fdest2[20] = "test";
	char    fdest3[20] = "test";
	char    fdest4[20] = "test";
	char    fdest5[20] = "";
	char    fdest6[20] = "";
	char    fdest7[20] = "test";

	int     n;

	n = strlcat(dest1, src1, 10);
	printf("%s %d | ", dest1, n);
	n = strlcat(dest2, src1, 8);
	printf("%s %d | ", dest2, n);
	n = strlcat(dest3, src1, 3);
	printf("%s %d | ", dest3, n);
	n = strlcat(dest4, src2, 10);
	printf("%s %d | ", dest4, n);
	n = strlcat(dest5, src1, 8);
	printf("%s %d | ", dest5, n);
	n = strlcat(dest6, src2, 3);
	printf("%s %d | ", dest6, n);
	n = strlcat(dest7, src1, 0);
	printf("%s %d \n", dest7, n);

	n = ft_strlcat(fdest1, src1, 10);
	printf("%s %d | ", fdest1, n);
	n = ft_strlcat(fdest2, src1, 8);
	printf("%s %d | ", fdest2, n);
	n = ft_strlcat(fdest3, src1, 3);
	printf("%s %d | ", fdest3, n);
	n = ft_strlcat(fdest4, src2, 10);
	printf("%s %d | ", fdest4, n);
	n = ft_strlcat(fdest5, src1, 8);
	printf("%s %d | ", fdest5, n);
	n = ft_strlcat(fdest6, src2, 3);
	printf("%s %d | ", fdest6, n);
	n = ft_strlcat(fdest7, src1, 0);
	printf("%s %d \n", fdest7, n);
}

int main(void)
{
	char	arr[4] = "Aa0" ;
	char	testmemset[] = "testing";
	char	ft_testmemset[] = "testing";

	printf("isalpha    : A %d | a %d | 0 %d \n", isalpha(arr[0]), isalpha(arr[1]), isalpha(arr[2]));
	printf("ft_isalpha : A %d | a %d | 0 %d \n", ft_isalpha(arr[0]), ft_isalpha(arr[1]), ft_isalpha(arr[2]));
	printf("\n");

	printf("isdigit    : A %d | a %d | 0 %d \n", isdigit(arr[0]), isdigit(arr[1]), isdigit(arr[2]));
	printf("ft_isdigit : A %d | a %d | 0 %d \n", ft_isdigit(arr[0]), ft_isdigit(arr[1]), ft_isdigit(arr[2]));
	printf("\n");

	printf("isalnum    : A %d | a %d | 0 %d \n", isalnum(arr[0]), isalnum(arr[1]), isalnum(arr[2]));
	printf("ft_isalnum : A %d | a %d | 0 %d \n", ft_isalnum(arr[0]), ft_isalnum(arr[1]), ft_isalnum(arr[2]));
	printf("\n");

	printf("isascii    : A %d | a %d | 0 %d \n", isascii(arr[0]), isascii(arr[1]), isascii(arr[2]));
	printf("ft_isascii : A %d | a %d | 0 %d \n", ft_isascii(arr[0]), ft_isascii(arr[1]), ft_isascii(arr[2]));
	printf("\n");

	printf("isprint    : A %d | a %d | 0 %d \n", isprint(arr[0]), isprint(arr[1]), isprint(arr[2]));
	printf("ft_isprint : A %d | a %d | 0 %d \n", ft_isprint(arr[0]), ft_isprint(arr[1]), ft_isprint(arr[2]));
	printf("\n");

	printf("strlen     : strlen(arr)    %ld \n", strlen(arr));
	printf("ft_strlen  : ft_strlen(arr) %ld \n", ft_strlen(arr));
	printf("\n");
	
	printf("memset     : %s \n", testmemset);
	printf("ft_memset  : %s \n", ft_testmemset);

	memset(testmemset, 'a', 7);
	ft_memset(ft_testmemset, 'a', 7);

	printf("memset     : %s \n", testmemset);
	printf("ft_memset  : %s \n", ft_testmemset);
	
	memset(testmemset, '0', 4);
	ft_memset(ft_testmemset, '0', 4);

	printf("memset     : %s \n", testmemset);
	printf("ft_memset  : %s \n", ft_testmemset);
	
	bzero(testmemset, 7);
	ft_bzero(ft_testmemset, 7);
	printf("\n");

	printf("bzero      : %s \n", testmemset);
	printf("ft_bzero   : %s \n", ft_testmemset);
	printf("\n");
	
	memcpy(testmemset, arr, 4);
	ft_memcpy(ft_testmemset, arr, 4);
	
	printf("memcpy     : %s \n", testmemset);
	printf("ft_memcpy  : %s \n", ft_testmemset);
	printf("\n");
	
	memmove(testmemset + 3, testmemset, 4);
	ft_memmove(ft_testmemset + 3, ft_testmemset, 4);

	printf("memmove    : %s \n", testmemset);
	printf("ft_memmove : %s \n", ft_testmemset);
	printf("\n");

	memmove(testmemset, testmemset + 1, 4);
	ft_memmove(ft_testmemset, ft_testmemset + 1, 4);

	printf("memmove    : %s \n", testmemset);
	printf("ft_memmove : %s \n", ft_testmemset);

	test_ft_strlcat();
	printf("\n");
	return (0);
}
