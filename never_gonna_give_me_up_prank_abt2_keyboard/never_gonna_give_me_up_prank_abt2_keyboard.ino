#import "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
  delay(1000);
  DigiKeyboard.print("https");
  DigiKeyboard.sendKeyStroke(56, MOD_SHIFT_LEFT);
  DigiKeyboard.sendKeyStroke(0x54);
  DigiKeyboard.sendKeyStroke(0x54);
  DigiKeyboard.print("abre.ai");
  DigiKeyboard.sendKeyStroke(0x54);
  DigiKeyboard.print("hw2O");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop() {
  // put your main code here, to run repeatedly:

}