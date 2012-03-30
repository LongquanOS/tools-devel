#include "stdio.h"

typedef struct 
{
	char *info;
	char *show_ps;
	char *show_name;
	char *show_phone;
	
} menulist;


int main()
{
int i;
int j;

char *list[];

*list="***************************\n";

printf("%s\n",list);
	

	while(1)

	{
		int i;
		int j;
	
		printf(" >> %d\t%d\t\n",i,j);
		
		scanf("%d %d",&i,&j);
		if(i == 0 && j ==0)
			break;
		else
			continue;

	}
}
