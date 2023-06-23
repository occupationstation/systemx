//This object provides functions that perform standard POSIX operations.
#include "../platform.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>

	void posix_loadavg(double loadavg[3]) {
		
		int result = getloadavg(loadavg, 3);
		if (result == -1) {
			printf("Error retrieving load average");
			exit(EXIT_FAILURE);
		}

		
	}

	int posix_passwd() {
		system("passwd");
		return 0;
	}

