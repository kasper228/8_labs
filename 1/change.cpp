#include <iostream>
#include <algorithm>
#include "change.hpp"

using namespace std;

namespace test
{
    void sortMtrx(int **mass, int a, int b)
    {
        for (int i = 0; i < a; i++)
        {
            sort(mass[i], mass[i]+5, std::greater<int>());
        }
    }
}