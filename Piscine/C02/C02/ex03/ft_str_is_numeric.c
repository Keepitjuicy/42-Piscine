int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\0')
		{
			return (1);
		}
		if (str[i] <= '0' || str[i] >= '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int	main(void)
{
	char	str1[5] = {"234"};
	char	str2[10] = {"Wor1d"};
	char	str3[10] = {"Hello"};

	printf("%d\n", ft_str_is_numeric(str1));
	printf("%d\n", ft_str_is_numeric(str2));
	printf("%d\n", ft_str_is_numeric(str3));
}
*/
