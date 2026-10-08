float *__thiscall sub_4C6170(float *this)
{
  int v2; // ebx
  double v3; // st7
  float v5; // [esp+14h] [ebp-10h]

  *(this + 5) = 0.0; /*0x4c619e*/
  ArrayConstructor( /*0x4c61b7*/
    (char *)this + 0x54,
    0x10u,
    4,
    (void (__thiscall *)(char *))sub_4C4B90,
    (void (__thiscall *)(void *))NiTPointerMap<unsigned int,TESGrassAreaParam * *>::~NiTPointerMap<unsigned int,TESGrassAreaParam * *>);
  *(this + 0x25) = 0.0; /*0x4c61bc*/
  *this = 0.0; /*0x4c61c2*/
  *(this + 1) = 0.0; /*0x4c61c4*/
  *(this + 2) = 0.0; /*0x4c61c7*/
  *(this + 3) = 0.0; /*0x4c61ca*/
  *(this + 4) = 0.0; /*0x4c61cd*/
  v2 = *((_DWORD *)this + 5); /*0x4c61d0*/
  if ( v2 ) /*0x4c61da*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x4c61e0*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x4c61f6*/
    *(this + 5) = 0.0; /*0x4c61f8*/
  }
  v3 = flt_A3B888; /*0x4c6209*/
  *(this + 6) = flt_A32048; /*0x4c620f*/
  v5 = v3; /*0x4c6212*/
  *(this + 7) = v5; /*0x4c621a*/
  *((_DWORD *)this + 8) = unk_B35BE4; /*0x4c6222*/
  *((_DWORD *)this + 9) = unk_B35BE4; /*0x4c622b*/
  *((_DWORD *)this + 0xA) = unk_B35BE4; /*0x4c6234*/
  *((_DWORD *)this + 0xB) = unk_B35BE4; /*0x4c623c*/
  *(this + 0xC) = 0.0; /*0x4c6241*/
  *(this + 0xD) = 0.0; /*0x4c6244*/
  *(this + 0xE) = 0.0; /*0x4c6247*/
  *(this + 0xF) = 0.0; /*0x4c624a*/
  *(this + 0x10) = 0.0; /*0x4c624d*/
  *(this + 0x11) = 0.0; /*0x4c6250*/
  *(this + 0x12) = 0.0; /*0x4c6253*/
  *(this + 0x13) = 0.0; /*0x4c6256*/
  *(this + 0x14) = 0.0; /*0x4c6259*/
  return this; /*0x4c625e*/
}
