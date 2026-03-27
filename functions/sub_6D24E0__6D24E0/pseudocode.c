float *sub_6D24E0()
{
  float *v0; // esi
  float *result; // eax

  v0 = (float *)FormHeapAlloc(0x34u);
  result = 0;
  if ( v0 )
  {
    sub_6CC4E0(v0);
    *(_DWORD *)v0 = &NiBlendFloatInterpolator::`vftable';
    v0[0xC] = flt_A7C6B0;
    return v0;
  }
  return result;
}
