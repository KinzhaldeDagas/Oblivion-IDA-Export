signed int __thiscall InputGlobals::QueryControlState(InputGlobal *this, signed int a2, int a3)
{
  signed int v4; // ebp
  int v5; // esi
  unsigned __int8 *v6; // ebx
  int v7; // eax
  signed int result; // eax
  bool v9; // zf

  if ( a2 < 29 )
  {
    v4 = 0;
    v5 = 0;
    v6 = &this->KeyboardInputControls[a2];
    do
    {
      if ( *v6 != 0xFF )
      {
        LOBYTE(v7) = InputGlobals::QueryInputState(this, v5, *v6, a3);
        v4 += v7;
      }
      ++v5;
      v6 += 0x1D;
    }
    while ( v5 < 3 );
    return v4;
  }
  if ( a2 == 29 )
  {
    result = 0;
    if ( (char)this->PreviousKeyState[1] < 0 )
      return result;
    v9 = this->CurrentKeyState[1] >= 0;
    goto LABEL_17;
  }
  if ( a2 == 30 )
  {
    result = 0;
    if ( (char)this->PreviousKeyState[0x29] < 0 )
      return result;
    v9 = this->CurrentKeyState[0x29] >= 0;
    goto LABEL_17;
  }
  if ( a2 != 31 )
    return 0;
  result = 0;
  if ( (char)this->PreviousKeyState[0xB7] >= 0 )
  {
    v9 = this->CurrentKeyState[0xB7] >= 0;
LABEL_17:
    if ( !v9 )
      return 1;
  }
  return result;
}
