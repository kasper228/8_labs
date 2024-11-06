#include <iostream>
#include "read.hpp"

using namespace std;

namespace test
{
    void printMtrx(int mass[5][5], int a, int b)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout<<mass[i][j]<<"  ";
            }
            cout<<endl;
        }
    }

    bool findMtrx(int **mass, int a, int b)
    {
        int max;
        int c;
        int d;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if(i == 0 && j == 0)
                {
                    max = mass[i][j];
                    c = i;
                    d = j;
                }
                else if (mass[i][j] > max)
                {
                    max = mass[i][j];
                    c = i;
                    d = j;
                } 
            } 
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (mass[i][j] == max && (i != c || j != d))
                {
                    return true;
                }
            }
        }
        return false;
    }
}