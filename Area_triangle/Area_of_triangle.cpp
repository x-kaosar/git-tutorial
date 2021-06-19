#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    double base, height, area;
    cout<<"Enter your Base : ";
    cin >>base;

    cout<<"Enter your Height: ";
    cin >>height;

    area = (double)1/2 * base * height;

    cout<<"Area Of Triangle: " <<area;

    getch();
}
