#include <stdio.h>
#include <math.h>
#include <memory>
#include <iostream>

#ifdef T_DOUBLE
#define DAT_TYPE double
#else
#define DAT_TYPE float
#endif

#define ARR_SIZE 10000000

int main()
{
    DAT_TYPE period = 0;
    DAT_TYPE sum = 0;
    std::unique_ptr<DAT_TYPE[]> sin_ar(new DAT_TYPE[ARR_SIZE]);

    for (long int i = 0; i < ARR_SIZE; i++)
    {
        sin_ar.get()[i] = sin(period);
        period += 2 * M_PI / ARR_SIZE;
        
        sum += sin_ar.get()[i];
    }
    
    std::cout << sum << std::endl;

    return 0;
}
