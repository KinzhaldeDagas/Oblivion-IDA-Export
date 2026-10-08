// TES4 authoritative keyboard query modes: 0=current down, 1=previous up/current down, 2=current up/previous down, 3=state changed.
bool __thiscall InputGlobals::QueryKeyboardState(InputGlobal *this, int a2, int a3)
{
  bool v3; // si
  bool result; // al

  v3 = 0; /*0x4032d5*/
  switch ( a3 ) /*0x4032e0*/
  {
    case 0: /*0x4032e0*/
      if ( (char)this->CurrentKeyState[a2] >= 0 ) /*0x4032f3*/
        goto LABEL_11; /*0x4032f3*/
      result = 1; /*0x4032fa*/
      break; /*0x4032fd*/
    case 1: /*0x4032e0*/
      if ( (char)this->PreviousKeyState[a2] < 0 || (char)this->CurrentKeyState[a2] >= 0 ) /*0x403316*/
        goto LABEL_11; /*0x403316*/
      result = 1; /*0x40331d*/
      break; /*0x403320*/
    case 2: /*0x4032e0*/
      if ( (char)this->CurrentKeyState[a2] < 0 || (char)this->PreviousKeyState[a2] >= 0 ) /*0x403339*/
        goto LABEL_11; /*0x403339*/
      result = 1; /*0x403340*/
      break; /*0x403343*/
    case 3: /*0x4032e0*/
      v3 = (char)(this->CurrentKeyState[a2] ^ this->PreviousKeyState[a2]) < 0; /*0x40335c*/
      goto LABEL_11; /*0x40335c*/
    default:
LABEL_11:
      result = v3; /*0x403361*/
      break; /*0x403361*/
  }
  return result; /*0x4032fc*/
}
