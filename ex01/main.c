#include <stdio.h>

void	ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char	dest[20];
	char	src[] = "Hello 42 World";
	
	printf("\nValeur de dest AVANT de de passer par fonction: null\n");
	printf("Valeur de src AVANT de de passer par fonction: %s\n", src);
	printf("\nft_strncpy(dest, src, 5);\n");
	ft_strncpy(dest, src, 5);
	printf("\nValeur de dest APRES de de passer par fonction: %s\n", dest);
	printf("Valeur de src APRES de de passer par fonction: %s\n\n", src);
	return (0);
}