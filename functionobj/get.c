#include <stdio.h>
#include <string.h>


#include "functionobj.h"
#include "../platformobj/platform.h"

//Everything is a dry run right now.
struct StatInfo getStat(char **args, int num_args) {
   if (num_args > 0) {printf("No advanced data available now!\n");}
   if (num_args == 0) {
   		double* loadavg = NULL;
   		loadavg = sysxloadavg();
   		printf("Load Average: %.2f %.2f %.2f\n", loadavg[0], loadavg[1], loadavg[2]);
   }   
}
