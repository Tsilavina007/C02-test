#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
	char	str1[] = "Hello 42 World";
	char	str2[] = "Hello World";
	char	str3[] = "HelloWorld";
	char	str4[] = "";

	
	printf("\nValeur de str1 AVANT de de passer par fonction: '%s'", str1);
	printf("\nValeur de str2 AVANT de de passer par fonction: '%s'", str2);
	printf("\nValeur de str3 AVANT de de passer par fonction: '%s'", str3);
	printf("\nValeur de str4 AVANT de de passer par fonction: '%s'\n\n", str4);

	int res1 = ft_str_is_alpha(str1);
	int res2 = ft_str_is_alpha(str2);
	int res3 = ft_str_is_alpha(str3);
	int res4 = ft_str_is_alpha(str4);


	printf("ft_str_is_alpha(str1) = %d\n", res1);
	printf("ft_str_is_alpha(str2) = %d\n", res2);
	printf("ft_str_is_alpha(str3) = %d\n", res3);
	printf("ft_str_is_alpha(str4) = %d\n", res4);

	return (0);
}