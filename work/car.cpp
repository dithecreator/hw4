//
//  car.cpp
//  work
//
//  Created by Дима on 08.09.23.
//
#include <iostream>
#include <cstring>
#include "car.hpp"

using namespace std;


Car::Car(){
    model = nullptr;
    color = nullptr;
    year = 0;
    price = 0;
}
Car:: Car(const char* m, const char* c, int y, double pr){
    this -> model = new char[strlen(m) + 1];
    strcpy(this -> model, m);

    this -> color = new char[strlen(m) + 1];
    strcpy(this -> color, c);
    
    this -> price = pr;
    this -> year = y;
}
Car::~Car(){
    delete[]this -> model;
    delete[]this -> color;

}

void Car::input(){
    char modelBuff[100];
    char colorBuff[100];
    cout << "enter the model: ";
    cin >> modelBuff;
    
    if(this -> model != nullptr){
        delete this -> model;
    }
    this -> model = new char[strlen(modelBuff) + 1];
    strcpy(this -> model, modelBuff);


    cout << "enter the color: ";
    cin >> colorBuff;
    
    if(this -> color != nullptr){
        delete this -> color;
    }
    
    
    this -> color = new char[strlen(colorBuff) + 1];
    strcpy(this -> color, colorBuff);
    cout << "enter the price: ";
   cin >> this -> price;
    
    
    cout << "enter the year: ";
   cin >> this -> year;
}

void Car::print(){
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
}
char* Car::GetModel(){
    return this -> model;
}
char* Car::GetColor(){
    return this -> model;
}

int Car::GetYear(){
    return this -> year;
}

double Car::GetPrice(){
    return this -> price;
}



void Car::SetModel(const char* m){
    if (this -> model != nullptr) {
            delete[] this -> model;
        }
    this -> model = new char[strlen(m) + 1]; // Выделяем новую память под модель
    strcpy(model, m); // Копируем переданную модель в новый буфер
}

// Модификатор для установки цвета

void Car::SetColor(const char* c){
    if (this -> color != nullptr) {
            delete[] this -> color;
        }
    this -> color = new char[strlen(c) + 1]; // Выделяем новую память под цвет
    strcpy(color, c); // Копируем переданный цвет в новый буфер
}

// Модификатор для установки года выпуска
void Car::SetYear(int y){
    this -> year = y; // Просто устанавливаем значение года
}

// Модификатор для установки цены
void Car::SetPrice(double pr){
    this -> price = pr; // Просто устанавливаем значение цены
}
