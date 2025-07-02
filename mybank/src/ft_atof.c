int	ft_strlen(char *str);

double	ft_atof(char *str)
{
	double	result = 0.0;
	double	frac = 0.0;
	int		i = 0;
	int		dec = 0;

	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] == '.')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		frac = frac * 10 + (str[i] - '0');
		dec++;
		i++;
	}
	while (dec--)
		frac /= 10;
	return (result + frac);
}
