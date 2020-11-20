#include <QCoreApplication>
#include <iostream>
using namespace std;

double my_pow(double x, unsigned int N)
{
    double ans = 1;
    for(int i = 1; i<=N; i++)
    {
        ans *= x;
    }
    return ans;
}

int main()
{
   double r, x;
   int N;
   cout << "Enter power and number:" << endl;
   cin >> N >> x;
   r = my_pow(x,N);
   cout << r << endl;
}

