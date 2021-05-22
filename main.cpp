#include "var_file.h"
#include "function_file.h"
#include <iostream>

int main()
{
    int i,j;
    init_array();

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cout<<S[i][j]<<" ";
        }
        cout<<endl;
    }
}
