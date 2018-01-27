#include <stdio.h>
#include <stdlib.h>
int main (int argc, char ** argv)
{
	int year;
	if (argc<2) {
 		fprintf (stderr, "child: too few arguments\n"); //поток вывода ошибок
		return 2;
	}
	year = atoi (argv[1]); //string в int
	if (year <= 0)   return 2;
	if (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0))			return 1;
else	 
return 0;
	return 0;
}
