#include "var_file.h"
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

double deg_to_rad(int t)
{
    return (t * M_PI / 180);
}

double dot_product(int a, int b)
{
    double t = deg_to_rad(abs(a - b));
    double dot = cos(t);
    return dot;
}

double compute_W(int i, int j)
{
    double W = 0;
    if ((i+1)<5){
        W += (-2) * J_ex * dot_product(S[i][j],S[i+1][j]);
    }
    if ((i-1)>=0){
        W += (-2) * J_ex * dot_product(S[i][j],S[i-1][j]);
    }
    if ((j+1)<5){
        W += (-2) * J_ex * dot_product(S[i][j],S[i][j+1]);
    }
    if ((j-1)>=0){
        W += (-2) * J_ex * dot_product(S[i][j],S[i][j-1]);
    }
    return W;
}
