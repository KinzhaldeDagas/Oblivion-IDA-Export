int __thiscall sub_6D2EC0(float *this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x18u); /*0x6d2ee7*/
  v4 = (int)v3; /*0x6d2eec*/
  if ( v3 ) /*0x6d2eff*/
  {
    sub_6EC220(v3); /*0x6d2f03*/
    *(_DWORD *)v4 = &NiFloatInterpolator::`vftable'; /*0x6d2f08*/
    *(float *)(v4 + 0xC) = flt_A7C6B0; /*0x6d2f14*/
    *(_DWORD *)(v4 + 0x10) = 0; /*0x6d2f17*/
    *(_DWORD *)(v4 + 0x14) = 0; /*0x6d2f1e*/
  }
  else
  {
    v4 = 0; /*0x6d2f27*/
  }
  sub_6D2D50(this, v4, a2); /*0x6d2f39*/
  return v4; /*0x6d2f40*/
}
