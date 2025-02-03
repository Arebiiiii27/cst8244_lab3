#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

volatile sig_atomic_t usr1Happened = 0; // Initialize to false (0)
