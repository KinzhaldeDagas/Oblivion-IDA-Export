double __cdecl sub_5B2140(int a1)
{
  double result; // st7
  float v2; // [esp+4h] [ebp+4h]

  if ( !a1 || (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C) + 0x58) & 0x100) != 0 ) /*0x5b2157*/
  {
    result = kTerrainLODQuadRayDirectionZ; /*0x5b217d*/
    Double_To_SInt32(result); /*0x5b2181*/
  }
  else
  {
    v2 = fabs(*(float *)(a1 + 0x18)); /*0x5b215e*/
    Double_To_SInt32(v2); /*0x5b216e*/
    return v2; /*0x5b216a*/
  }
  return result;
}
