#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.print("seu_usuario");
  delay(500);
  DigiKeyboard.sendKeyStroke(43);
  delay(500);
  DigiKeyboard.print("sua_senha");
  delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {

}
