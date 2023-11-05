#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

string imie;
char odp;

int main() {
    cout << "Podaj imie: " << endl;
    cin >> imie;

    cout << "Witaj " << imie << "!" << endl;
    int pkt = 0;

    system("cls");

    cout << "3..2";
    Sleep(1000);
    system("cls");
    cout << "3..2..1..";
    Sleep(1000);
    system("cls");

    cout << imie << " witaj w tescie z historii\n" << endl;

    cout <<"Aby wybrac opowiedz kliknij na odpowiedni klawisz na klawiaturze"<<endl;

    cout << "Kiedy byla bitwa pod Grunwaldem?" << endl;
    cout << "a) 1410" << endl;
    cout << "b) 1939" << endl;
    cout << "c) 1200" << endl;
    cout << "Twoja odpowiedz: ";
    odp = getch();

    if (odp == 'a') {
        cout << "Poprawna odpowiedz!";
        pkt++;
    } else {
        cout << "Zle! Poprawna odpowiedz to 1410!";
    }
    Sleep(3000);
    system("cls");

    cout << "Kto byl pierwszym krolem Polski?" << endl;
    cout << "a) Mieszko 1" << endl;
    cout << "b) Boleslaw Chrobry" << endl;
    cout << "c) Andrzej Duda" << endl;
    cout << "Twoja odpowiedz: ";
    odp = getch();
    if (odp == 'b') {
        cout << "Poprawna odpowiedz!";
        pkt++;
    } else {
        cout << "Zle! Poprawna odpowiedz to: Boleslaw Chrobry!";
    }
    Sleep(3000);
    system("cls");

    cout << "Kiedy byl chrzest Polski?" << endl;
    cout << "a) 2001" << endl;
    cout << "b) 2009" << endl;
    cout << "c) 966" << endl;
    cout << "Twoja odpowiedz: ";
    odp = getch();
    if (odp == 'c') {
        cout << "Poprawna odpowiedz!";
        pkt++;
    } else {
        cout << "Zle! Poprawna odpowiedz to: 966!";
    }
    Sleep(3000);
    system("cls");

    cout << "Kiedy upadlo cesarstwo Zachodniorzymskie?" << endl;
    cout << "a) 476" << endl;
    cout << "b) 1200" << endl;
    cout << "c) 99" << endl;
    cout << "Twoja odpowiedz: ";
    odp = getch();
    if (odp == 'a') {
        cout << "Poprawna odpowiedz!";
        pkt++;
    } else {
        cout << "Zle! Poprawna odpowiedz to: 476!";
    }
    Sleep(3000);
    system("cls");

    cout << "Kiedy Polska wyszla z Unii?" << endl;
    cout << "a) 2004" << endl;
    cout << "b) 1899" << endl;
    cout << "c) Nie wyszla z Unii" << endl;
    cout << "Twoja odpowiedz: ";
    odp = getch();
    if (odp == 'c') {
        cout << "Poprawna odpowiedz!";
        pkt++;
    } else {
        cout << "Zle! Poprawna odpowiedz to: Nie wyszla z Unii!";
    }
    Sleep(3000);
    system("cls");

    cout << "Twoje zdobyte punkty: " << pkt << endl;


  if (pkt == 5) {
    if (imie.back() != 'a') {
        cout << "Brawo! Odpowiedziales poprawnie na wszystkie pytania" << endl;
    } else {
        cout << "Brawo! Odpowiedzialas poprawnie na wszystkie pytania" << endl;
    }
}

if (pkt >=3) {
    if (imie.back() != 'a') {
        cout << "Brawo! Odpowiedziales poprawnie na wiekszosc pytan" << endl;
    } else {
        cout << "Brawo! Odpowiedzialas poprawnie na wiekszosc pytan" << endl;
    }
}
if (pkt <3) {
    if (imie.back() != 'a') {
        cout << "Niestety, odpowiedziales na wiekszosc pytan blednie. Sprobuj ponownie!" << endl;
    } else {
        cout << "Niestety, odpowiedzialas na wiekszosc pytan blednie. Sprobuj ponownie!" << endl;
    }
}





    return 0;
}
