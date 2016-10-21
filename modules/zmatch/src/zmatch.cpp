#include "zmatrix/zmatch/zmatch.h"


/**
 * @berif
 */
int average(int x, int y)
{
	return (x & y) + ((x ^ y) >> 1);
}
