#include "var_file.h"
#include "function_file.h"

using namespace std;

void init_array(void)
{
    int i,j;
    int lim_a = 0, lim_b = 360;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            S[i][j] = RNG(lim_a,lim_b);
        }
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            arr_W[i][j] = compute_W(i,j);
        }
    }

}
