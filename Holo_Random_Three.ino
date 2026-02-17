// Include the servo library:
#include <Servo.h>

// Create new servo objects:
Servo HoloF1;
Servo HoloF2;
Servo HoloR1;
Servo HoloR2;
Servo HoloT1;
Servo HoloT2;

boolean state;

void setup() {

// Attach the Servo variable to a digital pin:
  HoloF1.attach(9);
  HoloF2.attach(10);
  HoloR1.attach(5);
  HoloR2.attach(6);
  HoloT1.attach(7);
  HoloT2.attach(8);
}

void loop() {
// Random Holo movement

animate_F32();
delay(random(8000,16000));
animate_R16();
delay(random(4000,8000));
animate_F24();
delay(random(2000,6000));
animate_T12();
delay(random(9000,13000));
animate_F32();
delay(random(7000,11000));
animate_R16();
delay(random(6000,12000));
animate_T8();
delay(random(3000,7000));
animate_F16();
delay(random(5000,10000));
animate_R16();
delay(random(2000,6000));
}


void animate_F16() { //Front Holo repeat 16 times

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

HoloF1.writeMicroseconds(1500); //center servo
HoloF2.writeMicroseconds(1500); //center servo
}


void animate_F24() { //Front Holo repeat 24 times

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));
 state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

HoloF1.writeMicroseconds(1500); //center servo
HoloF2.writeMicroseconds(1500); //center servo
}


void animate_F32() { //Front Holo repeat 32 times

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(8); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(8);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(4); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(4);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(8); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(8);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(4); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(4);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(8); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(8);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(4); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(4);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(10); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(10);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(4); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(4);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(8); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(8);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(4); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(4);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(8); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(8);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloF1.writeMicroseconds(1250); //open angle
else HoloF1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloF2.writeMicroseconds(1900);
else HoloF2.writeMicroseconds(1200);
delay(random(50,700));

HoloF1.writeMicroseconds(1500); //center servo
HoloF2.writeMicroseconds(1500); //center servo
}


void animate_R16() { //Rear Holo repeat 16 times

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloR1.writeMicroseconds(1250); //open angle
else HoloR1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloR2.writeMicroseconds(1900);
else HoloR2.writeMicroseconds(1200);
delay(random(50,700));

HoloR1.writeMicroseconds(1500); //center servo
HoloR2.writeMicroseconds(1500); //center servo
}


void animate_T8() { //Top Holo repeat 8 times

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

HoloT1.writeMicroseconds(1500); //center servo
HoloT2.writeMicroseconds(1500); //center servo
}


void animate_T12() { //Top Holo repeat 12 times

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

state = random(6); //delay time - changing to a higher will make it slower, and lower will make it faster
if (state) HoloT1.writeMicroseconds(1250); //open angle
else HoloT1.writeMicroseconds(1700); //close angle
delay(random(50,700)); //another delay time - changing values will either make it slower or faster

state = random(6);
if (state) HoloT2.writeMicroseconds(1900);
else HoloT2.writeMicroseconds(1200);
delay(random(50,700));

HoloT1.writeMicroseconds(1500); //center servo
HoloT2.writeMicroseconds(1500); //center servo
}