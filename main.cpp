#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
    double a;
    double b;
    double c;
    double delta;
    double d;
    double xw;
    double yw;
    double x1;
    double x2;

    cout<<"Podaj kolejno wspolczynniki a,b,c"<<endl;

    cin>>a;

    cin>>b;

    cin>>c;

    if(a!=0){

        delta = b * b - ( 4 * a * c);
        d = sqrt(delta);
        cout<<"DELTA: "<<delta<<endl;

        if(d>=0){
            xw = (-b)/(2*a);
            yw = -delta/(4*a);

            x1 = (-b - d)/(2*a);
            x2 = (-b + d)/(2*a);

            cout<<"Wykonane obliczenia: "<<endl;

            cout<<"DELTA: "<<delta<<endl;
            cout<<"Xw: "<<xw<<endl;
            cout<<"Yw: "<<yw<<endl;
            cout<<"X1: "<<x1<<endl;
            cout<<"X2: "<<x2<<endl;
        }
    }
    return 0;
}
