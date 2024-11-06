#include <iostream>
#include "Util.h"

int main()
{
    const int result = Util::convertMinutes(2, 4, 30);
    std::cout << result << " mn" << std::endl;

    return 0;
}
