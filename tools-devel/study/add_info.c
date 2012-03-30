#include "format.h"

void add_info(char *name, char *phone, sequenlist *list )
{
  while(*name != "" && *phone != "")
  {
    list->name=(*name);
    list->phone=(*phone);
  }
}

