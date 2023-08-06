#include <NanitLib.h>
#include <Servo.h>

#define PIN_SERVO P4_2
//#define PIN_POT P4_1
#define PIN_BUT_1 P5_1
#define PIN_BUT_2 P5_2
#define PIN_BUT_3 P5_3
#define PIN_BUT_4 P5_4


Servo my_servo;
//int angle = 0;


void setup() {
  // put your setup code here, to run once:
  Nanit_Base_Start();
  Serial.begin(9600);
  my_servo.attach(PIN_SERVO);
  my_servo.write(0);
  // my_servo.write(angle);
  //pinMode(PIN_POT, INPUT_PULLUP);
  pinMode(PIN_BUT_1, INPUT_PULLUP);
  pinMode(PIN_BUT_2, INPUT_PULLUP);
  pinMode(PIN_BUT_3, INPUT_PULLUP);
  pinMode(PIN_BUT_4, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  //my_servo.write(random(180));
  //int potValue = 0;
  // static int da = 1;
  // static bool up = 1;
  // my_servo.write(angle);
  // Serial.println(angle);
  // if (angle == 180) {
  //   up =  0;
  // }
  // else if (angle == 0) {
  //   up = 1;
  // }

  // if (up) {
  //   da = 1;
  // } 
  // else {
  //   da = -1;
  // } 
  // angle += da;
  
  // delay(10);

  if (digitalRead(PIN_BUT_1) == 0) {
    Serial.println('1');
    my_servo.write(45);    
  }
  else if (digitalRead(PIN_BUT_2) == 0) {
    Serial.println('2');
    my_servo.write(90);
  }
  else if (digitalRead(PIN_BUT_3) == 0) {
    Serial.println('3');
    my_servo.write(135);
  }
  else if (digitalRead(PIN_BUT_4) == 0) {
    Serial.println('4');
    my_servo.write(180);
  }
  else {
    //Serial.println('0');
  }
  delay(100);
}
