#include <iostream>
using namespace std;
// cosx without using math library
int factorial(int n);
double cos(double x, int n);
double pow(double a, int b);
int main()
{
    int n;
    double num;
    cout << "enter your number:" << endl;
    cin >> num;
    cout << "enter n:" << endl;
    cin >> n;
    cout << " cos of your number is: " << cos(num, n) << endl;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int factn = n * factorial(n - 1);
    return factn;
}
double pow(double a, int b)
{
    float p = 1;
    for (int i = 1; i <= b; i++)
    {
        p = p * a;
    }
    return p;
}
double cos(double x, int n)
{double cosine;
    for (int a = 2, b = 1; a < n + n + 1; a = a + 2, b++)
    {
     cosine = 1;
        cosine = cosine + pow(-1, b) * pow(x, a) / factorial(a);
        
    }
    return cosine;
}
