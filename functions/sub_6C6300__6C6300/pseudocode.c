void __thiscall sub_6C6300(_DWORD *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v3; // esi
  int v4; // esi

  v1 = InterlockedDecrement;
  v3 = *this;
  if ( *this )
  {
    if ( !v1((volatile LONG *)(v3 + 4)) )
    {
      if ( v3 )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *this = 0;
  }
  v4 = *(this + 1);
  if ( v4 )
  {
    if ( !v1((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *(this + 1) = 0;
  }
  *(this + 2) = 0;
  *((_BYTE *)this + 0xC) = byte_A79EFC;
  *((_BYTE *)this + 0xD) = 0xFF;
}
