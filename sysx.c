//This is prototype software! Is not intended for use by any party expecting anything that works!

//sysx.c is a command line utility built to provide systemx functions. sysx is not required for all instances of systemx.
//It may be provided with applications that depend on systemx.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "functionobj/functionobj.h"
#include "platformobj/platform.h"

#define VERSION "PRE ALPHA 0.0"



int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Version: %s\n", VERSION);
        printf("Usage: sysx <command> <args>\n");
        return 1;
    }
    else if (strcmp(argv[1], "stat") == 0) {
// Call your "getStat" function with the remaining arguments
        struct StatInfo* result = getStat(NONE);
        printf("Just a load average for now: %.2f %.2f %.2f \n", result->loadAvg[0], result->loadAvg[1], result->loadAvg[2]);
        return 0;
    }
    else if (strcmp(argv[1], "passwd") == 0) {
    // rough implementation for proof of concept pre-alpha 1. Only going for POSIX compatibility for now.
    // implementations like this will eventually be setup like the function 'sysxloadavg()' delared in platform.h
		system("passwd");
		return 0;
	}
    else {
        printf("Invalid option: %s\n", argv[1]);
        return 1;
    }
}


