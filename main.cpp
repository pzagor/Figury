
#include <iostream>
#include "Czytnik.h"
#include "Kwadrat.h"
#include "Prostokat.h"



using namespace std;


int main()
{
    
    int jakafigura = 0;

    cout << "Jaka figure chcesz dodac?" << endl
        << "Jesli kwadrat wpisz 1" << endl
        << "Jesli prostokat wpisz 2" << endl
        << "Jesli trojkat dowolny wpisz 3" << endl
        << "Jesli trojkat rownoboczny wpisz 4" << endl
        << "Jesli ko³o wpisz 5" << endl;
    
    cin >> jakafigura;

    Kwadrat * k = new Kwadrat();
    Prostokat * p = new Prostokat();

    switch (jakafigura)
    {
    case 1 :
        
        k->wczytaj();   //// TODO 
        break;
    case 2:
        
        p->wczytaj();
        break;
    /*case 3:
        wczytajKwadrat();
        break;
    case 4:
        wczytajKwadrat();
        break;
    case 5:
        wczytajKwadrat();
        break;*/
    default:
        cout << "Poda³eœ zla liczbe";
        break;
    }

    Kwadrat w = *k;
    Kwadrat suma = w + w;\
    cout << "bok przed przeladowaniem" << w.wypiszBok() << endl;
    
    cout << "bok po przeladowaniu" << suma.wypiszBok();

    cin >> jakafigura;
    return 0;

}
