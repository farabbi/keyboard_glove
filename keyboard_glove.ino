#include <Keyboard.h>

// Indicating thumb, index, middle and ring finger
int pins[] = {A4, A3, A2, A1, A0};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 5; i++) {
    pinMode(pins[i], INPUT_PULLUP);  
  }
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = read_pins();
  if (value == 1) {
    Keyboard.press('a');
    Keyboard.release('a');
  } else if (value == 2) {
    Keyboard.press('b');
    Keyboard.release('b');
  } else if (value == 3) {
    Keyboard.press('c');
    Keyboard.release('c');
  } else if (value == 4) {
    Keyboard.press('d');
    Keyboard.release('d');
  } else if (value == 5) {
    Keyboard.press('e');
    Keyboard.release('e');
  } else if (value == 6) {
    Keyboard.press('f');
    Keyboard.release('f');
  } else if (value == 7) {
    Keyboard.press('g');
    Keyboard.release('g');
  } else if (value == 8) {
    Keyboard.press('h');
    Keyboard.release('h');
  } else if (value == 9) {
    Keyboard.press('i');
    Keyboard.release('i');
  } else if (value == 10) {
    Keyboard.press('j');
    Keyboard.release('j');
  } else if (value == 11) {
    Keyboard.press('k');
    Keyboard.release('k');
  } else if (value == 12) {
    Keyboard.press('l');
    Keyboard.release('l');
  } else if (value == 13) {
    Keyboard.press('m');
    Keyboard.release('m');
  } else if (value == 14) {
    Keyboard.press('n');
    Keyboard.release('n');
  } else if (value == 15) {
    Keyboard.press('o');
    Keyboard.release('o');
  } else if (value == 16) {
    Keyboard.press('p');
    Keyboard.release('p');
  } else if (value == 17) {
    Keyboard.press('q');
    Keyboard.release('q');
  } else if (value == 18) {
    Keyboard.press('r');
    Keyboard.release('r');
  } else if (value == 19) {
    Keyboard.press('s');
    Keyboard.release('s');
  } else if (value == 20) {
    Keyboard.press('t');
    Keyboard.release('t');
  } else if (value == 21) {
    Keyboard.press('u');
    Keyboard.release('u');
  } else if (value == 22) {
    Keyboard.press('v');
    Keyboard.release('v');
  } else if (value == 23) {
    Keyboard.press('w');
    Keyboard.release('w');
  } else if (value == 24) {
    Keyboard.press('x');
    Keyboard.release('x');
  } else if (value == 25) {
    Keyboard.press('y');
    Keyboard.release('y');
  } else if (value == 26) {
    Keyboard.press('z');
    Keyboard.release('z');
  } else if (value == 27) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('t');
    Keyboard.release('t');
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release(KEY_LEFT_CTRL);
  } else if (value == 28) {
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
  } else if (value == 29) {
    Keyboard.press(' ');
    Keyboard.release(' ');
  } else if (value == 30) {
    Keyboard.press(KEY_BACKSPACE);
    Keyboard.release(KEY_BACKSPACE);
  } else if (value == 31) {
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
  }
  delay(500);
}

// Read 4 pins in parallel
int read_pins() {
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    if (analogRead(pins[i]) <= 20) {
      sum += 1 << i;
    }
  }
  return sum;
}
