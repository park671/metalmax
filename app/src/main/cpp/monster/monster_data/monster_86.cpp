#include "monster_86.h"
unsigned char monster_86[112][80]={
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,},
{35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,},
{35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,},
{35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,},
{35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,},
{35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,},
{35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,},
{35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,},
{35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,},
{35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,},
{35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,},
{35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,},
{35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,},
{35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,},
{35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,},
{35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,},
{35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,},
{35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,},
{35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,},
{35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,},
{35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,},
{35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,},
{35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,},
{35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,},
{35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,},
{35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,35,35,35,35,44,35,44,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,48,48,33,35,35,35,48,48,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,48,48,33,35,48,35,48,35,33,33,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,48,33,33,35,33,35,48,35,35,33,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,48,33,33,35,35,35,35,33,33,48,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,33,35,33,35,35,35,35,48,33,35,35,48,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,48,35,48,35,35,35,33,35,35,33,33,35,35,33,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
{35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,},
};
