#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");

    float hrn_kop;

    int hrn;
    int kop;

    cout << "Введите число (грн.коп): ";
    cin >> hrn_kop;

    hrn = hrn_kop;
    kop = (hrn_kop - hrn) * 100 + 0.1; // Костыль :)
    
    cout << hrn << " грн. " << kop << " коп.\n";
}