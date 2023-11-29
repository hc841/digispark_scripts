#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.print("sua_senha");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {

}
