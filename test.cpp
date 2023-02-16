#include <iostream>
using namespace std;

class Class
{

private:
    int x;

    // In general folosim obiecte private pentru ca accesul lor sa fie greu de atins , practic spui celui ce lucreaza la codul tau (NU LE ATINGE)
    // Totusi e posibil sa avem acces catre ele insa doar prin niste metode (setter si getter) pe care trebuie sa le scriem noi manual

public:
    // metodele trebuie sa fie publice logic

    // prima metoda trebuie sa fie void (ea nu returneaza nimic doar schimba unele lucruri despre obiectul nostru privat)
    void setter_x(int xxx)
    {
        x = xxx;
    }

    // metoda getter nu poate fi de tip "void" , deoarece ea returneaza insasi obiectul nostru privat
    int getter_x()
    {
        return x;
    }
};

int main()
{

    Class obj;
    int xxx;

    // Prima data chemam metoda setter , abea dupa getter
    obj.setter_x(20);
    // Acum putem simplu sa avem acces la x
    cout << obj.getter_x();

    return 0;
    // In concluzie pentru ce sa ne zaibim sa facem asta ? Prosta pentru ca ofera o securitate mai buna a datelor si asa mai departe
}