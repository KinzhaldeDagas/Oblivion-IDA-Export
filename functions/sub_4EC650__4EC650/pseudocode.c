float *__thiscall sub_4EC650(float *this, int a2)
{
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // ebx
  int v5; // ebx

  *(this + 1) = 0.0;
  *(this + 0xB) = 0.0;
  *(this + 0x12) = 0.0;
  v3 = InterlockedDecrement;
  *(this + 0x13) = 0.0;
  *(this + 0x11) = 0.0;
  *(_DWORD *)this = a2;
  *(this + 0xC) = 0.0;
  *(this + 0xD) = 0.0;
  *(this + 0xE) = 0.0;
  *(this + 0xF) = 0.0;
  *(this + 5) = 0.0;
  *(this + 9) = 0.0;
  *(this + 8) = 0.0;
  *(this + 0x10) = 0.0;
  *(this + 0x14) = 0.0;
  *(this + 0x15) = 0.0;
  *(this + 0x16) = 0.0;
  *(this + 0x17) = 0.0;
  *((_WORD *)this + 6) = 0;
  *((_WORD *)this + 7) = 0;
  *((_WORD *)this + 8) = 0;
  *((_WORD *)this + 9) = 0;
  *((_DWORD *)this + 2) = 5;
  v4 = *((_DWORD *)this + 0xB);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *(this + 0xB) = 0.0;
  }
  v5 = *((_DWORD *)this + 1);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 8)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *(this + 1) = 0.0;
  }
  return this;
}
