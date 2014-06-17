
#include <iostream>
#include "Czytnik.h"
#include "Square.h"
#include "Rectangle.h"
#include <vector>



using namespace std;

int readAction()
{

    cout << "Jaka figure chcesz dodac?" << endl
        << "Jesli chcesz dodac kwadrat wpisz 1" << endl
        << "Jesli chcesz dodac prosokat wpisz 2" << endl
        << "Jesli chcesz dodac trojkat dowolny wpisz 3" << endl
        << "Jesli chcesz dodac trojkat rownoboczny wpisz 4" << endl
        << "Jesli chcesz dodac ko³o wpisz 5" << endl
        << "Jesli chcesz skonczyc wpisz 0" << endl;

    int jakafigura = 99;


    cin >> jakafigura;
    // co siie dzieje jak wpiszesz dupa !!!?

    return jakafigura;
}

void writeShapes(vector<Shape*> tab)
{
    cout << "To sa figury dodane do listy" << endl;
    for (int i = 0; i < tab.size(); ++i)
    {
        cout << "Figura: " << i << " ";
        tab[i]->writeShape();
        cout << endl;
    }
    cin.get();
    int k;
    cin >> k;
}

void clean(vector<Shape*> tab)
{
    for (int i = 0; i < tab.size(); ++i)
    {
        
        delete tab[i];
        
    }
}


Shape* makeShape(int actionNr)
{

    switch (actionNr)
    {
    case 1:
        return new Square();
    case 2:
        return new Rectangle();

    //case 3:
    //    wczytajKwadrat();   //////  TODO :pozostale figury
    //    break;
    //case 4:
    //    wczytajKwadrat();
    //    break;
    //case 5:
    //    wczytajKwadrat();
    //    break;
    default:
        abort();
    }
}



int main()
{
    vector<Shape*> shapes;
    cout << "Witaj w kalkulatorze figur";
    while (true) 
    {
        
        //wypisz_separator();

        int action = readAction();
        if (action == 0 || shapes.size() == 15) 
        {
            break;
        }
        if (action >= 1 && action <= 5) 
        {
            Shape* f = makeShape(action);
            f->readShape();
            shapes.push_back(f);
        }
    }
    writeShapes(shapes);
    clean(shapes);
/*
    /// przeladowanie

    

    Kwadrat w = *k;
    Kwadrat suma = w + w;\
    cout << "bok przed przeladowaniem" << w.wypiszBok() << endl;
    
    cout << "bok po przeladowaniu" << suma.wypiszBok();

    cin >> jakafigura;
    return 0;
    */

}
