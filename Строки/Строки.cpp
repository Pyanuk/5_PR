#include <iostream>
#include <string>
#include <algorithm>
#include <random>
using namespace std;

void reverse() {
    string a;
    cout << "Введиет слово,которое вы хотите вывести задом на перед: ";
    cin >> a ;
    reverse(a.begin(), a.end());
    cout << "Ваше слово: " << a << endl;
    
}

void slovo_bes_glasnyye() {
    string s;
    cout << "Введите строку: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'e' ||
            s[i] == 'A' || s[i] == 'O' || s[i] == 'U' || s[i] == 'I' || s[i] == 'E') {
            s.erase(i, 1);
            i--;
        }
    }

    cout << "Слово без гласных букв: " << s << endl;
    
}


void slovo_bes_soglasnykh() {
    string s;
    cout << "Введите строку: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'F' || s[i] == 'G' ||
            s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'f' || s[i] == 'g' ||
            s[i] == 'H' || s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'M' ||
            s[i] == 'h' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'm' ||
            s[i] == 'N' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' ||
            s[i] == 'n' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' ||
            s[i] == 'T' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' ||
            s[i] == 't' || s[i] == 'v' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y' ||
            s[i] == 'Z' || s[i] == 'z') { 
            s.erase(i, 1);
            i--;
        }
    }

    cout << "Слово без гласных букв: " << s << endl;
}


void random() {
    string s;
    cout << "Введите строку: ";
    cin >> s;

    random_device rd;
    mt19937 g(rd());
    shuffle(s.begin(), s.end(), g);

    cout << "Слово с рандомно раскиданными буквами: " << s << endl;
  
}

int main()
{
    int choice;

    do {
        setlocale(LC_ALL, "Rus");
        cout << "Выберите операцию: \n";
        cout << "1. Слово выводится задом наперед\n";
        cout << "2. Вывести слово без гласных\n";
        cout << "3. Вывести слово без согласных\n";
        cout << "4. Рандомно раскидывать буквы заданного слова\n";
        cout << "5. Вывод\n";


        cin >> choice;

        switch (choice) {
        case 1:
            reverse();
            break;
        case 2:
            slovo_bes_glasnyye();
            break;
        case 3:
            slovo_bes_soglasnykh();
            break;
        case 4:
            random();
            break;
        case 5:
            cout << "Выход из программы";
            break;
        default:
            cout << "Неверный выбор операции. Попробуйте снова.";
            break;
        }
        cout << endl;
    } while (choice != 5);

    return 0;

}