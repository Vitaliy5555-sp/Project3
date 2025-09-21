#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double x;  // вхідний параметр 
    double y;  // результат обчислення виразу 
    double A;  // проміжний результат - функціонально стала частина виразу 
    double B;  // проміжний результат - функціонально змінна частина виразу 
    
    cout << "x = ";
    cin >> x;

    A = x * x;

    // спосіб 1: розгалуження в скороченій формі 
    if (x <= -5)
        B = cos(exp(x)) / sin(exp(x));
    if (-5 <= x && x <= 0)
        B = 2 - pow(x, 3) / (fabs(x) + 1);
    if (x >=0)
        B = log(sqrt(fabs(x))) - pow(x, 2) / 2;

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;


    // спосіб 2: розгалуження в повній формі 
    if (x <= -5)
        B = cos(exp(x)) / sin(exp(x));
    else
        if (x >= 0)
            B = log(sqrt(fabs(x))) - pow(x, 2) / 2;
        else
            B = 2 - pow(x, 3) / (fabs(x) + 1);

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();

    y= (pow(x, 2) / (2.1 + sin(fabs(x)))) +
        ((x <= -5) ? (cos(exp(x)) / sin(exp(x))) :
            ((x > -5 && x < 0) ? (2 - pow(x, 3) / (fabs(x) + 1)) :
                (log(sqrt(fabs(x))) - pow(x, 2) / 2)));

    cout << "3) y = " << y << endl;


    return 0;
}