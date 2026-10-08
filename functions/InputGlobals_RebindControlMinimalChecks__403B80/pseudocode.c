// [Controller decode 2026-07-09] Minimal rebind checks: forbids reserved inputs such as Escape, Grave/console, and PrintScreen before writing a binding.
int __thiscall InputGlobals::RebindControlMinimalChecks(
        InputGlobal *this,
        UInt8 whichCtrl,
        UInt8 whichScheme,
        UInt8 newButton)
{
  int result; // eax

  if ( whichScheme || newButton != 0xB7 && newButton != 1 && newButton != 0x29 ) /*0x403b9e*/
  {
    result = InputGlobals::ClearControlButton(this, whichScheme, newButton); /*0x403ba5*/
    this->KeyboardInputControls[0x1D * whichScheme + whichCtrl] = newButton; /*0x403bb1*/
  }
  return result; /*0x403bb8*/
}
