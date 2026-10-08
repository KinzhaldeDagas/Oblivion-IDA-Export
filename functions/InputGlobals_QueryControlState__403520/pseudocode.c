// [Controller decode 2026-07-09] Logical control query. For controlId < 29, scans keyboard, mouse, and first joystick binding blocks only. Special controls: 29 Escape, 30 Grave/console, 31 SysRq/PrintScreen; these are keyboard-only edge checks.
//
// [Controller decode 2026-07-09] Central decoded PC controller/joystick/IsXBox summary is stored in IDB netnode "$ ControllerStuff"; full external doc is C:\src\OblivionIDA\ControllerStuff.md.
//
// [Controller decode 2026-07-09] Controller decode completion estimate stored in IDB netnode "$ ControllerStuff" sup 200. Current overall decoded PC Controller/IsXBox/Joystick knowledge is about 92%.
//
// [Controller decode 2026-07-09] Full ControllerStuff.md is embedded in IDB netnode "$ ControllerStuff" sup 1000..1065; metadata at sup 999; completion estimate at sup 200.
//
// [Controller decode 2026-07-09] Full ControllerStuff.md is embedded in IDB netnode "$ ControllerStuff" sup 1000..1067; metadata at sup 999; completion estimate at sup 200.
signed int __thiscall InputGlobals::QueryControlState(InputGlobal *this, signed int a2, int a3)
{
  signed int v4; // ebp
  int v5; // esi
  unsigned __int8 *v6; // ebx
  int v7; // eax
  signed int result; // eax
  bool v9; // zf

  if ( a2 < 29 ) /*0x40352a*/
  {
    v4 = 0; /*0x40352f*/
    v5 = 0; /*0x403531*/
    v6 = &this->KeyboardInputControls[a2]; /*0x403533*/
    do /*0x403560*/
    {
      if ( *v6 != 0xFF ) /*0x403545*/
      {
        LOBYTE(v7) = InputGlobals::QueryInputState(this, v5, *v6, a3); /*0x403550*/
        v4 += v7; /*0x403555*/
      }
      ++v5; /*0x403557*/
      v6 += 0x1D; /*0x40355a*/
    }
    while ( v5 < 3 ); /*0x403560*/
    return v4; /*0x403568*/
  }
  if ( a2 == 29 ) /*0x40356e*/
  {
    result = 0; /*0x4035aa*/
    if ( (char)this->PreviousKeyState[1] < 0 ) /*0x4035b2*/
      return result; /*0x4035b2*/
    v9 = this->CurrentKeyState[1] >= 0; /*0x4035b4*/
    goto LABEL_17; /*0x4035b4*/
  }
  if ( a2 == 30 ) /*0x403573*/
  {
    result = 0; /*0x403596*/
    if ( (char)this->PreviousKeyState[0x29] < 0 ) /*0x40359e*/
      return result; /*0x40359e*/
    v9 = this->CurrentKeyState[0x29] >= 0; /*0x4035a0*/
    goto LABEL_17; /*0x4035a6*/
  }
  if ( a2 != 31 ) /*0x403578*/
    return 0; /*0x40357d*/
  result = 0; /*0x403582*/
  if ( (char)this->PreviousKeyState[0xB7] >= 0 ) /*0x40358a*/
  {
    v9 = this->CurrentKeyState[0xB7] >= 0; /*0x40358c*/
LABEL_17:
    if ( !v9 ) /*0x4035ba*/
      return 1; /*0x4035bc*/
  }
  return result; /*0x403567*/
}
