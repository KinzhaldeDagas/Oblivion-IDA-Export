// TES4 authoritative mouse query modes mirror keyboard for buttons; mouse wheel pseudo-buttons 8/9 return wheel up/down.
bool __thiscall InputGlobals::QueryMouseKeyState(InputGlobal *this, int a2, UInt8 a3)
{
  unsigned int v3; // edx
  bool v4; // di
  bool v5; // zf
  bool result; // al

  v3 = a2; /*0x4031e0*/
  v4 = 0; /*0x4031e5*/
  if ( a2 == 8 ) /*0x4031ea*/
    return this->CurrentMouseState.lZ > 0; /*0x40329d*/
  if ( a2 == 9 ) /*0x4031f3*/
    return this->CurrentMouseState.lZ < 0; /*0x4032ae*/
  if ( a2 ) /*0x4031fb*/
  {
    if ( a2 == 1 ) /*0x40320f*/
      v3 = this->oldMouseButtonSwap == 0; /*0x403219*/
  }
  else
  {
    v3 = this->oldMouseButtonSwap != 0; /*0x403205*/
  }
  switch ( a3 ) /*0x403225*/
  {
    case 0u: /*0x403225*/
      v5 = this->CurrentMouseState.rgbButtons[v3] >= 0; /*0x40322c*/
      goto LABEL_17; /*0x403234*/
    case 1u: /*0x403225*/
      if ( (char)this->PreviousMouseState.rgbButtons[v3] < 0 ) /*0x40323e*/
        goto LABEL_19; /*0x40323e*/
      v5 = this->CurrentMouseState.rgbButtons[v3] >= 0; /*0x403240*/
      goto LABEL_17; /*0x403248*/
    case 2u: /*0x403225*/
      if ( (char)this->CurrentMouseState.rgbButtons[v3] < 0 ) /*0x403252*/
        goto LABEL_19; /*0x403252*/
      v5 = this->PreviousMouseState.rgbButtons[v3] >= 0; /*0x403254*/
      goto LABEL_17; /*0x40325c*/
    case 3u: /*0x403225*/
      if ( (char)(this->CurrentMouseState.rgbButtons[v3] ^ this->PreviousMouseState.rgbButtons[v3]) >= 0 ) /*0x40326e*/
        goto LABEL_19; /*0x40326e*/
      return 1; /*0x403279*/
    case 4u: /*0x403225*/
      if ( v3 > 7 ) /*0x40327f*/
        goto LABEL_19; /*0x40327f*/
      v5 = this->mouseDoubleClickFlags[v3] == 0; /*0x403281*/
LABEL_17:
      if ( !v5 ) /*0x403289*/
        v4 = 1; /*0x40328b*/
LABEL_19:
      result = v4; /*0x403290*/
      break; /*0x403294*/
    default:
      goto LABEL_19;
  }
  return result; /*0x403278*/
}
