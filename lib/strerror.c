#include	<stdio.h>

#ifndef LINUX
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
