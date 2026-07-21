/*
  ============================================================
  CHARLIE — Voice-Controlled Humanoid Robot
  Arduino Uno Control Code

  Author  : Kumar Aryan
  Project : Charlie the Humanoid Robot
  License : © Kumar Aryan. All Rights Reserved.
  ============================================================
*/

String voice;
#include <Servo.h>

Servo head;
Servo myone;
Servo mytwo;

int pos = 0;
int lmf = 2;       // Left motor forward
int lmb = 3;       // Left motor backward
int rmf = 4;       // Right motor forward
int rmb = 5;       // Right motor backward
int eye1 = 6;      // Eye LED 1
int eye2 = 7;      // Eye LED 2
int robot = 13;    // "Show yourself" indicator
int lights = 8;    // Body lights
int weapons = 11;  // "Attack" indicator

void setup() {
  head.attach(12);
  myone.attach(9);
  mytwo.attach(10);

  pinMode(lmf, OUTPUT);
  pinMode(lmb, OUTPUT);
  pinMode(rmf, OUTPUT);
  pinMode(rmb, OUTPUT);
  pinMode(eye1, OUTPUT);
  pinMode(eye2, OUTPUT);
  pinMode(robot, OUTPUT);
  pinMode(lights, OUTPUT);
  pinMode(weapons, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String voice = Serial.readString();
    Serial.println(voice);

    // ---- Wake up ----
    if (voice == "Charlie wake up") {
      digitalWrite(eye1, HIGH);
      delay(800);
      digitalWrite(eye1, LOW);
      delay(800);
      digitalWrite(eye1, HIGH);
    }

    // ---- Show yourself ----
    if (voice == "Charlie show yourself") {
      digitalWrite(robot, HIGH);
      digitalWrite(eye1, HIGH);
    }

    // ---- Lights on ----
    if (voice == "Charlie lights on") {
      digitalWrite(lights, HIGH);
    }

    // ---- Move forward ----
    if (voice == "Charlie move forward") {
      digitalWrite(lmf, HIGH);
      digitalWrite(rmf, HIGH);
      delay(2000);
      digitalWrite(lmf, LOW);
      digitalWrite(rmf, LOW);
      delay(500);
      digitalWrite(lmf, HIGH);
      digitalWrite(rmf, HIGH);
      delay(1000);
      digitalWrite(rmf, LOW);
      digitalWrite(lmf, LOW);
    }

    // ---- Move backward ----
    if (voice == "Charlie move backward") {
      digitalWrite(rmb, HIGH);
      digitalWrite(lmb, HIGH);
      delay(2000);
      digitalWrite(rmb, LOW);
      digitalWrite(lmb, LOW);
      delay(500);
      digitalWrite(lmb, HIGH);
      digitalWrite(rmb, HIGH);
      delay(1000);
      digitalWrite(lmb, LOW);
      digitalWrite(rmb, LOW);
    }

    // ---- Turn right ----
    if (voice == "Charlie turn right") {
      digitalWrite(lmf, HIGH);
      delay(1500);
      digitalWrite(lmf, LOW);
    }

    // ---- Turn left ----
    if (voice == "Charlie turn left") {
      digitalWrite(rmf, HIGH);
      delay(1500);
      digitalWrite(rmf, LOW);
    }

    // ---- Hands up / down ----
    if (voice == "Charlie hands up") {
      myone.write(160);
      mytwo.write(10);
    }

    if (voice == "Charlie hands down") {
      myone.write(0);
      mytwo.write(180);
    }

    // ---- Bharat Mata Ki (fun command) ----
    if (voice == "Charlie Bharat Mata Ki") {
      myone.write(180);
      digitalWrite(lights, HIGH);
      delay(1000);
      myone.write(0);
      digitalWrite(lights, LOW);
    }

    // ---- Attack on enemy (fun command) ----
    if (voice == "Charlie attack on enemy") {
      digitalWrite(weapons, HIGH);
      digitalWrite(eye2, HIGH);
    }

    // ---- Stop ----
    if (voice == "stop Charlie") {
      digitalWrite(lmf, LOW);
      digitalWrite(lmb, LOW);
      digitalWrite(rmf, LOW);
      digitalWrite(rmb, LOW);
      digitalWrite(eye1, LOW);
      digitalWrite(eye2, LOW);
      digitalWrite(robot, LOW);
      digitalWrite(lights, LOW);
      digitalWrite(weapons, LOW);
    }

    // ---- Do exercise ----
    if (voice == "Charlie do exercise") {
      myone.write(120);
      mytwo.write(50);
      delay(600);
      myone.write(10);
      mytwo.write(170);
      delay(500);
      myone.write(120);
      mytwo.write(50);
      delay(600);
      myone.write(10);
      mytwo.write(170);
      delay(500);
      myone.write(120);
      mytwo.write(50);
      delay(600);
      myone.write(10);
      mytwo.write(170);
      delay(500);
    }

    // ---- Head movement ----
    if (voice == "Charlie watch right") {
      head.write(30);
    }

    if (voice == "Charlie watch left") {
      head.write(150);
    }

    if (voice == "Charlie watch front") {
      head.write(90);
    }

    // ---- Follow me ----
    if (voice == "Charlie follow me") {
      digitalWrite(lmf, HIGH);
      digitalWrite(rmf, HIGH);
    }

    // ---- Rest ----
    if (voice == "Charlie now you can take rest") {
      digitalWrite(eye1, LOW);
      digitalWrite(eye2, LOW);
      digitalWrite(robot, LOW);
      digitalWrite(lights, LOW);
      digitalWrite(weapons, LOW);
    }
  }
}

// ============================================================
// End of code — Charlie Humanoid Robot
// © Kumar Aryan. All Rights Reserved.
// ============================================================
