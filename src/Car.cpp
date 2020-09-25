#include "Car.h"

Car::Car() {
}

Car::Car(int engine_capacity_) {
	engine_capacity=engine_capacity_;
}

void Car::drive() {
	std::cout << "... driving\n";
}