// [Controller decode 2026-07-09] Clears/unbinds a control button from a selected scheme binding block.
signed int __thiscall InputGlobals::ClearControlButton(InputGlobal *this, UInt8 whichScheme, UInt8 button)
{
  signed int result; // eax
  UInt8 *v4; // ecx

  result = 0; /*0x403b54*/
  v4 = &this->KeyboardInputControls[0x1D * whichScheme]; /*0x403b59*/
  do /*0x403b77*/
  {
    if ( v4[result] == button ) /*0x403b6b*/
      v4[result] = 0xFF; /*0x403b6d*/
    ++result; /*0x403b71*/
  }
  while ( result < 0x1D ); /*0x403b77*/
  return result; /*0x403b79*/
}
