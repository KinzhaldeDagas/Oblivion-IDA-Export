void __thiscall sub_538B60(int *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // esi

  v2 = *this; /*0x538b8a*/
  v3 = InterlockedDecrement; /*0x538b8e*/
  if ( *this ) /*0x538b8a*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x538ba2*/
    {
      if ( v2 ) /*0x538baa*/
        (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x538bb4*/
    }
    *this = 0; /*0x538bb6*/
  }
  v4 = *this; /*0x538bbc*/
  if ( *this ) /*0x538bbc*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x538bce*/
    {
      if ( v4 ) /*0x538bd6*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x538be0*/
    }
  }
}
