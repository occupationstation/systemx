
void* getStat(int category);

enum statCategory {
	NONE,
	CPU,
	MEMORY
};

struct StatInfo {
    double* uptime;
    char* memoryUse;
    double* loadAvg;
    char* swapUse;
};
