#include <iostream>

#include "Triangle.h"

using namespace std;

void Triangle::ShowArea() const
{
    cout << "Square of triangle: " << 0.5 * m_value1 * m_value2 << endl;
}