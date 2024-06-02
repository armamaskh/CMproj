#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void t3() {
    setlocale(LC_ALL, "0");
    ifstream IMP1("C:\\Users\\Marsi\\Desktop\\CMproj\\build\\task3\\1.txt");
    ifstream IMP2("C:\\Users\\Marsi\\Desktop\\CMproj\\build\\task3\\2.txt");
    if (!IMP1.is_open() && !IMP2.is_open()) { cout << "ОШИБКА ОТКРЫТИЯ ФАЙЛОВ!" << endl; }
    else {
        string line1;
        string line2;
        int t = 0;
        while (getline(IMP1, line1) && getline(IMP2, line2)) {
            if (line1 == line2)
                t++;
            else {
                cout << "__НАШЛОСЬ РАЗЛИЧИЕ!! " << "СТРОКА: " << endl;
                cout << "СТРОКА ИЗ 1ГО ФАЙЛА -> " << line1 << endl;
                cout << "СТРОКА ИЗ 2ГО ФАЙЛА -> " << line2 << endl;
                cout << "НОМЕР СТРОКИ -> " << t++ << endl;
                break; } }
        IMP1.close();
        IMP2.close();
        cout << "ВСЕ ГОТОВО!" << endl; }
}