#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

void	teststrlcpy(void)
{
	char	dest1[20];
	char	dest2[20];
	char	dest3[20];

	char	src[9] = "testdone";

	size_t n;

	n = ft_strlcpy(dest1, src, 9);
	printf("%s %ld | ", dest1, n);
	n = ft_strlcpy(dest2, src, 4);
	printf("%s %ld | ", dest2, n);
	n = ft_strlcpy(dest3, src, 0);
	printf("%s %ld \n", dest3, n);
}

void	testtolowerupper(void)
{
	char	src1[] = "ABcd0";
	char	src2[] = "AbCd0";

	char	ft_src1[] = "ABcd0";
	char	ft_src2[] = "AbCd0";
	
	printf("original src1    : %s\n", src1);
	printf("original ft_src1 : %s\n", ft_src1);
	for (int i = 0; i < 5; i++)
	{
		src1[i] = tolower(src1[i]);
		ft_src1[i] = ft_tolower(ft_src1[i]);
	}
	printf("src1 tolower     : %s\n", src1);
	printf("src1 ft_tolower  : %s\n", ft_src1);
	printf("\n");

	printf("original src2    : %s\n", src2);
	printf("original ft_src2 : %s\n", ft_src2);
	for (int i = 0; i < 5; i++)
	{
		src2[i] = toupper(src2[i]);
		ft_src2[i] = ft_toupper(ft_src2[i]);
	}
	printf("src1 toupper     : %s\n", src2);
	printf("src1 ft_toupper  : %s\n", ft_src2);
}

void	teststrchr(void)
{
	char	str1[] = "find Z";
	char	str2[] = "don't have c";
	char	str3[20] = "";
	char	*ptr;
	char	*ft_ptr;

	ptr = strchr(str1, 'Z');
	ft_ptr = ft_strchr(str1, 'Z');
	printf("strchr           : %s, %c \n", str1, *ptr);
	printf("ft_strchr        : %s, %c \n", str1, *ft_ptr);
	printf("\n");

	ptr = strchr(str2, 'Z');
	ft_ptr = ft_strchr(str2, 'Z');
	if (ptr)
		printf("strchr           : %s, %c \n", str2, *ptr);
	if (ft_ptr)
		printf("ft_strchr        : %s, %c \n", str2, *ft_ptr);
	printf("\n");

	ptr = strchr(str3, 'Z');
	ft_ptr = ft_strchr(str3, 'Z');
	if (ptr)
		printf("strchr           : %s, %c \n", str3, *ptr);
	if (ft_ptr)	
		printf("ft_strchr        : %s, %c \n", str3, *ft_ptr);
	printf("\n");
}

void	teststrrchr(void)
{
	char	str1[] = "Zfind_last Z";
	char	ft_str1[] = "Zfind_last Z";
	char	str2[] = "don't have c";
	char	str3[20] = "";
	char	*ptr;
	char	*ft_ptr;

	ptr = strrchr(str1, 'Z');
	ft_ptr = ft_strrchr(ft_str1, 'Z');
	printf("strrchr          : %s, %c", str1, *ptr);
	*ptr = 48;
	printf(" %s\n", str1);	
	printf("ft_strrchr       : %s, %c", ft_str1, *ft_ptr);
	*ft_ptr = 48;
	printf(" %s\n", ft_str1);	
	printf("\n");

	ptr = strrchr(str2, 'Z');
	ft_ptr = ft_strrchr(str2, 'Z');
	if (ptr)
	{
		printf("strrchr          : %s, %c", str2, *ptr);
		*ptr = 48;
		printf(" %s\n", str2);	
	}
	if (ft_ptr)
	{
		printf("ft_strrchr       : %s, %c \n", str2, *ft_ptr);
		*ft_ptr = 48;
		printf(" %s\n", str2);	
	}
	printf("\n");

	ptr = strrchr(str3, 'Z');
	ft_ptr = ft_strrchr(str3, 'Z');
	if (ptr)
	{
		printf("strrchr          : %s, %c", str3, *ptr);
		*ptr = 48;
		printf(" %s\n", str3);	
	}
	if (ft_ptr)
	{
		printf("ft_strrchr       : %s, %c \n", str3, *ft_ptr);
		*ft_ptr = 48;
		printf(" %s\n", str3);	
	}
	printf("\n");
}

