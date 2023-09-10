//
//  main.cpp
//  work
//
//  Created by Дима on 08.09.23.
//

#include <iostream>
#include "car.hpp"
using namespace std;
int main() {
    Car a("Audi A5", "White", 2021, 24000);
    a.print();
    cout << endl;

    
    Car b;
    b.input();
    cout << endl;
    b.print();
    cout << endl;
    
    
    Car c;
    
        c.SetModel("BMW");
        c.SetColor("ocean blue");
        c.SetYear(22);
        c.SetPrice(80000);
        char* model = c.GetModel();
        char* color = c.GetModel();
        int year = c.GetYear();
        double price = c.GetPrice();
    cout << "Model: " << model << "\Color: " << color << "\nYear: " << year << "\nPrice: " << price << endl;
}

