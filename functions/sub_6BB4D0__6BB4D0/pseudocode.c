double __cdecl sub_6BB4D0(float a1, float *a2, int a3, float a4, char a5)
{
  float v6; // [esp+Ch] [ebp-14h]

  if ( a4 == 0.0 ) /*0x6bb4d6*/
    return unk_B3C220; /*0x6bb53f*/
  if ( *a2 > (double)a1 ) /*0x6bb4e9*/
    return a2[1]; /*0x6bb4ed*/
  if ( *(float *)((char *)a2 + (unsigned __int8)a5 * (LODWORD(a4) - 1)) < (double)a1 ) /*0x6bb50a*/
    return *(float *)((char *)a2 + (unsigned __int8)a5 * (LODWORD(a4) - 1) + 4); /*0x6bb516*/
  v6 = a4; /*0x6bb521*/
  a4 = 0.0; /*0x6bb52c*/
  return NiFloatKey_EvaluateTrack(a1, a2, a3, v6, (int *)&a4, a5); /*0x6bb4f0*/
}
