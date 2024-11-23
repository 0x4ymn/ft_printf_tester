#ifndef LIBPRINTFTEST_H
# define LIBPRINTFTEST_H

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "../libft_printf.h"

/* Color MSG*/
# define NOCOLORS "\033[0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[0;93m"
# define GOLD "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"

#define LINE_LENGTH 2048

/*
 * FONCTION ft_fic
 */
int sortfic1(void);
int sortfic2(void);
int comptfic(void);

#endif
