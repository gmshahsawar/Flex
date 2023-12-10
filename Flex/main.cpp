#include <iostream>
#include<string>
#include"Course.h"
#include "Student.h"
#include "System.h"
using namespace std;

class validator{
    string input;
public:
    bool valid(string roll_no,string passwords){
        if(roll_no=="L22-6938"&&passwords=="gmshah381"){
            cout<<"Acces Granted"<<endl;
            return true;
        }
        else{
            cout<<"Wrong username or password"<<endl;
            return false;
        }
    }
};


int main(){
    cout << "======================================================================" << endl
    << "=  _____ _             _  WELCOME!   _    ______          _        _  =" << endl
    << "= /  ___| |           | |          | |   | ___ \\        | |      | | =" << endl
    << "= \\ `--.| |_ _   _  __| | ___ _ __ | |_  | |_/ /__  _ __| |_ __ _| | =" << endl
    << "=  `--. \\ __| | | |/ _` |/ _ \\ '_ \\| __| |  __/ _ \\| '__| __/ _` | | =" << endl
    << "= /\\__/ / |_| |_| | (_| |  __/ | | | |_  | | | (_) | |  | || (_| | | =" << endl
    << "= \\____/ \\__|\\__,_|\\__,_|\\___|_| |_|\\__| \\_|  \\___/|_|   \\__\\__,_|_| =" << endl
    << "======================================================================" << endl
    << endl;
  System a;
    a.run();
    return 0;
}
