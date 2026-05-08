#include <iostream>
using namespace std;

class player {
public:
    string name;
    int age;

    void setName(string n) {
        name = n;
    }
};

class cricketer : public player {
public:
    int runs;
    void setRun(int r) {
        runs = r;
    }
   
};
class Indiancricketer : public cricketer{
public:
    string state;
    void setState(string s) {
        state =s;
    }

void show() {
        cout << "name: " << name << endl;
        cout << "runs: " << runs << endl;
        cout << "state:"<< state << endl;  
     }
    };


int main() {
    string s;
    int r;

    cout << "Enter run: ";
    cin >> r;

    cout << "Enter state: ";
    cin >> s;

    Indiancricketer c1;
    c1.setName("aaryan");
    c1.setRun(r);
    c1.setState(s);

    c1.show();
    return 0;
}
