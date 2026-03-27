_DWORD *__thiscall sub_733770(void *this, _DWORD **a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  v3 = (_DWORD *)FormHeapAlloc(0x34u);
  v4 = v3;
  if ( v3 )
  {
    NiAccumulator_Constructor(v3);
    *v4 = &NiBackToFrontAccumulator::`vftable';
    v4[6] = 0;
    v4[4] = 0;
    v4[5] = 0;
    v4[3] = &NiTPointerList<NiGeometry *>::`vftable';
    v4[7] = 0;
    v4[8] = 0;
    v4[9] = 0;
    v4[0xA] = 0;
    v4[0xB] = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_733850(this, (int)v4, a2);
  return v4;
}
