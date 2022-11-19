#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define EP 0.01


class LeastSquare
{
public:
    int n;
    double calculateB(int x[], int y[], int n)
    {
        int sx = accumulate(x, x+n, 0);

        int sy = accumulate(y, y+n, 0);

        int sxsy = 0;
        int sx2 = 0;
        for(int i=0; i<n; i++)
        {
            sxsy += x[i] * y[i];
            sx2 += x[i] * x[i];
        }

        double b = (double)(n * sxsy - sx * sy) /
                   (n * sx2 - sx * sx);

        return b;
    }


    void leastRegLine( int X[], int Y[], int n)
    {

        double b = calculateB(X, Y, n);

        int sx = accumulate(X, X + n, 0);
        int sy = accumulate(Y, Y + n, 0);

        double a = ((sy) - (b * sx))/n;

        cout << ("Regression line:") << endl;
        cout << ("Y = ");
        printf("%.3f + ", a);
        printf("%.3f *X", b);
    }

};


int main()
{

    LeastSquare ls;
    int X[] = { 95, 85, 80, 70, 60 };
    int Y[] = { 90, 80, 70, 65, 60 };

    int n = sizeof(X) / sizeof(X[0]);

    ls.leastRegLine(X, Y, n);
    return 0;
}


