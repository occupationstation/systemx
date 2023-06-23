//Declarations for common System interface functions

//Function definitions, for each platform are in the related object file. Conditionally inserted with pre-processor definitions.

enum platform {
	unknown,
	bsd,
	linux,
	xnu,
	win32,
	posix,
	exotic
};

//loadavg function declaration
void sysxloadavg(double loadavg[3]);
void sysxuptime(int uptime);
int sysxpasswd();
int sysxidentify();
