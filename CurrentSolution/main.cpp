#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Taxi{
protected:
    int cost;
    int m;
    long long distance;

public:
    Taxi(int z);

    long long get_total_cost();
    void reset();
    void move(int direction);
    int get_distance();
};

Taxi::Taxi(int z){
    m = z;
    cost = 0;
    distance = 0;
}

void Taxi::move(int direction){
    distance += direction;
    cost += m * direction;
}

long long Taxi::get_total_cost(){
    return cost;
}

void Taxi::reset(){
    distance = 0;
}

int Taxi::get_distance(){
    return distance;
}




int main() {
    int k, z;
    cin >> k >> z;
    Car a(z);
    for(int i = 0; i < k; i++){
        string n;
        int direction;
        cin >> n;
        if (n == "MOVE"){
            cin >> direction;
            a.move(direction);
        }
        else if(n == "POSITION"){
            cout << a.get_position() << endl;
        }
        else if(n == "COST"){
            cout << a.get_total_cost() << endl;
        }
        else if(n == "RESET"){
            a.reset();
        }
    }
    return 0;
}