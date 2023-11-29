#include "DigiKeyboard.h"
void setup() {
//abrir notepade
DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
delay(500);
DigiKeyboard.print("notepad");
delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
delay(500);
DigiKeyboard.print("sua_mensagem");
}

void loop() {
  // put your main code here, to run repeatedly:

}