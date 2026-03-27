int __thiscall InputGlobals::RebindControlMinimalChecks(
        InputGlobal *this,
        UInt8 whichCtrl,
        UInt8 whichScheme,
        UInt8 newButton)
{
  int result; // eax

  if ( whichScheme || newButton != 0xB7 && newButton != 1 && newButton != 0x29 )
  {
    result = InputGlobals::ClearControlButton(this, whichScheme, newButton);
    this->KeyboardInputControls[0x1D * whichScheme + whichCtrl] = newButton;
  }
  return result;
}
