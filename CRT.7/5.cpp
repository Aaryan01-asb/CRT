#include <iostream>
using namespace std;

class player {
public:
    string name;

    void setName(string n) {
        name = n;
    }
};

class football  {
public:
    int goal;
    void setGoals(int g) {
        goals = g;
    }
   
};
class {
public:
    string state;
    void setState(string s) {
        state =s;
    }

void show() {
        cout << "name: " << name << endl;
        cout << "goals: " << goals << endl;
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
