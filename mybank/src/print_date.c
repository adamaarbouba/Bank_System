#include <unistd.h>

void	print_date(int year, int month, int day)
{
	char buf[11];

	buf[0] = (year / 1000) % 10 + '0';
	buf[1] = (year / 100) % 10 + '0';
	buf[2] = (year / 10) % 10 + '0';
	buf[3] = year % 10 + '0';
	buf[4] = '-';
	buf[5] = (month / 10) + '0';
	buf[6] = (month % 10) + '0';
	buf[7] = '-';
	buf[8] = (day / 10) + '0';
	buf[9] = (day % 10) + '0';
	buf[10] = '\0';

	write(1, buf, 10);
	write(1, "\n", 1);
}
