float *__thiscall sub_74CF90(float *this, int a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x58u);
  v4 = v3;
  if ( v3 )
  {
    sub_752FD0(v3);
    v4[0x15] = 0.0;
    *(_DWORD *)v4 = &NiPSysSphereEmitter::`vftable';
  }
  else
  {
    v4 = 0;
  }
  sub_753000(v4, a2);
  v4[0x15] = *(this + 0x15);
  return v4;
}
