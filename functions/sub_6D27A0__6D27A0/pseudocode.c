int __thiscall sub_6D27A0(float *this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x34u); /*0x6d27c7*/
  v4 = (int)v3; /*0x6d27cc*/
  if ( v3 ) /*0x6d27df*/
  {
    sub_6CC4E0(v3); /*0x6d27e3*/
    *(_DWORD *)v4 = &NiBlendFloatInterpolator::`vftable'; /*0x6d27e8*/
    *(float *)(v4 + 0x30) = flt_A7C6B0; /*0x6d27f4*/
  }
  else
  {
    v4 = 0; /*0x6d27f9*/
  }
  sub_6CD3D0(this, v4, a2); /*0x6d280b*/
  *(float *)(v4 + 0x30) = *(this + 0xC); /*0x6d2813*/
  return v4; /*0x6d2818*/
}
