int __cdecl NiPoint3_NormalizeApproximateInPlace(float *a1)
{
  int result; // eax
  double v3; // st7
  unsigned int v4; // eax
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v5 = a1[1] * a1[1] + *a1 * *a1 + a1[2] * a1[2]; /*0x4bfabc*/
  result = LODWORD(v5); /*0x4bfac0*/
  if ( v5 == 0.0 ) /*0x4bfac6*/
  {
    v3 = 0.0; /*0x4bfac8*/
  }
  else
  {
    v4 = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v5); /*0x4bfad7*/
    if ( (((unsigned __int8)(LODWORD(v5) >> 0x17) - 0x7F) & 1) != 0 ) /*0x4bfadf*/
      v4 |= (unsigned int)&loc_800000; /*0x4bfae1*/
    result = HIWORD(v4); /*0x4bfaf6*/
    v3 = 1.0 /*0x4bfb0a*/
       / COERCE_FLOAT(*(_DWORD *)(unk_B3FD88 + 4 * result) | ((((__int16)((LODWORD(v5) >> 0x17) - 0x7F) >> 1) + 0x7F) << 0x17));
  }
  v6 = v3; /*0x4bfb0c*/
  *a1 = *a1 * v6; /*0x4bfb1c*/
  a1[1] = v6 * a1[1]; /*0x4bfb23*/
  a1[2] = v6 * a1[2]; /*0x4bfb29*/
  return result; /*0x4bfb2c*/
}
