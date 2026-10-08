void __thiscall sub_7B7170(int *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi
  int v5; // esi
  int v6; // esi

  v2 = *this; /*0x7b719a*/
  v3 = InterlockedDecrement; /*0x7b719e*/
  if ( *this ) /*0x7b719a*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x7b71b2*/
    {
      if ( v2 ) /*0x7b71ba*/
        (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7b71c4*/
    }
    *this = 0; /*0x7b71c6*/
  }
  v4 = *(this + 1); /*0x7b71cc*/
  if ( v4 ) /*0x7b71d1*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7b71d7*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7b71e9*/
    *(this + 1) = 0; /*0x7b71eb*/
  }
  v5 = *(this + 1); /*0x7b71f2*/
  if ( v5 ) /*0x7b71fc*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x7b7202*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7b7214*/
  }
  v6 = *this; /*0x7b7216*/
  if ( *this ) /*0x7b7216*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x7b7228*/
    {
      if ( v6 ) /*0x7b7230*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7b723a*/
    }
  }
}
