void __thiscall sub_6C64C0(int *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // esi

  v2 = *(this + 1); /*0x6c64ea*/
  v3 = InterlockedDecrement; /*0x6c64ef*/
  if ( v2 ) /*0x6c64fd*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x6c6503*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6c6515*/
  }
  v4 = *this; /*0x6c6517*/
  if ( *this ) /*0x6c6517*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x6c6529*/
    {
      if ( v4 ) /*0x6c6531*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6c653b*/
    }
  }
}
