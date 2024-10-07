#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char	str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str2[] = "hello world 42Family";
	char	str3[] = "Hello:world";
	char	str4[] = "";

	
	printf("\nValeur de str1 AVANT : '%s'", str1);
	printf("\nValeur de str2 AVANT : '%s'", str2);
	printf("\nValeur de str3 AVANT : '%s'", str3);
	printf("\nValeur de str4 AVANT : '%s'\n\n", str4);

	char *res1 = ft_strcapitalize(str1);
	char *res2 = ft_strcapitalize(str2);
	char *res3 = ft_strcapitalize(str3);
	char *res4 = ft_strcapitalize(str4);


	printf("ft_strcapitalize(str1) = %s\n", res1);
	printf("ft_strcapitalize(str2) = %s\n", res2);
	printf("ft_strcapitalize(str3) = %s\n", res3);
	printf("ft_strcapitalize(str4) = %s\n", res4);

	return (0);
}