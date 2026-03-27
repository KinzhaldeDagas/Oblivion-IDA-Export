float *__thiscall sub_6DA920(_DWORD *this, int a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x20u);
  v4 = v3;
  if ( v3 )
  {
    sub_6EC220(v3);
    *(_DWORD *)v4 = &NiPoint3Interpolator::`vftable';
    *((_DWORD *)v4 + 3) = dword_B24FC8;
    *((_DWORD *)v4 + 4) = dword_B24FCC;
    *((_DWORD *)v4 + 5) = dword_B24FD0;
    v4[6] = 0.0;
    v4[7] = 0.0;
  }
  else
  {
    v4 = 0;
  }
  sub_6DA6B0(this, v4, a2);
  return v4;
}
