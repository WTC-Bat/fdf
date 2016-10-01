#include "fdf.h"

void		print_file()
{

}

int			main(int argc, char **argv)
{
	t_instance	*instance;

	if (argc < 2)
	{
		ft_putendl_fd("Error: fdf expects a file as a parameter.", 2);
		return (1);
	}
	instance = initialize_instance(argv);
	// instance = (struct s_instance *)malloc(sizeof(t_instance));
	//// if no win width and height specified
	// instance->win_w = DEF_WIN_W;
	// instance->win_h = DEF_WIN_H;
	// instance->map_file = ft_strdup(argv[1]);
	free_instance(instance);
	return (0);
}
