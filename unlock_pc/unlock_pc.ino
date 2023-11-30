#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(500);
  DigiKeyboard.print("seu_pin");
  
}

void loop() {

}
