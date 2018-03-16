#include "num_caracs.h"

int num_caracs(char *string)
{
	int num;
	
	for(num=0; string[num]; num++);
	
	return num;
}
