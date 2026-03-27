bool __thiscall InputGlobals::QueryMouseKeyState(InputGlobal *this, int a2, UInt8 a3)
{
  unsigned int v3; // edx
  bool v4; // di
  bool v5; // zf
  bool result; // al

  v3 = a2;
  v4 = 0;
  if ( a2 == 8 )
    return this->CurrentMouseState.lZ > 0;
  if ( a2 == 9 )
    return this->CurrentMouseState.lZ < 0;
  if ( a2 )
  {
    if ( a2 == 1 )
      v3 = this->oldMouseButtonSwap == 0;
  }
  else
  {
    v3 = this->oldMouseButtonSwap != 0;
  }
  switch ( a3 )
  {
    case 0u:
      v5 = this->CurrentMouseState.rgbButtons[v3] >= 0;
      goto LABEL_17;
    case 1u:
      if ( (char)this->PreviousMouseState.rgbButtons[v3] < 0 )
        goto LABEL_19;
      v5 = this->CurrentMouseState.rgbButtons[v3] >= 0;
      goto LABEL_17;
    case 2u:
      if ( (char)this->CurrentMouseState.rgbButtons[v3] < 0 )
        goto LABEL_19;
      v5 = this->PreviousMouseState.rgbButtons[v3] >= 0;
      goto LABEL_17;
    case 3u:
      if ( (char)(this->CurrentMouseState.rgbButtons[v3] ^ this->PreviousMouseState.rgbButtons[v3]) >= 0 )
        goto LABEL_19;
      return 1;
    case 4u:
      if ( v3 > 7 )
        goto LABEL_19;
      v5 = this->unk1B50[v3] == 0;
LABEL_17:
      if ( !v5 )
        v4 = 1;
LABEL_19:
      result = v4;
      break;
    default:
      goto LABEL_19;
  }
  return result;
}
