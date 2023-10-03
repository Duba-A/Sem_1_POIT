#include <iostream>;
#include <sstream>; 
using namespace std;

void main() {
    int a, b, c; //объявляем переменные.
    cin >> a >> b >> c;
    int s = ((a % 5 == 0) ? a : 0) + ((b % 5 == 0) ? b : 0) + ((c % 5 == 0) ? c : 0); //с помощью тернарных операторов
    cout << ((s != 0) ? to_string(s) : "Error") << endl;                              // выполняем условия задачи
                     //используем to_string для перевода значения s из int в str
}