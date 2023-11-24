

static	int	process_str(va_list *ap, const char *format)
{
	int	return_val;
	int	add_val;
	int	iter;

	return_val = 0;
	iter = 0;
	while (format[iter])
	{
		if (format[iter] == '%' && format[iter + 1] == '%')
		{
			add_val = ft_putchar('%');
			iter += 1;
		}
		if (format[iter] == '%')
		{
			add_val = func_confirm(ap, format[iter + 1]);
			if (add_val == -1)
				return (-1);
			iter += 1;
		}
		else
			add_val = ft_putchar(format[iter]);
		return_val += add_val;
		iter++;
	}
	return (return_val);
}


/* 에라이
		if (format[iter] == '%' && format[iter + 1] != '%')
		{
			add_val = func_confirm(ap, format[iter + 1]);
			if (add_val == -1)
				return (-1);
			iter += 2;
		}
		add_val = ft_putchar(format[iter]);
		if (format[iter + 1] == '%')
			iter += 1;
		return_val += add_val;
		iter++;
*/


//%가 나오면 %이든 포맷이든 하나 건너뛰게 된다 == iter += 1 처리 
// => (둘의 공통점 두 가지, 하나 iter += 1, 둘 조건문이 하나 겹침)
//그리고 위처럼 건너뛰는 걸 챙겨주면 %%는 어쨋든 putchar('%')만 하면 되는거 아닌가?

//뭔가 기존에 iter + 1 == %경우 처리하고 coninue한걸 한두줄 줄이기가 된거자나? 그렇지 않나