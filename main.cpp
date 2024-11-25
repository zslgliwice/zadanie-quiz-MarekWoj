#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
int punkty = 0;

string pytanie[] = {
    "1. Kto jest glownym bohaterem w grze Skyrim?\n  a) Ulfric Stormcloak\n  b) Dovahkiin\n  c) Esbern\n  d) Paarthurnax",
    "2. Jaka rase postaci gracz moze wybrac na poczatku gry?\n  a) Nord\n  b) Argonianin\n  c) Krasnolud\n  d) Elf",
    "3. Jakie studio stworzylo Skyrim?\n  a)Electronic Arts Inc.\n  b) Ubisoft\n  c)  Bethesda\n  d) Rockstar Games", 
    "4. Jak nazywa sie glowny smoczy bog w Skyrim?\n  a) Akatosh\n  b) Arkay\n  c) Talos\n  d) Shor",
    "5. Jaki jest glowny cel gracza w Skyrim?\n  a) Zniszczenie Alduina\n  b) Pokonanie Imperium\n  c) Odbicie miasta Whiterun\n  d) Wykonanie misji dla Gildii Zlodziei",
    "6. Gdzie znajduje sie miasto Whiterun?\n  a) Na poludniowym wschodzie Skyrim\n  b) Na wschodnim wybrzezu\n  c) W centralnej czesci Skyrim\n  d) Na zachodnich wybrzeżach",
    "7. Kto jest liderem Gildii Zlodziei w Riften?\n  a) Maven Black-Briar\n  b) Astrid\n  c) Mercer Frey\n  d) Brynjolf",
    "8. Kto jest glownym antagonistą w grze Skyrim?\n  a) Ulfric Stormcloak\n  b) Alduin\n  c) Madanach\n  d) Miraak",
    "9. Jakie zwierze jest najwiekszym na swiecie w Skyrim?\n  a) Slon\n  b) Smoczy jezdziec\n  c) Drakonid\n  d) Wieloryb blekitny",
    "10. Kto napisal ksiazke *'The Lusty Argonian Maid'*?\n  a) Wuunferth the Unliving\n  b) Crassius Curio\n  c) J'zargo\n  d) Gaius Desius"
};

string odpowiedzi[] = {"b", "d", "b", "a", "a", "c", "c", "b", "d", "b"};

int main() {
    cout << "Podaj swoje imie: " << endl;
    cin >> imie;

    cout << "Za chwile rozpocznie sie quiz z gry TES SKYRIM" << endl;

    Sleep(2000);
    system("cls");
    cout << "3..";
    Sleep(1000);
    system("cls");

    cout << "2..";
    Sleep(1000);
    system("cls");

    cout << "1..";
    Sleep(1000);
    system("cls");

    for (int i = 0; i < 10; i++) {
        cout << pytanie[i] << endl;
        string odpowiedz;
        cout << "Twoja odpowiedz: ";
        cin >> odpowiedz;

        if (odpowiedz == odpowiedzi[i]) {
            cout << "Poprawna odpowiedz" << endl;
            punkty++;
        } else {
            cout << "Zla odpowiedz" << endl;
        }

        cout << endl;
    }

    cout << "Twoj wynik: " << punkty << " na 10" << endl;

    if (punkty < 3) {
        cout << "Poszlo Ci bardzo slabo" << endl;
    } else if (punkty >= 3 && punkty < 5) {
        cout << "Moglo byc lepiej" << endl;
    } else if (punkty >= 5 && punkty <= 8) {
        cout << "Poszlo Ci dobrze" << endl;
    } else if (punkty == 10) {
        cout << "Poszlo Ci bardzo dobrze!" << endl;
    }

    return 0;
}
