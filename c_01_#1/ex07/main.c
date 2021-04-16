#include <stdio.h>
void ft_rev_int_tab(int *tab, int size);

int main(void) 
{	
	int *tab;
	int table[] = {1,2,3,4};
	int size;
	int n;
	tab = table;
	size= 4;
	n=0;
	
	while(n<size)
	{
		printf("%d",tab[n]);
		if(n<(size-1))
			printf(", ");
		n++;
	}
	printf(" invertido = ");
	ft_rev_int_tab(tab,size);
	n=0;
	while(n<size)
	{
		printf("%d",tab[n]);
		if(n<(size-1))
			printf(", ");
		n++;
	}

	printf("\n");

	return(0);
}