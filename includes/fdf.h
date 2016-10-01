#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include "mlx.h"

# define DEF_WIN_W 800
# define DEF_WIN_H 600

typedef struct		s_point
{
	float			x;
	float			y;
	float			z;
}					t_point;

typedef struct		s_instance
{
	unsigned int	win_w;
	unsigned int	win_h;
	char			*map_file;
}					t_instance;

/*
**	fdf_draw.c
*/
void				draw_line(t_point a, t_point b);

/*
**	fdf_funcs.c
*/
void				free_instance(t_instance *instance);
int					str_is_numeric(char *str);

/*
**	fdf_instance.c
*/
t_instance			initialize_instance(char **argv)

#endif
