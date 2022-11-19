#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define EP 0.01


class SecantMethod{
        public:
        double a, b, c;

        double functionValue(double x)
        {
                return pow(x, 3) + x - 1;
        }


        void findRoot()
        {
                do
                {
                        a = b;
                        b = c;
                        c = b -  (b-a) / (functionValue(b) - functionValue(a))  * functionValue(b);

                        if(c==0)
                        {
                                cout << "The root is " << c << endl;
                                return;
                        }
                }while(abs(c -b ) > EP);

              cout << "The root is  " << c << endl;
        }
};

int main()
{
        double a = 0, b = 1;
        SecantMethod smethod;
        smethod. a= a;
        smethod.b = b;
        smethod.findRoot();


        return 0;
}


