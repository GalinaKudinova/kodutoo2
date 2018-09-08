#include <QCoreApplication>
#include "iostream"
#include "string"
using namespace std ;


int main()
{
    cout << "Hello user \n";



        cout <<"Enter triangle sides: \n";

        unsigned short int a,b,c;

        cin >>a>>b>>c;

        if(a >= b + c || b >= a + c || c >= b + a ) // неравенство треугольника
        {
            // это  не треугольник
            cout <<"Not a triangle\n";

        }
        if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == b*b+a*a)
        {
            //прямоугольный
            cout << "Rectangular triangle\n";

        }
        if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > b*b+a*a)
        {
            //тупоугольный
            cout <<"  Obtuse triangle\n";

        }
        if (a*a <  b*b+c*c || b*b < a*a+c*c || c*c < b*b+a*a)
        {
            //остроугольный
            cout <<"Acutangular triangle\n";

        }
        if (a==b==c)
        {
            //равностороний
            cout << "Equilateral triangle\n" ;
        }
        if (a==b & a!=c || a==c & a!=b || b==a & b!=c || b==c & b!=a || c==a & c!=b || c==b & c!=a)
        {
             // равнобедренный
            cout << "Isosceles triangle \n ";

        }
        if (a!=b!=c)
        {
            // разносторонний
            cout << "versatile triangle \n " ;
        }


        return 0;

}
