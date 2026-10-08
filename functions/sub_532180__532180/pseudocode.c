void __thiscall sub_532180(int *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // esi

  v2 = *(this + 1); /*0x5321aa*/
  v3 = InterlockedDecrement; /*0x5321af*/
  if ( v2 ) /*0x5321bd*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x5321c3*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x5321d5*/
  }
  v4 = *this; /*0x5321d7*/
  if ( *this ) /*0x5321d7*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x5321e9*/
    {
      if ( v4 ) /*0x5321f1*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x5321fb*/
    }
  }
}
