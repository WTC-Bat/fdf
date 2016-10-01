#include "fdf.h"

void	free_instance(t_instance *instance)
{
	ft_strdel(&instance->map_file);
}

int		str_is_numeric(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (ft_isdigit(str[cnt]) == 0)
			return (0);
	}
	return (1);
}
