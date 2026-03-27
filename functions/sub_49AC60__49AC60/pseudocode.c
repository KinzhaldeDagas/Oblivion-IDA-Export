void __thiscall sub_49AC60(_BYTE *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebp
  int v3; // edi
  int v4; // edi
  int v5; // edi
  double v6; // st7

  v1 = InterlockedDecrement;
  if ( !*(this + 0x34) )
  {
    *(this + 0x34) = 1;
    *((_DWORD *)this + 3) = 0;
    *((_DWORD *)this + 2) = 0;
    *this = 1;
    *((_DWORD *)this + 5) = 0;
    v3 = *((_DWORD *)this + 4);
    if ( v3 )
    {
      if ( !v1((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      *((_DWORD *)this + 4) = 0;
    }
  }
  v4 = *((_DWORD *)this + 7);
  if ( v4 )
  {
    if ( !v1((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 7) = 0;
  }
  v5 = *((_DWORD *)this + 8);
  if ( v5 )
  {
    if ( !v1((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 8) = 0;
  }
  v6 = flt_A32048;
  *((float *)this + 0xA) = flt_A32048;
  *((float *)this + 0xB) = v6;
  *((float *)this + 0xC) = 0.0;
}
