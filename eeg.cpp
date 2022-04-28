#include "eeg.h"


mycomp::mycomp(eeg q)
{
    eeg a, b;
    operator()(q, a);
    operator()(q,b);
}

