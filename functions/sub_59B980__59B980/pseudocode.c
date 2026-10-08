// [Controller decode 2026-07-09] Selects previous available input scheme for Controls menu.
BOOL __thiscall ControlsMenu::SelectPreviousAvailableScheme(_DWORD *this)
{
  char v1; // bl
  int v2; // eax
  InputGlobal *input; // edx
  int v4; // eax
  int v5; // eax
  UInt32 numJoysticks; // eax
  bool v7; // zf

  v1 = 3; /*0x59b981*/
  do /*0x59b9d1*/
  {
    v2 = *(this + 0x17); /*0x59b983*/
    if ( v2 ) /*0x59b988*/
      *(this + 0x17) = v2 - 1; /*0x59b996*/
    else
      *(this + 0x17) = 2; /*0x59b98a*/
    input = MEMORY[0xB33398]->input; /*0x59b99e*/
    v4 = *(this + 0x17); /*0x59b9a1*/
    if ( !v4 ) /*0x59b9a7*/
    {
      numJoysticks = 0; /*0x59b9c2*/
      v7 = input->keyboardInterface == 0; /*0x59b9c4*/
      goto LABEL_11; /*0x59b9c4*/
    }
    v5 = v4 - 1; /*0x59b9a9*/
    if ( !v5 ) /*0x59b9ac*/
    {
      numJoysticks = 0; /*0x59b9bb*/
      v7 = input->mouseInterface == 0; /*0x59b9bd*/
LABEL_11:
      LOBYTE(numJoysticks) = !v7; /*0x59b9c7*/
      goto LABEL_12; /*0x59b9c7*/
    }
    if ( v5 != 1 ) /*0x59b9b1*/
      goto LABEL_13; /*0x59b9b1*/
    numJoysticks = input->numJoysticks; /*0x59b9b3*/
LABEL_12:
    if ( numJoysticks ) /*0x59b9cc*/
      return v1 != 0; /*0x59b9cc*/
LABEL_13:
    --v1; /*0x59b9ce*/
  }
  while ( v1 ); /*0x59b9d1*/
  return v1 != 0; /*0x59b9db*/
}
