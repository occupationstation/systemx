#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "functionobj.h"
#include "../platformobj/platform.h"

enum statCategory;
struct StatInfo;

//Everything is a dry run right now.
void* getStat(int category) {
	if (category == NONE) {
		struct StatInfo* stat = malloc(sizeof(struct StatInfo));
		if (stat == NULL) {
		        // Handle memory allocation error
		        // You can return an error code or take appropriate action
		    return NULL;
		}
		sysxloadavg(stat->loadAvg);
		return stat;
	}
	if (category == CPU) {
		
	}
	if (category == MEMORY) {
		
	}
}
