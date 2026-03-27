double __cdecl sub_5B2140(int a1)
{
  double result; // st7
  float v2; // [esp+4h] [ebp+4h]

  if ( !a1 || (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C) + 0x58) & 0x100) != 0 )
  {
    result = flt_A30634;
    Double_To_SInt32(result);
  }
  else
  {
    v2 = fabs(*(float *)(a1 + 0x18));
    Double_To_SInt32(v2);
    return v2;
  }
  return result;
}
