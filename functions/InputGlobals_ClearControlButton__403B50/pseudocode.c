signed int __thiscall InputGlobals::ClearControlButton(InputGlobal *this, UInt8 whichScheme, UInt8 button)
{
  signed int result; // eax
  UInt8 *v4; // ecx

  result = 0;
  v4 = &this->KeyboardInputControls[0x1D * whichScheme];
  do
  {
    if ( v4[result] == button )
      v4[result] = 0xFF;
    ++result;
  }
  while ( result < 0x1D );
  return result;
}
