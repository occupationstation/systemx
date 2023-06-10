//This object provides functions that perform standard POSIX operations.
#include "platform.h"
#include <stdlib.h>
#include <stdio.h>

	double* sysxloadavg() {
		static double loadavg[3];
		int result = getloadavg(loadavg, 3);
		if (result == -1) {
			printf("Error retrieving load average");
			exit(EXIT_FAILURE);
		}

		return loadavg;
	}

	int sysxuptime() {
		
	}

	int sysxpasswd() {
		system("passwd");
		return 0;
	}

