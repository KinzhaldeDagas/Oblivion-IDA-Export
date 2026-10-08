char __thiscall sub_89F470(int *this, int *a2)
{
  int v3; // ebp
  int v4; // eax

  if ( this ) /*0x89f477*/
    v3 = *(this + 2); /*0x89f479*/
  else
    v3 = 0; /*0x89f47e*/
  if ( !v3 ) /*0x89f484*/
    return 0; /*0x89f4c5*/
  v4 = *this; /*0x89f486*/
  if ( a2 ) /*0x89f48f*/
  {
    if ( (*(int (**)(void))(v4 + 0x58))() != a2[2] ) /*0x89f499*/
    {
      (*(void (__thiscall **)(int *))(*this + 0x60))(this); /*0x89f4a2*/
      sub_88C210(a2, v3, v3); /*0x89f4a7*/
      return 1; /*0x89f4b2*/
    }
  }
  else
  {
    (*(void (**)(void))(v4 + 0x60))(); /*0x89f4b8*/
  }
  return 0; /*0x89f4ad*/
}
