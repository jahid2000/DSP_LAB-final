#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define EP 0.01

class NRMethod{
        public:
        double x, h;

        double functionValue()
        {
                return x*x*x - x*x + 2;
        }

        double derviFunctionValue()
        {
                return 3 * x * x - 2*x;
        }

        void findRoot()
        {
                h = functionValue() / derviFunctionValue();
                while(abs(h) > EP)
                {
                        h = functionValue() / derviFunctionValue();
                        x = x-h;
                }

                cout << "The value of root is " << x << endl;
        }


};

int main()
{
        double x0 = 20;
        NRMethod nrmethod;
        nrmethod.x = x0;
        nrmethod.findRoot();


        return 0;
}