void	teststrncmp(void)
{
	char	s1[] = "testdone";
	char	s2[] = "testing!";

	printf("strncmp          : %s, %s %d \n", s1, s2, strncmp(s1, s2, 8));
	printf("ft_strncmp       : %s, %s %d \n", s1, s2, ft_strncmp(s1, s2, 8));
	printf("\n");

	printf("strncmp          : %s, %s %d \n", s1, s2, strncmp(s1, s2, 4));
	printf("ft_strncmp       : %s, %s %d \n", s1, s2, ft_strncmp(s1, s2, 4));
	printf("\n");

	printf("strncmp          : %s,    %d \n", s1, strncmp(s1, "", 8));
	printf("ft_strncmp       : %s,    %d \n", s1, ft_strncmp(s1, "", 8));
	printf("\n");

	printf("strncmp          :        %d \n", strncmp("", "", 8));
	printf("ft_strncmp       :        %d \n", ft_strncmp("", "", 8));
	printf("\n");
} 

void	testmemchr(void)
{
	char	str1[] = "find Z";
	char	str2[] = "don't have c";
	char	str3[20] = "";
	char	*ptr;
	char	*ft_ptr;

	ptr = memchr(str1, 'Z', strlen(str1));
	ft_ptr = ft_memchr(str1, 'Z', strlen(str1));
	printf("memchr           : %s, %c \n", str1, *ptr);
	printf("ft_memchr        : %s, %c \n", str1, *ft_ptr);
	printf("\n");

	ptr = memchr(str1, 'Z', 5);
	ft_ptr = ft_memchr(str1, 'Z', 5);
	if (ptr)
		printf("strchr           : %s, %c \n", str1, *ptr);
	if (ft_ptr)
		printf("ft_memchr        : %s, %c \n", str1, *ft_ptr);
	printf("\n");

	ptr = memchr(str1, 'Z', 0);
	ft_ptr = ft_memchr(str1, 'Z', 0);
	if (ptr)
		printf("strchr           : %s, %c \n", str1, *ptr);
	if (ft_ptr)
		printf("ft_memchr        : %s, %c \n", str1, *ft_ptr);
	printf("\n");

	ptr = memchr(str2, 'Z', strlen(str2));
	ft_ptr = ft_memchr(str2, 'Z', strlen(str2));
	if (ptr)
		printf("strchr           : %s, %c \n", str2, *ptr);
	if (ft_ptr)
		printf("ft_memchr        : %s, %c \n", str2, *ft_ptr);
	printf("\n");

	ptr = memchr(str3, 'Z', strlen(str3));
	ft_ptr = ft_memchr(str3, 'Z', strlen(str3));
	if (ptr)
		printf("memchr           : %s, %c \n", str3, *ptr);
	if (ft_ptr)	
		printf("ft_memchr        : %s, %c \n", str3, *ft_ptr);
	printf("\n");
}

void	testmemcmp(void)
{
	char	s1[] = "testdone";
	char	s2[] = "testing!";

	printf("memcmp           : %s, %s %d \n", s1, s2, memcmp(s1, s2, 8));
	printf("ft_memcmp        : %s, %s %d \n", s1, s2, ft_memcmp(s1, s2, 8));
	printf("\n");

	printf("memcmp           : %s, %s %d \n", s1, s2, memcmp(s1, s2, 4));
	printf("ft_memcmp        : %s, %s %d \n", s1, s2, ft_memcmp(s1, s2, 4));
	printf("\n");

	printf("memcmp           : %s,    %d \n", s1, memcmp(s1, "", 8));
	printf("ft_memcmp        : %s,    %d \n", s1, ft_memcmp(s1, "", 8));
	printf("\n");

	printf("memcmp           :        %d \n", memcmp(s1, s2, 0));
	printf("ft_memcmp        :        %d \n", ft_memcmp(s1, s2, 0));
	printf("\n");

	printf("memcmp           :        %d \n", memcmp("", "", 8));
	printf("ft_memcmp        :        %d \n", ft_memcmp("", "", 8));
	printf("\n");
} 

void	teststrnstr(void)
{
	char	to_find1[20] = "123";
	char	to_find2[20] = "";

	char	fstr1[20] = "test123";
	char	fstr2[20] = "test12123";
	char	fstr3[20] = "testtest";
	char	fstr4[20] = "";
	char	fstr5[20] = "test123";
	char	fstr6[20] = "test12123";
	char	fstr7[20] = "testtest";
	char	fstr8[20] = "";
	char	fstr9[20] = "test12123";

	printf("%s | ", ft_strnstr(fstr1, to_find1, 10));
	printf("%s | ", ft_strnstr(fstr2, to_find1, 10));
	printf("%s | ", ft_strnstr(fstr3, to_find1, 10));
	printf("%s | ", ft_strnstr(fstr4, to_find1, 10));
	printf("%s | ", ft_strnstr(fstr5, to_find2, 10));
	printf("%s | ", ft_strnstr(fstr6, to_find2, 10));
	printf("%s | ", ft_strnstr(fstr7, to_find2, 10));
	printf("%s | ", ft_strnstr(fstr8, to_find2, 10));
	printf("%s \n", ft_strnstr(fstr9, to_find1, 0));
	printf("\n");
}

