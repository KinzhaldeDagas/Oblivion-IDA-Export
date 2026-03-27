float *sub_6CBCE0()
{
  float *v0; // esi
  float *result; // eax

  v0 = (float *)FormHeapAlloc(0x30u);
  result = 0;
  if ( v0 )
  {
    sub_6CC4E0(v0);
    *(_DWORD *)v0 = &NiBlendTransformInterpolator::`vftable';
    return v0;
  }
  return result;
}
