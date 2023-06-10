
void* getStat(int category);

enum statCategory {
	NONE,
	CPU,
	MEMORY
};

struct StatInfo {
    int uptime;
    char* memoryUse;
    double loadAvg[3];
    char* swapUse;
};
