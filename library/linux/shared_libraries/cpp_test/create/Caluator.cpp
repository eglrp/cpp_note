
#include "Caluator.h"

Caluator::Caluator()
{
}
Caluator::~Caluator()
{
}

template <typename T>
T add(T a, T b)
{
    return (a + b);
}

template <typename T>
T subtract(T a, T b)
{
    return (a - b);
}

template <typename T>
T multiply(T a, T b)
{
    return (a * b);
}

template <typename T>
T divide(T a, T b)
{
    return (a / b);
}