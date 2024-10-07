#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char	str1[] = "Hello 42 World";
	char	str2[] = "HELLOWORLD";
	char	str3[] = "HelloWorld";
	char	str4[] = "";

	
	printf("\nValeur de str1 AVANT de de passer par fonction: '%s'", str1);
	printf("\nValeur de str2 AVANT de de passer par fonction: '%s'", str2);
	printf("\nValeur de str3 AVANT de de passer par fonction: '%s'", str3);
	printf("\nValeur de str4 AVANT de de passer par fonction: '%s'\n\n", str4);


	printf("ft_strlowcase(str1) = %s\n", ft_strlowcase(str1));
	printf("ft_strlowcase(str2) = %s\n", ft_strlowcase(str2));
	printf("ft_strlowcase(str3) = %s\n", ft_strlowcase(str3));
	printf("ft_strlowcase(str4) = %s\n", ft_strlowcase(str4));

	return (0);
}