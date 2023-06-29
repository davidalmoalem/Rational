#include "Rational.h"
#include <iostream>
using namespace std;

void imthebigone() {
    int x1;
    int y1;
    cout << "enter your first rational";
    cin >> x1 >> y1;
    cout << "enter your secend rational";
    int x2;
    int y2;
    cin >> x2 >> y2;
    Rational one(x1, y1);
    Rational two(x2, y2);
    double one1 = one.getNumerator() / one.getDenominator();
    double two1 = two.getNumerator() / two.getDenominator();
    cout << "The bigi one is";
    if (one1 > two1) {
        one.imprintingnow();
    }else{
        two.imprintingnow();
    }
}

int main() {
    Rational r1;
    r1.setNumerator(1);
    r1.setDenominator(3);
    cout << r1.getNumerator() << "/" << r1.getDenominator() << endl;

    Rational r2(3, 9);
    r2.imprintingnow();
    r2.reduceFraction();
    r2.imprintingnow();

    imthebigone();
}
