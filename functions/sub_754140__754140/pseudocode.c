int __thiscall sub_754140(float *this, _DWORD **a2)
{
  float *v3; // eax
  int v4; // esi
  int result; // eax
  float v6; // [esp+Ch] [ebp+4h]

  v3 = (float *)FormHeapAlloc(0x3Cu);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_75E800(v3);
    *(float *)(v4 + 0x30) = 0.0;
    *(_DWORD *)v4 = &NiPSysTurbulenceFieldModifier::`vftable';
    *(float *)(v4 + 0x38) = -flt_A7DEB4;
    *(float *)(v4 + 0x34) = flt_A5A04C;
  }
  else
  {
    v4 = 0;
  }
  sub_75E830(this, v4, a2);
  v6 = *(this + 0xC);
  *(float *)(v4 + 0x30) = v6;
  result = v4;
  if ( v6 >= dbl_A68FE0 )
    *(float *)(v4 + 0x34) = 1.0 / v6;
  else
    *(float *)(v4 + 0x34) = flt_A5A04C;
  return result;
}
