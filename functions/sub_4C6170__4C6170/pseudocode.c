float *__thiscall sub_4C6170(float *this)
{
  int v2; // ebx
  double v3; // st7
  float v5; // [esp+14h] [ebp-10h]

  *(this + 5) = 0.0;
  ArrayConstructor(
    this + 0x15,
    0x10u,
    4,
    (int)sub_4C4B90,
    (void (__thiscall *)(void *))NiTPointerMap<unsigned int,TESGrassAreaParam * *>::~NiTPointerMap<unsigned int,TESGrassAreaParam * *>);
  *(this + 0x25) = 0.0;
  *this = 0.0;
  *(this + 1) = 0.0;
  *(this + 2) = 0.0;
  *(this + 3) = 0.0;
  *(this + 4) = 0.0;
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 5) = 0.0;
  }
  v3 = flt_A3B888;
  *(this + 6) = flt_A32048;
  v5 = v3;
  *(this + 7) = v5;
  *((_DWORD *)this + 8) = dword_B35BE4;
  *((_DWORD *)this + 9) = dword_B35BE4;
  *((_DWORD *)this + 0xA) = dword_B35BE4;
  *((_DWORD *)this + 0xB) = dword_B35BE4;
  *(this + 0xC) = 0.0;
  *(this + 0xD) = 0.0;
  *(this + 0xE) = 0.0;
  *(this + 0xF) = 0.0;
  *(this + 0x10) = 0.0;
  *(this + 0x11) = 0.0;
  *(this + 0x12) = 0.0;
  *(this + 0x13) = 0.0;
  *(this + 0x14) = 0.0;
  return this;
}
