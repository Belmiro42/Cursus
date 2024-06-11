**TODO**
        - Revise Notes

**NOTES**
	AVAILABLE FUCTIONS
		◦write
		◦ft_printf
		◦signal
			#include <signal.h>
			typedef void (*sighandler_t)(int);
			sighandler_t signal(int signum, sighandler_t handler);
		◦sigemptyset
		◦sigaddset
		◦sigaction
		◦kill
		◦getpid     
		◦malloc
		◦free
		◦pause
		◦sleep
		◦usleep     
		◦exit



	
NEW STUFF

struct sigaction {
    void (*sa_handler)(int);            // Pointer to a signal-catching function or SIG_IGN or SIG_DFL
    void (*sa_sigaction)(int, siginfo_t *, void *); // Pointer to a signal-catching function with three arguments
    sigset_t sa_mask;                   // Set of signals to be blocked during the execution of the signal-catching function
    int sa_flags;                       // Special flags to modify behavior
    void (*sa_restorer)(void);          // Pointer to a function that restores the signal context
};

sigaction
		#include <signal.h>

		int sigaction(	
						int signum, 
						const struct sigaction *_Nullable restrict act,
						struct sigaction *_Nullable restrict oldact
					);


EXIT_SUCCESS
		A way to indicate succe


|=

1 << bit_itr


getpid   
		getpid() returns the process ID (PID) of the calling process.
		(This is often used by routines that generate unique temporary
		filenames.)

signal
		#include <signal.h>
		typedef void (*sighandler_t)(int);
		sighandler_t signal(int signum, sighandler_t handler);

sigemptyset

sigaddset


kill
  

pause

sleep

usleep 
