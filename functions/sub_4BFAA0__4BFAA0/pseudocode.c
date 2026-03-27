int __cdecl sub_4BFAA0(float *a1)
{
  int result; // eax
  double v3; // st7
  unsigned int v4; // eax
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v5 = a1[1] * a1[1] + *a1 * *a1 + a1[2] * a1[2];
  result = LODWORD(v5);
  if ( v5 == 0.0 )
  {
    v3 = 0.0;
  }
  else
  {
    v4 = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v5);
    if ( (((unsigned __int8)(LODWORD(v5) >> 0x17) - 0x7F) & 1) != 0 )
      v4 |= (unsigned int)&loc_800000;
    result = HIWORD(v4);
    v3 = 1.0
       / COERCE_FLOAT(*(_DWORD *)(dword_B3FD88 + 4 * result) | ((((__int16)((LODWORD(v5) >> 0x17) - 0x7F) >> 1) + 0x7F) << 0x17));
  }
  v6 = v3;
  *a1 = *a1 * v6;
  a1[1] = v6 * a1[1];
  a1[2] = v6 * a1[2];
  return result;
}
