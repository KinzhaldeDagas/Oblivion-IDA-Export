hkPackedNiTriStripsShape *__thiscall hkPackedNiTriStripsShape::hkPackedNiTriStripsShape(
        hkPackedNiTriStripsShape *this,
        int a2)
{
  int v3; // eax

  sub_9156C0(this); /*0x8c48d2*/
  *(_DWORD *)this = &hkPackedNiTriStripsShape::`vftable'; /*0x8c48d9*/
  *((_DWORD *)this + 4) = 0; /*0x8c48e3*/
  if ( *(_DWORD *)(a2 + 4) ) /*0x8c48eb*/
  {
    v3 = *(_DWORD *)(a2 + 4); /*0x8c4915*/
    *((_DWORD *)this + 4) = v3; /*0x8c491a*/
    if ( v3 ) /*0x8c491d*/
      InterlockedIncrement((volatile LONG *)(v3 + 4)); /*0x8c4923*/
  }
  *((float *)this + 0xC) = *(float *)(a2 + 8); /*0x8c492e*/
  *((_OWORD *)this + 2) = *(_OWORD *)(a2 + 0x10); /*0x8c4935*/
  return this; /*0x8c4939*/
}
