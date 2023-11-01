#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int* Create(int n, const int Low, const int High, int* a = 0, int i = 0) {
    if (a == 0)
    {
        a = new int[n];
    }

    if (i < n)
    {
        a[i] = Low + rand() % (High - Low + 1);
        Create(n, Low, High, a, i + 1);
    }

    return a;
}


template<typename T>
T* CreateU(T n, const T Low, const T High)
{
    T* a = new T[n];
    for (T i = 0; i < n; i++)
    {
        a[i] = Low + rand() % (High - Low + 1);
    }
    return a;
}

void Print(int* a, int n, int i = 0)
{
    if (i < n)
    {
        cout << setw(5) << a[i];
        Print(a, n, i + 1);
    }
    else 
    {
        cout << endl;
    }
}

template<typename T>
void PrintU( T * a, T n, T i = 0)
{
    if (i < n)
    {
        cout << setw(5) << a[i];
        PrintU(a, n, i + 1);
    }
    else
    {
        cout << endl;
    }
}

template<typename T>
T SumU(T * a, const T size, T i, T S)
{
    if (a[i] % 2 == 0)
        S += a[i];
    if (i < size - 1)
        return SumU(a, size, i + 1, S);
    else
        return S;
}

int Sum(int* a, const int size, int i, int S)
{
    if (a[i] % 2 == 0)
        S += a[i];
    if (i < size - 1)
        return Sum(a, size, i + 1, S);
    else
        return S;
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int High = 15;
    int Low = -15;
    int* a = Create(n, Low, High);
    int* b = CreateU(n, Low, High);
    Print(a, n);
    PrintU(b, n);
    cout << "Sum  'a'= " << Sum(a, n, 0, 0) << endl;
    cout << "SumU  'b'= " << SumU(b, n, 0, 0) << endl;
    delete[] a;
    delete[] b;
    return 0;
}
