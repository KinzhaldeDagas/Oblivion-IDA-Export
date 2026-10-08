char __thiscall sub_89D960(int *this, int *a2)
{
  int v3; // ebp
  int v4; // eax

  if ( this ) /*0x89d967*/
    v3 = *(this + 2); /*0x89d969*/
  else
    v3 = 0; /*0x89d96e*/
  if ( !v3 ) /*0x89d974*/
    return 0; /*0x89d9b5*/
  v4 = *this; /*0x89d976*/
  if ( a2 ) /*0x89d97f*/
  {
    if ( (*(int (**)(void))(v4 + 0x58))() != a2[2] ) /*0x89d989*/
    {
      (*(void (__thiscall **)(int *))(*this + 0x60))(this); /*0x89d992*/
      sub_88C3D0(a2, v3, v3); /*0x89d997*/
      return 1; /*0x89d9a2*/
    }
  }
  else
  {
    (*(void (**)(void))(v4 + 0x60))(); /*0x89d9a8*/
  }
  return 0; /*0x89d99d*/
}
