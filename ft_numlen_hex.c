int    ft_numlen_hex(unsigned int n)
{
	int    len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}