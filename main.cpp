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
            cout << "Right triangle\n";

        }
        if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > b*b+a*a)
        {
            //тупоугольный
            cout <<"  Obtuse triangle\n";

        }
        if (a*a <  b*b+c*c || b*b < a*a+c*c || c*c < b*b+a*a)
        {
            //остроугольный
            cout <<"Acute triangle\n";

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
            cout << "Scalene triangle \n " ;
        }
        // формула Герона
        double S; //площадь
        double P, p1; // периметр и полупериметр
        double G ;// под корнем

        P= a+b+c ;
        p1= P/2;
        G= p1*(p1-a)*(p1-b)*(p1-c);
        S=sqrt(G);
        cout << "Heron's Formula: " << S;


        return 0;

}
