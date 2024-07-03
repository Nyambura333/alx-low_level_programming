	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
	while (*(n2 + j) != '\0')
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
		else 
			val2 = *(n2 + j) - '0';
		if (t_tot >= 10)
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return(0)
	}
