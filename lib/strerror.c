#include	<stdio.h>

#if defined(__linux__)
	extern __const char	*__const sys_errlist[];
	extern int	sys_nerr;
#elif defined(__APPLE__)
	extern __const char	*__const sys_errlist[];
	extern __const int	sys_nerr;
#endif

char *
strerror(int error)
{
	static char	mesg[30];

	if (error >= 0 && error <= sys_nerr)
		return((char *)sys_errlist[error]);

	sprintf(mesg, "Unknown error (%d)", error);
	return(mesg);
}
