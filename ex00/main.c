#include <stdio.h>

void	ft_strcpy(char *dest, char *src);

int main(void)
{
	char	dest[20];
	char	src[] = "Hello 42 World";
	
	printf("\nValeur de dest AVANT de de passer par fonction: null\n");
	printf("Valeur de src AVANT de de passer par fonction: %s\n", src);
	ft_strcpy(dest, src);
	printf("\nValeur de dest APRES de de passer par fonction: %s\n", dest);
	printf("Valeur de src APRES de de passer par fonction: %s\n\n", src);
	return (0);
}