int main(void)
{
	char	arr[4] = "Aa0" ;
	char	testmemset[] = "testing";
	char	ft_testmemset[] = "testing";

	printf("isalpha          : A %d | a %d | 0 %d \n", isalpha(arr[0]), isalpha(arr[1]), isalpha(arr[2]));
	printf("ft_isalpha       : A %d | a %d | 0 %d \n", ft_isalpha(arr[0]), ft_isalpha(arr[1]), ft_isalpha(arr[2]));
	printf("\n");

	printf("isdigit          : A %d | a %d | 0 %d \n", isdigit(arr[0]), isdigit(arr[1]), isdigit(arr[2]));
	printf("ft_isdigit       : A %d | a %d | 0 %d \n", ft_isdigit(arr[0]), ft_isdigit(arr[1]), ft_isdigit(arr[2]));
	printf("\n");

	printf("isalnum          : A %d | a %d | 0 %d \n", isalnum(arr[0]), isalnum(arr[1]), isalnum(arr[2]));
	printf("ft_isalnum       : A %d | a %d | 0 %d \n", ft_isalnum(arr[0]), ft_isalnum(arr[1]), ft_isalnum(arr[2]));
	printf("\n");

	printf("isascii          : A %d | a %d | 0 %d \n", isascii(arr[0]), isascii(arr[1]), isascii(arr[2]));
	printf("ft_isascii       : A %d | a %d | 0 %d \n", ft_isascii(arr[0]), ft_isascii(arr[1]), ft_isascii(arr[2]));
	printf("\n");

	printf("isprint          : A %d | a %d | 0 %d \n", isprint(arr[0]), isprint(arr[1]), isprint(arr[2]));
	printf("ft_isprint       : A %d | a %d | 0 %d \n", ft_isprint(arr[0]), ft_isprint(arr[1]), ft_isprint(arr[2]));
	printf("\n");

	printf("strlen           : strlen(arr)    %ld \n", strlen(arr));
	printf("ft_strlen        : ft_strlen(arr) %ld \n", ft_strlen(arr));
	printf("\n");
	
	printf("memset           : %s \n", testmemset);
	printf("ft_memset        : %s \n", ft_testmemset);

	memset(testmemset, 'a', 7);
	ft_memset(ft_testmemset, 'a', 7);

	printf("memset           : %s \n", testmemset);
	printf("ft_memset        : %s \n", ft_testmemset);
	
	memset(testmemset, '0', 4);
	ft_memset(ft_testmemset, '0', 4);

	printf("memset           : %s \n", testmemset);
	printf("ft_memset        : %s \n", ft_testmemset);
	
	bzero(testmemset, 7);
	ft_bzero(ft_testmemset, 7);
	printf("\n");

	printf("bzero            : %s \n", testmemset);
	printf("ft_bzero         : %s \n", ft_testmemset);
	printf("\n");
	
	memcpy(testmemset, arr, 4);
	ft_memcpy(ft_testmemset, arr, 4);
	
	printf("memcpy           : %s \n", testmemset);
	printf("ft_memcpy        : %s \n", ft_testmemset);
	printf("\n");
	
	memmove(testmemset + 3, testmemset, 4);
	ft_memmove(ft_testmemset + 3, ft_testmemset, 4);

	printf("memmove          : %s \n", testmemset);
	printf("ft_memmove       : %s \n", ft_testmemset);
	printf("\n");

	memmove(testmemset, testmemset + 1, 4);
	ft_memmove(ft_testmemset, ft_testmemset + 1, 4);

	printf("memmove          : %s \n", testmemset);
	printf("ft_memmove       : %s \n", ft_testmemset);
	printf("\n");

	teststrlcpy();
	printf("\n");
	
	testtolowerupper();
	printf("\n");
	
	teststrchr();
	teststrrchr();
	teststrncmp();
	testmemchr();
	testmemcmp();
	teststrnstr();
	return (0);
}
