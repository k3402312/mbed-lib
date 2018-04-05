#include "mbed.h"
#include "motor.h"

Motor motor(DigitalPin1, DigitalPin2, DigitalPin3, DigitalPin4);

int main(){
	
	while(1){
		// Move forward 5 seconds
		motor.forward();
		wait(5);
		// Stop for 1 second
		motor.stop();
		wait(1);
		// Turn the right motor for 1 second
		motor.right();
		wait(1);
	}
}
