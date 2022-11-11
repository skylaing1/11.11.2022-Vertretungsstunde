/*1) Notieren Sie, was das Programm macht.

2) Die Variablen haben die Namen a,b und o. Finden Sie bessere Variablennamen und ersetzen Sie sie.

3) Stellen Sie sich vor, Sie müssten das Programm benutzen. Wüssten Sie direkt, welchen Wert Sie eingeben müssten? Ergänzen Sie das Programm um sinnvolle Ein- und Ausgaben, damit der Benutzer weiß, was zu tun ist.

4) Erweitern Sie das Programm um die arithemtischen Operationen der Multiplikation, Division und Modulo.

5) (Zusatzaufgabe, nicht verpflichtend): Geben Sie eine Fehlermeldung auf der Konsole aus, wenn als Operation ein anderes Zeichen als '+,-,*,/,%' eingegeben wird.

1) Das Programm Speichert die Zwei eingegebenen zahlen und Berechnet diese entweder durch addition oder Substraktion diese Entscheidung wird durch eine IF funktion
 geregelt durch den Benutzer wird dann festgelegt ob + oder - gerechnet wird


*/

#include <iostream>
using namespace std;

int main()
{
    int firstnumber, secondnumber;
    char operation;

    cout << "Geben sie zwei Zahlen ein um diese zu Berechnen:" << endl << endl;
    cin >> firstnumber;
    cin >> secondnumber;
    cout << "Sie haben die zahlen " << firstnumber << " und " << secondnumber << " eingegeben." << endl << endl;
    cout << "Welche Operation?" << endl;
    cin >> operation;
    if (operation == '+') {
        cout << firstnumber + secondnumber;
    }
    if (operation == '-') {
        cout << firstnumber - secondnumber;
    }
    if (operation == '*') {
        cout << firstnumber * secondnumber;
    }
    if (operation == '/') {
        cout << firstnumber / secondnumber;
    }
    if (operation == '%') {
        cout << firstnumber % secondnumber;
    }
    if (operation != '+,-,/,,*,%') {
            cout << "Erorr Ungueltige Eingabe";
        }
}