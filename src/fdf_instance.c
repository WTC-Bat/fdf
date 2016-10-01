#include "fdf.h"

t_instance	initialize_instance(char **argv)
{
	t_instance	*instance;
	int			scnt;

	instance = (struct s_instance *)malloc(sizeof(t_instance));
	instance->win_w = DEF_WIN_W;
	instance->win_h = DEF_WIN_H;
	scnt = 0;
	while (argv[scnt] != NULL)
	{
		if (ft_strequ(argv[scnt], "-w") == 1)
		{
			if (str_is_numeric(argv[scnt + 1]) == 1)
				instance->win_w = ft_atoi(argv[scnt + 1]);
		}
		else if (ft_strequ(argv[scnt], "-h") == 1)
		{
			if (str_is_numeric(argv[scnt + 1]) == 1)
				instance->win_h = ft_atoi(argv[scnt + 1]);
		}
		scnt++;
	}
	return (instance);
}
