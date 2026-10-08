// [Controller decode 2026-07-09] Selects next available input scheme for Controls menu: keyboard, mouse, or first joystick/controller when present.
BOOL __thiscall ControlsMenu::SelectNextAvailableScheme(_DWORD *this)
{
  char v1; // bl
  InputGlobal *input; // edx
  int v3; // eax
  int v4; // eax
  UInt32 numJoysticks; // eax
  bool v6; // zf

  v1 = 3; /*0x59b921*/
  do /*0x59b96c*/
  {
    if ( (int)++*(this + 0x17) >= 3 ) /*0x59b92b*/
      *(this + 0x17) = 0; /*0x59b92d*/
    input = MEMORY[0xB33398]->input; /*0x59b939*/
    v3 = *(this + 0x17); /*0x59b93c*/
    if ( !v3 ) /*0x59b942*/
    {
      numJoysticks = 0; /*0x59b95d*/
      v6 = input->keyboardInterface == 0; /*0x59b95f*/
      goto LABEL_10; /*0x59b95f*/
    }
    v4 = v3 - 1; /*0x59b944*/
    if ( !v4 ) /*0x59b947*/
    {
      numJoysticks = 0; /*0x59b956*/
      v6 = input->mouseInterface == 0; /*0x59b958*/
LABEL_10:
      LOBYTE(numJoysticks) = !v6; /*0x59b962*/
      goto LABEL_11; /*0x59b962*/
    }
    if ( v4 != 1 ) /*0x59b94c*/
      goto LABEL_12; /*0x59b94c*/
    numJoysticks = input->numJoysticks; /*0x59b94e*/
LABEL_11:
    if ( numJoysticks ) /*0x59b967*/
      return v1 != 0; /*0x59b967*/
LABEL_12:
    --v1; /*0x59b969*/
  }
  while ( v1 ); /*0x59b96c*/
  return v1 != 0; /*0x59b976*/
}
