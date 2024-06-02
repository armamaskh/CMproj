#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void t2(int argc, char* argv[]) {
    setlocale(LC_ALL, "0");
    string name ;
    if (argc >2 ) {name = argv[1];}   
    else {
        cout << "ВВЕДИТЕ ПУТЬ, ПО КОРОМУ НАХОДИТСЯ СКАНИРУЕМЫЙ ФАЙЛ!!" << endl;
        return ;}
    cout<< "|"<<name <<"|"<<endl;
    ifstream inputFile(name);
        if (!inputFile.is_open()) { cout << "ОШИБКА ОТКРЫТИЯ ФАЙЛА!" << endl; }
    else {
        vector<string> lines;
        string line;
        while (getline(inputFile, line)) { lines.push_back(line); }
        ofstream File2("2.txt");
        ofstream File3("3.txt");
        if (!File2.is_open() && !File3.is_open())
            cout << "ОШИБКА ОТКРЫТИЯ ФАЙЛОВ!" << endl;
        else {
            for (int i = 0; i < lines.size() - 1; i += 2) {
                File2 << lines[i] << endl;
                File3 << lines[i + 1] << endl;}}
        
        File2.close();
        File3.close();
    }
    inputFile.close();
    cout << "ВСЕ ГОТОВО!" << endl;
}