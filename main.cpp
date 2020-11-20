#include <QCoreApplication>
#include <iostream>
using namespace std;

double my_pow(double num, int deg)
{
double result = 1;
   while(deg) {
       if (deg % 2 == 0) {
           deg /= 2;
           num *= num;
       }
       else {
           deg--;
           result *= num;
       }
   }

   return result;
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

