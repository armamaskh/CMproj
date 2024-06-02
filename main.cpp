#include <iostream>

using namespace std;

void t1();
void t2(int argc, char* argv[]);
void t3();
void t4();
void t5(int argc, char* argv[]);


int main(int argc, char* argv[]){
    setlocale(LC_ALL, "0");
    int a;
    while(true){
        cout<< "\n\n___ГЛАВНОЕ МЕНЮ___"<<"\n";
        cout<< "___1_ЗАДАНИЕ_№1___"<<"\n";
        cout<< "___2_ЗАДАНИЕ_№2___"<<"\n";
        cout<< "___3_ЗАДАНИЕ_№3___"<<"\n";
        cout<< "___4_ЗАДАНИЕ_№4___"<<"\n";
        cout<< "___5_ЗАДАНИЕ_№5___"<<"\n\n";
        cout<< "___6__ВЫХОД_______"<<"\n\n";
        

        cout<< "> ";
        cin >> a;
        cout <<"\n";

        switch (a){
        case 1: t1(); break;
        case 2: t2(argc,argv); break;
        case 3: t3(); break;
        case 4: t4(); break;
        case 5: t5(argc,argv); break;
        case 6: return 0;

        default: cout<<"ОШИБКА, ПОПРОБУЙТЕ ВЫБРАТЬ ЗАДАНИЕ ЕЩЕ РАЗ!"<< endl;}}
    return 0;
}
