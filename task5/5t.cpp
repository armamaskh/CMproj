#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <random>

using namespace std;

void t5(int argc, char* argv[]) {
    setlocale(LC_ALL, "0");
    int t = 10;
    string tt;

    if (argc >2 ) {
        tt = argv[2];
        try {t = stoi(tt);} 
            catch (const invalid_argument& e) {
            cout << "введено недопустимое значение: " << tt <<"!"<< endl;
            return;} } 
        
    else {
        cout << "ВВЕДИТЕ РАЗМЕР МАТРИЦЫ!!" << endl;
        return ;}

    if (t <= 0) {
        cout << "Введено недопустимое значение!" << endl;
        return;}

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 10000);



    vector<vector<int>> AA(t, vector<int>(t));
    vector<vector<int>> BB(t, vector<int>(t));



    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            AA[i][j] = (dis(gen));
            cout << AA[i][j] << "\t";        }
        cout << "\n" << endl;    }

    cout << "\n\n";
    int  a = 0;
    int b = 0;
    int v = 0;
    int g = 0;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (i == j) { AA[i][j] = 0; }
            if (i + j == t - 1) { AA[i][j] = 0; }
            cout << AA[i][j] << "\t";}
        cout << "\n" << endl;}


    cout << "\n\n";
    BB = AA;
    for (int i = 0; i < t; i++)
        for (int j = 0; j < i; j++) {
            if ((i == j)) { BB[i][j] = 0; }
            BB[i][j] = 0;        }
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (i + j >= t)
                BB[i][j] = 0;
            if (BB[i][j] != 0)
                a += BB[i][j];
            cout << BB[i][j] << "\t";        }
        cout << "\n" << endl;    }
    cout << "а = " << a << "\n\n";


    cout << "\n\n";
    BB = AA;
    for (int i = 0; i < t; i++)
        for (int j = 0; j < i; j++) {
            if ((i == j)) { BB[i][j] = 0; }
            BB[i][j] = 0;
            BB[j][t - 1 - i] = 0;        }
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            b += BB[i][j];
            cout << BB[i][j] << "\t";        }
        cout << "\n" << endl;    }
    cout << "б = " << b << "\n\n";
    BB = AA;


    cout << "\n\n";
    BB = AA;
    for (int i = 0; i < t; i++)
        for (int j = 0; j < i; j++) {
            if ((i == j)) { BB[i][j] = 0; }
            BB[j][i] = 0;
            BB[j][t - 1 - i] = 0;        }
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            v += BB[i][j];
            cout << BB[i][j] << "\t";        }
        cout << "\n" << endl;    }
    cout << "в = " << v << "\n\n";


    cout << "\n\n";
    BB = AA;
    for (int i = 0; i < t; i++)
        for (int j = 0; j < i; j++) {
            if ((i == j)) { BB[i][j] = 0; }
            BB[j][i] = 0;}
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (i + j >= t)
                BB[i][j] = 0;
            if(BB[i][j] != 0)
                g += BB[i][j];
            cout << BB[i][j] << "\t";        }
        cout << "\n" << endl;    }
    cout << "г = " << g << "\n\n";

}
