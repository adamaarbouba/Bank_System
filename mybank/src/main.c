#include <unistd.h>
#include "mybank.h"

int	main(void)
{
	double	balance = 0.0;
	char	name[30];
	char	id[5];
	char	cvc[4];
	char	buf[20];
	int		age;
	int		Y;
	int		M;
	int		D;

	ft_putstr("Enter your name: ");
	ft_readline(name, 30);

	ft_putstr("Enter your age: ");
	while (1)
	{
		ft_readline(buf, 20);
		if (ft_strlen(buf) == 0)
			continue;
		age = ft_atoi(buf);
		if (age >= 0)
			break;
	}

	ft_putstr("Enter your 4-digit ID: ");
	while (1)
	{
		ft_readline(id, 5);
		if (ft_strlen(id) == 4 && ft_str_is_numeric(id))
			break;
	}

	ft_putstr("Enter your 3-digit CVC: ");
	while (1)
	{
		ft_readline(cvc, 4);
		if (ft_strlen(cvc) == 3 && ft_str_is_numeric(cvc))
			break;
	}

	ft_putstr("Enter your birth year (must be 2025): ");
	while (1)
	{
		ft_readline(buf, 20);
		if (ft_strlen(buf) == 0)
			continue;
		Y = ft_atoi(buf);
		if (Y == 2025)
			break;
	}

	ft_putstr("Enter your birth month (1-12): ");
	while (1)
	{
		ft_readline(buf, 20);
		if (ft_strlen(buf) == 0)
			continue;
		M = ft_atoi(buf);
		if (M >= 1 && M <= 12)
			break;
	}

	ft_putstr("Enter your birth day (1-31): ");
	while (1)
	{
		ft_readline(buf, 20);
		if (ft_strlen(buf) == 0)
			continue;
		D = ft_atoi(buf);
		if (D >= 1 && D <= 31)
			break;
	}

	Y += 10;
	D += 15;
	if (D > 30)
	{
		D -= 30;
		M++;
	}
	if (M > 12)
	{
		M = 1;
		Y++;
	}

	ft_putstr("\nMR. ");
	ft_putstr(name);
	ft_putstr("\nyour age is : ");
	ft_putnbr(age);
	write(1, "\n", 1);
	ft_putstr("balance: $0.00\n");
	ft_putstr("expire date: ");
	print_date(Y, M, D);

	deposit(&balance);

	return (0);
}
