/*Un elev merge cu metroul în fiecare zi, traseul său fiind:
dimineața: de acasă – la școală;
iar seara: de la școală – acasă.
Pentru a economisi bani, își cumpără un card electronic pentru X călătorii. Când
vrea să se deplaseze cu metroul, își pune cardul pe turnichet. Dacă pe card există
un număr, diferit de zero, de călătorii atunci turnichetul îl lasă pe elev să treacă
și se anulează o călătorie de pe card. Dacă nu mai sunt călătorii pe card, atunci
turnichetul nu-l lasă pe elev să treacă și el este obligat să cumpere un card nou
pentru X călătorii la aceeași stație și să treacă din nou prin turnichet.
Elevul a observat că dimineața, din cauza supraaglomerării, el nu-și
poate permite să cumpere un card nou, deoarece va întârzia la lecții. În condițiile
date elevul ar dori să cunoască: va fi așa dimineață când el nu-și va putea achita
călătoria?
Date de intrare:
De la tastatură se citește cuvântul «School» sau «Home» în dependență de unde
și-a procurat prima dată elevul cardul pentru X călătorii, apoi din rândul următor se
citește un număr natural X, 1 ≤ X ≤ 1000.
Date de ieșire:
La ecran se va afișa «Yes», dacă va sosi astfel de zi: dimineața de acasă pe cardul
elevului nu vor mai fi bani pentru achitarea călătoriei, în caz contrar se va afișa «No».
Exemple:
№ Date de intrare: Date de ieșire:

Home
1
Yes

School
2
No*/

#include <iostream>
#include <string>
using namespace std;
int main()
{

    int x, home = 0, school = 0, nr_calatorii = 0;
    string location;
    cin >> location;
    cin >> x;
    home = x;
    school = x;
    int i = x;

    if (location == "Home")
    {
        for (int i = 0; i < x; i++)
        {
        }
    }

    if (home > school)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    cout << "\nHome " << home << endl
         << "School " << school;
}