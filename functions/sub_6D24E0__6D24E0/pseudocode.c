float *sub_6D24E0()
{
  int v0; // esi
  float *result; // eax

  v0 = FormHeapAlloc(0x34u); /*0x6d2509*/
  result = 0; /*0x6d2512*/
  if ( v0 ) /*0x6d251a*/
  {
    sub_6CC4E0((NiObject *)v0); /*0x6d251e*/
    *(_DWORD *)v0 = &NiBlendFloatInterpolator::`vftable'; /*0x6d2523*/
    *(float *)(v0 + 0x30) = flt_A7C6B0; /*0x6d252f*/
    return (float *)v0; /*0x6d2532*/
  }
  return result; /*0x6d2534*/
}
