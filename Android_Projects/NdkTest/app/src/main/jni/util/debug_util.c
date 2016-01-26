#include <stdbool.h>
#include "debug_util.h"

void waitForDebugger()
{
#ifdef DEBUG_WAIT
    volatile bool run = false;
#else
    volatile bool run = true;
#endif

    int i = 0;
    while (!run)
    {
        i++;
    }
}