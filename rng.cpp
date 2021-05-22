#include "function_file.h"
#include <ctime>
#include <random>

using namespace std;

int RNG(int a, int b)
{
    int sd = time(NULL);
    mt19937 gen(sd);
    uniform_int_distribution<> rng(a,b);
    return rng(gen);
}
