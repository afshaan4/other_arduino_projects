/*
 A simple line follower using 2 IR sensors

 The line following logic:

 If the left sensor is on the line         > turn left
 If the right sensor is on the line        > turn right
 If both the sensors are on the line       > stop
 If neither of the sensors are on the line > go forward

 This codes github repo: https://github.com/afshaan4/other_arduino_projects
 wiring diagrams and assembly guides can be found here: https://aaalearn.mystagingwebsite.com/2018/04/line-follower/

 This code is licensed under the MIT license: https://mit-license.org/
*/

// the left and right IR sensors
const int rSensor = 8;
const int lSensor = 9;

// the motors
const int  a1 = 2;
const int  a2 = 3;
const int  b1 = 4;
const int  b2 = 5;

// used to store readings from the sensors
int lVal;
int rVal;

void setup() {
	// set the sensors as inputs
	pinMode(rSensor, INPUT);
	pinMode(lSensor, INPUT);

	// set the motors as outputs
	pinMode(a1, OUTPUT);
	pinMode(a2, OUTPUT);
	pinMode(b1, OUTPUT);
	pinMode(b2, OUTPUT);
	// uncomment the lines with "Serial" for debugging
	// Serial.begin(9600);
}

void loop() {
	rVal = digitalRead(rSensor);
	lVal = digitalRead(lSensor);

	// if both sensors see white, go forward
	if ((rVal == 1) && (lVal == 1)) {
		digitalWrite(a1, HIGH);
		digitalWrite(a2, LOW);
		digitalWrite(b1, HIGH);
		digitalWrite(b2, LOW);
		//Serial.println("No line");
	}

	// if the left sensor is on the line, turn left
	if ((rVal == 1) && (lVal == 0)) {
		digitalWrite(a1, HIGH);
		digitalWrite(a2, LOW);
		digitalWrite(b1, LOW);
		digitalWrite(b2, LOW);
		// Serial.println("line to the left");
	}

	// if the right sensor is on the line, turn right
	if ((rVal == 0) && (lVal == 1)) {
		digitalWrite(a1, LOW);
		digitalWrite(a2, LOW);
		digitalWrite(b1, HIGH);
		digitalWrite(b2, LOW);
		// Serial.println("line to the right");
	}

	// if both sensors are on the line, stop
	if ((rVal == 0) && (lVal == 0)) {
		digitalWrite(a1, LOW);
		digitalWrite(a2, LOW);
		digitalWrite(b1, LOW);
		digitalWrite(b2, LOW);
		// Serial.println("Both sensors see a line, motors stopped");
	}
}
