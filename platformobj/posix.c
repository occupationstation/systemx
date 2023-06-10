//This object provides functions that perform standard POSIX operations.
#include "platform.h"
#include <stdlib.h>
#include <stdio.h>

	void sysxloadavg(double loadavg[3]) {
		
		int result = getloadavg(loadavg, 3);
		if (result == -1) {
			printf("Error retrieving load average");
			exit(EXIT_FAILURE);
		}

		
	}

	void sysxuptime(int uptime) {
		
	}

	int sysxpasswd() {
		system("passwd");
		return 0;
	}

