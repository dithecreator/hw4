//
//  car.hpp
//  work
//
//  Created by Дима on 08.09.23.
//

#ifndef car_hpp
#define car_hpp

#include <stdio.h>
class Car{
    char* model;
    char* color;
    int year;
    double price;
public:
    Car();
    Car(const char* m, const char* c, int y, double pr);
    ~Car();
    void input();
    void print();
    //инспекторы
    char* GetModel();
    char* GetColor();
    int GetYear();
    double GetPrice();
    //модификаторы
    void SetModel(const char* m);
    void SetColor(const char* c);
    void SetYear(int y);
    void SetPrice(double pr);
};

#endif /* car_hpp */



