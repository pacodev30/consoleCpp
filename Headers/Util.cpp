#include "Util.h";
#include "../Util.h"

int Util::convertMinutes(const int j, const int h, const int mn)
{
	return (j * 24 * 60 + h * 60 + mn);
}

