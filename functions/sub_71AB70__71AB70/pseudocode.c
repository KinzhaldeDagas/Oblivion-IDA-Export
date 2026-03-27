_DWORD *__thiscall sub_71AB70(_BYTE *this, _DWORD **a2)
{
  _DWORD *v3; // eax
  int v4; // esi

  v3 = (_DWORD *)FormHeapAlloc(0x38u);
  v4 = (int)v3;
  if ( v3 )
  {
    NiBackToFrontAccumulator_Constructor(v3);
    *(_DWORD *)v4 = &NiAlphaAccumulator::`vftable';
    *(_BYTE *)(v4 + 0x34) = 1;
    *(_BYTE *)(v4 + 0x35) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_6EC2A0(this, v4, a2);
  *(_BYTE *)(v4 + 0x34) = *(this + 0x34);
  *(_BYTE *)(v4 + 0x35) = *(this + 0x35);
  return (_DWORD *)v4;
}
