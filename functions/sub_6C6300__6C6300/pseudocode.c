void __thiscall sub_6C6300(_DWORD *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v3; // esi
  int v4; // esi

  v1 = InterlockedDecrement; /*0x6c6301*/
  v3 = *this; /*0x6c630b*/
  if ( *this ) /*0x6c630b*/
  {
    if ( !v1((volatile LONG *)(v3 + 4)) ) /*0x6c6315*/
    {
      if ( v3 ) /*0x6c631d*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6c6327*/
    }
    *this = 0; /*0x6c6329*/
  }
  v4 = *(this + 1); /*0x6c632f*/
  if ( v4 ) /*0x6c6334*/
  {
    if ( !v1((volatile LONG *)(v4 + 4)) ) /*0x6c633a*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6c634c*/
    *(this + 1) = 0; /*0x6c634e*/
  }
  *(this + 2) = 0; /*0x6c6355*/
  *((_BYTE *)this + 0xC) = byte_A79EFC; /*0x6c6362*/
  *((_BYTE *)this + 0xD) = 0xFF; /*0x6c6365*/
}
