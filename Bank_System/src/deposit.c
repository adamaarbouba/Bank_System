#include <unistd.h>
#include "mybank.h"

void deposit(double *balance)
{
	char buf[20];
	double amount;

	while (1)
	{
		ft_putstr("\nEnter 'd' to deposit: ");
		ft_readline(buf, 20);
		if (buf[0] != 'd' || ft_strlen(buf) != 1)
			continue;

		ft_putstr("Enter amount to deposit (max 100): ");
		ft_readline(buf, 20);

		amount = ft_atof(buf);
		if (amount > 0 && amount <= 100)
			break;
	}
	*balance += amount;
	ft_putstr("Deposited $");
	ft_putdouble(amount);
	ft_putstr(". New balance: $");
	ft_putdouble(*balance);
	write(1, "\n", 1);
}
