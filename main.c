#include<ctype.h>
#include<stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);

int main(void)
{
    char    arr[4] = "Aa0" ;

    printf("isalpha    : A %d | a %d | 0 %d \n", isalpha(arr[0]), isalpha(arr[1]), isalpha(arr[2]));
    printf("ft_isalpha : A %d | a %d | 0 %d \n", ft_isalpha(arr[0]), ft_isalpha(arr[1]), ft_isalpha(arr[2]));

    printf("isdigit    : A %d | a %d | 0 %d \n", isdigit(arr[0]), isdigit(arr[1]), isdigit(arr[2]));
    printf("ft_isdigit : A %d | a %d | 0 %d \n", ft_isdigit(arr[0]), ft_isdigit(arr[1]), ft_isdigit(arr[2]));
    
    printf("isalnum    : A %d | a %d | 0 %d \n", isalnum(arr[0]), isalnum(arr[1]), isalnum(arr[2]));
    printf("ft_isalnum : A %d | a %d | 0 %d \n", ft_isalnum(arr[0]), ft_isalnum(arr[1]), ft_isalnum(arr[2]));
    
    printf("isascii    : A %d | a %d | 0 %d \n", isascii(arr[0]), isascii(arr[1]), isascii(arr[2]));
    printf("ft_isascii : A %d | a %d | 0 %d \n", ft_isascii(arr[0]), ft_isascii(arr[1]), ft_isascii(arr[2]));
    return (0);
}
