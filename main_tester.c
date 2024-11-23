#include "libprintftest.h"

int	main (void)
{
	printf("/******************************\\\n");
	printf("|                              |\n");
	printf("|  ft_printf Tester Mandatory  |\n");
	printf("|                              |\n");
	printf("\\******************************/\n");
		
	/*
	 * Variable de stockage des resultat pour la compartaison
	 */		
	int ic = 0;
	int in = 0;
	int res = 0;
	int restot = 26;
	
	
	
	/*
	 * TEST CHAR = 3
	 */
	printf("\n_________________________________\n");
	printf("\n\t%sTEST %%c%s\n", YELLOW, NOCOLORS);
	printf("_________________________________\n\n");
	
	// Test 1
	sortfic1();
	ic = ft_printf("c = %c\n", '\0');
	sortfic2();
	in = printf("c = %c\n", '\0');
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
    // Test 2
	sortfic1();
	ic = ft_printf("c = %c\n", 'a');
	sortfic2();
	in = printf("c = %c\n", 'a');
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
    // Test 2
	sortfic1();
	ic = ft_printf("c = %c %c %c \n", 'a', 'b', 'c');
	sortfic2();
	in = printf("c = %c %c %c \n", 'a', 'b', 'c');
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
    
	
	
	/*
	 * TEST DIGIT = 6
	 */
	printf("\n\n_________________________________\n");
	printf("\n\t%sTEST %%d%s\n", YELLOW, NOCOLORS);
	printf("_________________________________\n\n");
	
	// Test 1
	sortfic1();
	ic = ft_printf("d = %d\n", 42);
	sortfic2();
	in = printf("d = %d\n", 42);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
	
	// Test 2
	sortfic1();
	ic = ft_printf("d = %d\n", -42);
	sortfic2();
	in = printf("d = %d\n", -42);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
	// Test 3
	sortfic1();
	ic = ft_printf("d = %d\n", 0);
	sortfic2();
	in = printf("d = %d\n", 0);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
	// Test 4
	sortfic1();
	ic = ft_printf("d = %d\n", INT_MAX);
	sortfic2();
	in = printf("d = %d\n", INT_MAX);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
	// Test 5
	sortfic1();
	ic = ft_printf("d = %d\n", INT_MIN);
	sortfic2();
	in = printf("d = %d\n", INT_MIN);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s", GREEN, NOCOLORS) : printf("%sKO%s", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s", RED, NOCOLORS);
    }
    
	
	
	
	/*
	 * TEST STRING = 4
	 */
	printf("\n\n_________________________________\n");
	printf("\n\t%sTEST %%s%s\n", YELLOW, NOCOLORS);
	printf("_________________________________\n\n");
	
	// Test 1
	sortfic1();
	ic = ft_printf("s = %s\n", "\0");
	sortfic2();
	in = printf("s = %s\n", "\0");
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
	// Test 2
	sortfic1();
	ic = ft_printf("s = %s\n", "test");
	sortfic2();
	in = printf("s = %s\n", "test");
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
	// Test 3
	sortfic1();
	ic = ft_printf("s = %s %s %s\n", "test1", "test2", "test3");
	sortfic2();
	in = printf("s = %s %s %s\n", "test1", "test2", "test3");
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
	// Test 4
	char *snull = NULL;
	sortfic1();
	ic = ft_printf("s = %s\n", snull);
	sortfic2();
	in = printf("s = %s\n", snull);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s", GREEN, NOCOLORS) : printf("%sKO%s", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s", RED, NOCOLORS);
    }

	

	
	/*
	 * TEST HEXA = 6
	 */
	printf("\n\n_________________________________\n");
	printf("\n\t%sTEST %%x et %%X%s\n", YELLOW, NOCOLORS);
	printf("_________________________________\n\n");
	
	// Test 1
	sortfic1();
	ic = ft_printf("x 42 = %x\n", 42);
	sortfic2();
	in = printf("x 42 = %x\n", 42);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }

	// Test 2
	sortfic1();
	ic = ft_printf("x -42 = %x\n", -42);
	sortfic2();
	in = printf("x -42 = %x\n", -42);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
	// Test 3
	sortfic1();
	ic = ft_printf("x 'f' = %x\n", 'f');
	sortfic2();
	in = printf("x 'f' = %x\n", 'f');
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
	// Test 4
	sortfic1();
	ic = ft_printf("X 42 = %X\n", 42);
	sortfic2();
	in = printf("X 42 = %X\n", 42);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }

	// Test 5
	sortfic1();
	ic = ft_printf("X -42 = %X\n", -42);
	sortfic2();
	in = printf("X -42 = %X\n", -42);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
	// Test 6
	sortfic1();
	ic = ft_printf("X 'f' = %X\n", 'f');
	sortfic2();
	in = printf("X 'f' = %X\n", 'f');
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s", RED, NOCOLORS);
    }

	

	
	/*
	 * TEST UNSIGNED = 2
	 */
	printf("\n\n_________________________________\n");
	printf("\n\t%sTEST %%u%s\n", YELLOW, NOCOLORS);
	printf("_________________________________\n\n");
	
	// Test 1
	unsigned int nb = 42;
	sortfic1();
	ic = ft_printf("u = %u\n", nb);
	sortfic2();
	in = printf("u = %u\n", nb);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
	// Test 2
	unsigned int nbneg = -42;
	sortfic1();
	ic = ft_printf("u = %u\n", nbneg);
	sortfic2();
	in = printf("u = %u\n", nbneg);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s", GREEN, NOCOLORS) : printf("%sKO%s", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s", RED, NOCOLORS);
    }
    
	
	
	
	/*
	 * TEST POINTER = 3
	 */
	printf("\n\n_________________________________\n");
	printf("\n\t%sTEST %%p%s\n", YELLOW, NOCOLORS);
	printf("_________________________________\n\n");
	
	// Test 1
	char *p1 = "Pointeur test 1";
	sortfic1();
	ic = ft_printf("p = %p\n", p1);
	sortfic2();
	in = printf("p = %p\n", p1);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
  
	// Test 2
	char *p2 = NULL;
	sortfic1();
	ic = ft_printf("p = %p\n", p2);
	sortfic2();
	in = printf("p = %p\n", p2);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
	// Test 3
	char *p3 = "Pointeur test 3 + 2";
	sortfic1();
	ic = ft_printf("p = %p\n", p3 + 2);
	sortfic2();
	in = printf("p = %p\n", p3 + 2);
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s", GREEN, NOCOLORS) : printf("%sKO%s", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s", RED, NOCOLORS);
    }
	
	
	
	
	/*
	 * TEST %% = 2
	 */
	printf("\n_________________________________\n");
	printf("\n\t%sTEST %%%%%s\n", YELLOW, NOCOLORS);
	printf("_________________________________\n\n");
	
	// Test 1
	sortfic1();
	ic = ft_printf("u = %%\n");
	sortfic2();
	in = printf("u = %%\n");
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s - ", GREEN, NOCOLORS) : printf("%sKO%s - ", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s - ", RED, NOCOLORS);
    }
    
	// Test 2
	sortfic1();
	ic = ft_printf("u = %% %% %%\n");
	sortfic2();
	in = printf("u = %% %% %%\n");
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s", GREEN, NOCOLORS) : printf("%sKO%s", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s", RED, NOCOLORS);
    }
	
	
	
	
	/*
	 * TEST COMPILER = 2
	 */
	printf("\n_________________________________\n");
	printf("\n\t%sTEST Mixed%s\n", YELLOW, NOCOLORS);
	printf("_________________________________\n\n");
	
	char *t22 = "Hello";
	unsigned int t23 = 42;
	int t24 = 42;
	
	// Test 1
	sortfic1();
	ic = ft_printf("Mixed = %s on teste %% %% %% nb unsigned %u = hexa M %X et hexa m %x\n", t22, t23, t24, t24);	
	sortfic2();
	in = printf("Mixed = %s on teste %% %% %% nb unsigned %u = hexa M %X et hexa m %x\n", t22, t23, t24, t24);	
	fflush(stdout);
	freopen("/dev/tty", "a", stdout);
    if (ic == in) {
		comptfic() == 0 ? printf("%sOK%s", GREEN, NOCOLORS) : printf("%sKO%s", RED, NOCOLORS);
        if(comptfic() == 0)
        	res++;
    } else {
        printf("%sKO%s", RED, NOCOLORS);
    }





	
	printf("\n\n\n/**************************************************************\\\n");
	printf("|%s	  _/|       |\\_                                        %s|\n", CYAN, NOCOLORS);
	printf("|%s	 /  |       |  \\                                       %s|\n", CYAN, NOCOLORS);
	printf("|%s	|    \\     /    |                                      %s|\n", CYAN, NOCOLORS);
	printf("|%s	|  \\ /     \\ /  |                                      %s|\n", CYAN, NOCOLORS);
	printf("|%s	| \\  |     |  / |                                      %s|\n", CYAN, NOCOLORS);
	printf("|%s	| \\ _\\_/^\\_/_ / |                                      %s|\n", CYAN, NOCOLORS);
	printf("|%s	|    --\\//--    |                                      %s|\n", CYAN, NOCOLORS);
	printf("|%s	 \\_  \\     /  _/                                       %s|\n", CYAN, NOCOLORS);
	printf("|%s	  \\__  |  __/                                          %s|\n", CYAN, NOCOLORS);
	printf("|%s	      \\ _ /                                            %s|\n", CYAN, NOCOLORS);
	printf("|%s	     _/   \\                                            %s|\n", CYAN, NOCOLORS);
	printf("|%s	    / _/|\\_ \\   %sBy: phkevin <phkevin@42luxembourg.lu>  %s|\n", CYAN, YELLOW, NOCOLORS);
	printf("|%s	     /  |  \\    %shttps://github.com/phoenixnoirdev      %s|\n", CYAN, YELLOW, NOCOLORS);
	printf("|%s	      / v \\                                            %s|\n", CYAN, NOCOLORS);
	printf("|                                                              |\n");
	printf("|      ft_printf Tester                                        |\n");
	printf("|            FIN                                               |\n");
	printf("|                                                              |\n");
	printf("|**************************************************************|\n");
	printf("|                                                              |\n");
	printf("|");
	res == restot ? printf(" Test %sOK%s = %s%d %s/ %s%d %s", GREEN, NOCOLORS, YELLOW, res, NOCOLORS, YELLOW, restot, NOCOLORS) : printf(" Test %sKO%s = %s%d %s/ %s%d %s", RED, NOCOLORS, YELLOW, res, NOCOLORS, YELLOW, restot, NOCOLORS);
	printf("                                           |\n");
	printf("|                                                              |\n");
	printf("\\**************************************************************/\n\n");
	
	remove("tmp1.txt");
    remove("tmp2.txt");
    
	return (0);
}
