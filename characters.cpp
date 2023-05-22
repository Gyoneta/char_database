#include <iostream>
#include <vector>

using namespace std;
using std::string;

class characters {
    public:
    string author;
    string name;
    int lvl;
    int exp;
    int act;
    double atk;
    int hp;
    int evasion;
    int inv;
    int mov;

    void charStatus() {
        cout << "\n";
        cout << "Author: " << author << endl;
        cout << "Name: " << name << endl;
        cout << "Level: " << lvl << endl;
        cout << "Experience: " << exp << endl;
        cout << "Actions: " << act << endl;
        cout << "Attack: " << atk << endl;
        cout << "HP: " << hp << endl;
        cout << "Evasion: " << evasion << endl;
        cout << "Inventory: " << inv << endl;
        cout << "Movement: " <<mov << endl;
        cout <<"\n";
    }

    characters(string Author, string Name, int Lvl, int Exp, int Act, double Atk, int Hp, int Evasion, int Inv, int Mov) {
        author = Author;
        name = Name;
        lvl = Lvl;
        exp = Exp;
        act = Act;
        atk = Atk;
        hp = Hp;
        evasion = Evasion;
        inv = Inv;
        mov = Mov;
    }   
    
};

int main() {
    /*
    Author
    Name
    Level
    Experience
    Actions
    Attack
    HP
    Evasion
    Inventory
    Movement
    */
    characters char1 = characters("Gabriel Yoneta","Sack Jarrow", 0, 0, 3, 1.8, 5, 3, 4, 5);
    characters char2 = characters("Gabriel Yoneta", "Silly Rambobo", 0, 0, 2, 3.2, 9, 1, 3, 3);
    characters char3 = characters("Gabriel Yoneta", "Master Scrambledeggs", 0, 0, 2, 1.2, 4, 1, 5, 3);
    char1.charStatus();
    char2.charStatus();
    char3.charStatus();




    return 0;
   }

