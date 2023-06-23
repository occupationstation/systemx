//functions that interact with the operating system
//uses specific implementations as available
//planned future expandability, allowing users to implement functions for exotic systems.

#include "platform.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include "posix/posix.h"

int sysxidentify() {
	//just going to return xnu for now. I want to get in some basic error handling in, among other things.
	return xnu;
}

void sysxloadavg(double loadavg[3]) {
	int hostType = sysxidentify();
	switch (hostType) {
		case xnu:
		//switch case calls necessary code, and if needed, processes anything else related to the case
			posix_loadavg(loadavg);
		break;
	}
}

