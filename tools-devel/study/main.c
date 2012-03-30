#include "stdio.h"

typedef struct
{
	int name;
	int phone; 
} sequenlist;


void add_info(int *name, int *phone, sequenlist *list )
{
  while(*name != 0 && *phone != 0)
  {
    list->name=(*name);
    list->phone=(*phone);
  }
}

int main()
{

sequenlist *list;
int i;

int *name;
int *phone;

int a=10;
int b=11;

name=&a;
phone=&b;


add_info(&a, &b, list);

printf("%d",list->name);
printf("%d",list->phone);

}
