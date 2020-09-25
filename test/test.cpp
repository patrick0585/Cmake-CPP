#include "catch.hpp"

#include "Car.h"

TEST_CASE( "engine capacity (fail)" ) {
	Car* car = new Car(1981);
	REQUIRE( car->engine_capacity == 1980 );
	delete car;
}

TEST_CASE( "engine capacity (pass)" ) {
	Car* car = new Car(1980);
	REQUIRE( car->engine_capacity == 1980 );
	delete car;
}