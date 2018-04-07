# Arduino Projects
A few projects made to teach Arduino, from the basics to making simple robots.

Install the Arduino IDE, you can use [this guide](https://learn.sparkfun.com/tutorials/installing-arduino-ide).

Then download, or clone, this repository and copy all the stuff from the downloaded folder into 
the Arduino IDEs sketchbook folder, the sketchbook folder is most probably at `/home/sketchbook`

## Blinking an LED:
Blinks an LED with one second intervals.
Put a 220ohm resistor between the LED's power pin and pin 13 on the Arduino
(a 1k resistor will work fine too).

**Parts:**

* An Arduino.
* An LED.
* A 1k resistor.

**Wiring**

Arduino      |     LED
-------------|-------------
Pin 13       |     Anode(power)
GND          |     Cathode(ground)

**Diagram:**

![blink](https://raw.githubusercontent.com/afshaan4/other_arduino_projects/master/circuit_diagrams/blink.png)

## LED waves:
Turns on and off LED's in a sequence, making a wave.

**Parts:**

* An Arduino.
* 10 LED's.
* 10 1k resistors.
* A breadboard.

**Wiring**

Arduino      |     LED's
-------------|-------------
Pin 2        |     LED 1
Pin 3        |     LED 2
Pin 4        |     LED 3
Pin 5        |     LED 4
Pin 6        |     LED 5
Pin 7        |     LED 6
Pin 8        |     LED 7
Pin 9        |     LED 8
Pin 10       |     LED 9
Pin 11       |     LED 10
GND          |     GND

**Diagram:**

![wave](https://raw.githubusercontent.com/afshaan4/other_arduino_projects/master/circuit_diagrams/led_wave.png)

## Interfacing with buttons:
Turn on and off an LED with a button.

* *button:*  turn the LED on when the button is held down, and off when it is released.
* *button2:* turn the LED on when the button is pressed and keep it on after it's released.
* *button2_improved:* same as button2 but with improvements.
* *button2_debouncing:* same as button2_improved, with debouncing to remove noise.

**Parts:**

* An Arduino.
* A button.
* An LED.
* A 1k resistor (for the LED).
* A 10k resistor (for the button).
* A breadboard.

**Wiring**

We'll be connecting a 10k pull-down resistor between the button pin we are reading
and ground, this is to pull the signal from the button 'LOW' when it isn't pressed.

Arduino     |     Button
------------|--------------
Pin7        |     Pin 1
PWR         |     Pin 2

Arduino     |     LED
------------|--------------
Pin13       |     Power
GND         |     GND

**Diagram:**

![button](https://raw.githubusercontent.com/afshaan4/other_arduino_projects/master/circuit_diagrams/button.png)

## Using motors:
Controlling DC motors with an Arduino.
Makes the motor spin one way for a while then the other way.

*pins 0 & 1 on the Arduino are used to upload sketches to it and we are using
them for the motor controller, so to prevent noise in the upload process
disconnect the motor controller pins going to pins 0 and 1*

**Parts:**

* An Arduino.
* A [DC motor](https://duckduckgo.com/?q=DC+motor&t=ffab&atb=v100-7&iar=images&iax=images&ia=images&iai=http%3A%2F%2Fshop.rabtron.co.za%2Fcatalog%2Fimages%2FMM10.jpg).
* A L293D motor driver board.
* A 9 volt battery and accompanying clip.

**Wiring**

The motors and motor driver are powered separately, the motors are powered width
a 9 volt battery and the motor driver is powered by the Arduino.

Arduino     |     Motor driver
------------|-------------------
Pin0        |     Enable motor a
Pin1        |     Motor a pin 1
Pin2        |     Motor a pin 2
Pin3        |     PWR
Pin4        |     GND

9v battery  |     Motor driver
------------|------------------
9v          |     PWR to motors
GND         |     GND for motors

**Diagram:**

![motors](https://raw.githubusercontent.com/afshaan4/other_arduino_projects/master/circuit_diagrams/motors.png)

## Analog read:
Reads an analog sensor(I use an LDR for this example) connected to analog pin 0 
and blinks an LED at a rate specified by the reading from the sensor.

**Parts:**

* An LED.
* An Arduino.
* A breadboard
* An LDR
* A 1k resistor(for the LED).
* A 10k resistor(for the LDR).

**Wiring**

Connect an LED to pin 13.
It doesn't matter which way you connect the LDR, the pins can be swapped.
Pull the pin on the LDR we are reading to ground with a 10k resistor.

Arduino   |    LDR
----------|--------------
Analog0   |    pin1
PWR       |    pin2

**Diagram:**

![analogread](https://raw.githubusercontent.com/afshaan4/other_arduino_projects/master/circuit_diagrams/analog_read.png)

## Analog Output:
Pulses an LED in and out like a sleeping laptop.

**Parts:**

* An LED.
* An Arduino.
* A breadboard.
* A 1k resistor.

**Wiring**
Put a 1k resistor between the cathode and ground

Arduino   |   LED
----------|-----------
Pin9      |   Anode
GND       |   Cathode

**Diagram:**

![pulse](https://raw.githubusercontent.com/afshaan4/other_arduino_projects/master/circuit_diagrams/analog_write.png)

## Serial communication:
Sends analog signals read from analog pin 0 to a computer over serial.
After uploading the sketch open the "serial monitor" 
(it's the button in the top right corner of the IDE)

**Parts:**

* An Arduino.
* An LDR.
* A 10k resistor.
* A breadboard.

**Wiring**

it's the same as in the analog read example

Arduino   |    LDR
----------|--------------
Analog0   |    pin1
PWR       |    pin2 

**Diagram:**

![serial](https://raw.githubusercontent.com/afshaan4/other_arduino_projects/master/circuit_diagrams/serial_comms.png)

## motion alarm:
Senses motion, triggers an alarm; put it in random doorways
and wait for your victims to be [bamboozled.](https://pics.onsizzle.com/you-thought-was-slug-but-was-dogco-bamboozled-again-always-6281922.png)
The sensor pin goes LOW when motion is detected, so we pull it up internally.

**Parts:**

* An Buzzer.
* A Pir motion sensor like this one: https://www.adafruit.com/product/189
* An Arduino.
* A breadboard.

**Wiring**

Arduino     |     buzzer & sensor
------------|-----------------
pin 13      |     buzzer
pin 2       |     Input from the Pir sensor
GND         |     GND
PWR         |     PWR

**Diagram:**

![PIR](https://raw.githubusercontent.com/afshaan4/other_arduino_projects/master/circuit_diagrams/motion_alarm.png)

## rangefinder:
A rangefinder using an [HC-SR04](https://www.sparkfun.com/products/13959) ultrasonic distance sensor.

**Parts:**

* An [HC-SR04](https://www.sparkfun.com/products/13959) ultrasonic sensor.
* An Arduino.
* A LED/buzzer.
* A breadboard.

**Wiring**

Arduino     |     HC-SR04
------------|-----------------
pin 12      |     Trigger (ping)
pin 11      |     Echo (input)
GND         |     GND
PWR         |     PWR

Arduino     |     LED/buzzer
------------|---------------
Pin13       |     Power
GND         |     GND

**Diagram:**

![rangefinder](https://raw.githubusercontent.com/afshaan4/other_arduino_projects/master/circuit_diagrams/rangefinder.png)

## roamer:
A robot car with an ultrasonic sensor that avoids objects in front of it.

**Parts:**

* An [HC-SR04](https://www.sparkfun.com/products/13959) ultrasonic sensor.
* A L293D motor driver board.
* Two DC motors.
* An Arduino.

**Wiring**

Arduino     |     Motor driver
------------|-----------------
pin 0       |     Enable motor a
pin 1       |     Motor a pin 1
pin 2       |     Motor a pin 2
pin 3       |     PWR
pin 4       |     GND
pin 5       |     Enable motor b
pin 6       |     Motor b pin 2
pin 7       |     Motor b pin 1

Arduino     |     HC-SR04
------------|-----------------
pin 12      |     Trigger (ping)
pin 11      |     Echo (input)
GND         |     GND
PWR         |     PWR

**Diagram:**

![rover](https://raw.githubusercontent.com/afshaan4/other_arduino_projects/master/circuit_diagrams/rover.png)

### Licensing stuff

All the code and documentation in this repository is licensed under the MIT license,
which you should have received with this, to see the exact terms of the license
read the "LICENSE" file, if you didn't receive the license you can view it
[here.](https://github.com/afshaan4/other_arduino_projects/blob/master/LICENSE)

All the pictures and circuit diagrams in this repository are licensed under the
creative commons Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)
the exact terms for which can be found here: https://creativecommons.org/licenses/by-sa/4.0/legalcode

<a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-sa/4.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/">Creative Commons Attribution-ShareAlike 4.0 International License</a>.
