#include <unistd.h>

static void	ft_putnbr(int nb)
{
	char c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	ft_putdouble(double nb)
{
	int		int_part;
	int		frac_part;

	int_part = (int)nb;
	frac_part = (int)((nb - int_part) * 100 + 0.5);
	ft_putnbr(int_part);
	write(1, ".", 1);
	if (frac_part < 10)
		write(1, "0", 1);
	ft_putnbr(frac_part);
}
