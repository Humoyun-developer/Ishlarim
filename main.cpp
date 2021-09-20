//By Humoyun developer 16.09.2021 20.40
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a=8.5;
    float b=7.4;
    double c,d;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;

    cout << "a= " << floor(a)<< endl;
    /* floor funksiyasi vazifasi berilgan songa
    eng yaqin bo'lgan butun sonni qaytaradi */
    cout << "b= " << floor(b)<<endl;

    cout << "a= " << ceil(a)<< endl;
    cout << "b= " << ceil(b)<< endl;// ceil eng yaqin katta butun songa yaxlitlaydi

    cout << "a= " << trunc(a)<< endl;
    cout << "b= " << trunc(b)<< endl;// kasrni tashlavorib butunni oladi eng yaqin

    cin>> c;
    cin>> d;
    cout << "c= " << round(c)<< endl;
    cout << "d= " << round(d)<< endl; //yaxlitlaydi qoida bo'yicha

    return 0;
}
