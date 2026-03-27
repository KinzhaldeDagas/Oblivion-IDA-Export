hkPackedNiTriStripsShape *__thiscall hkPackedNiTriStripsShape::hkPackedNiTriStripsShape(
        hkPackedNiTriStripsShape *this,
        int a2)
{
  int v3; // eax

  sub_9156C0(this);
  *(_DWORD *)this = &hkPackedNiTriStripsShape::`vftable';
  *((_DWORD *)this + 4) = 0;
  if ( *(_DWORD *)(a2 + 4) )
  {
    v3 = *(_DWORD *)(a2 + 4);
    *((_DWORD *)this + 4) = v3;
    if ( v3 )
      InterlockedIncrement((volatile LONG *)(v3 + 4));
  }
  *((float *)this + 0xC) = *(float *)(a2 + 8);
  *((_OWORD *)this + 2) = *(_OWORD *)(a2 + 0x10);
  return this;
}
