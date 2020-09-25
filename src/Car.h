#ifndef CAR_H_
#define CAR_H_

#include <iostream>

class Car {
	public:
		int engine_capacity;

		Car();
		Car(int engine_capacity);
		void drive();
};

#endif
