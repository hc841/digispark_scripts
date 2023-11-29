#include "DigiKeyboard.h"
void setup() {
//abrir notepade
DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
delay(500);
DigiKeyboard.print("executavel_do_programa");
delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // put your main code here, to run repeatedly:

}