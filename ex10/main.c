#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{

	
  char str[] = "hello world 42Family";
  char strDest[] = "";

  printf("str AVANT : '%s'\n", str);
  printf("dest AVANT : '%s'\n\n", strDest);

  int r = ft_strlcpy(strDest, str, 14);

  printf("ft_strlcpy(strDest, str, 14) return : %d\n", r);
  printf("dest APRES : '%s'\n", strDest);


	return (0);
}