
struct StatInfo getStat(char **args, int num_args);

struct StatInfo {
    char* uptime;
    char* memoryUse;
    char* loadAvg;
    char* swapUse;
};
