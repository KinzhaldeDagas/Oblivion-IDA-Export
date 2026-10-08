float *__thiscall sub_4C4630(_DWORD *this, float *a2, int a3)
{
  int i; // edi
  double v5; // st7
  float v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  float v8; // [esp+14h] [ebp-4h]

  *a2 = flt_A32048; /*0x4c4647*/
  a2[1] = flt_A3B888; /*0x4c4651*/
  if ( a3 < 0x10 ) /*0x4c4654*/
  {
    for ( i = 0; i < 0x121; ++i ) /*0x4c4657*/
    {
      sub_4C1DD0(this, a3, i, v7); /*0x4c4669*/
      v5 = v8; /*0x4c466e*/
      if ( *a2 > (double)v8 ) /*0x4c467b*/
        *a2 = v8; /*0x4c467d*/
      if ( a2[1] < v5 ) /*0x4c4689*/
        a2[1] = v5; /*0x4c468b*/
    }
  }
  return a2; /*0x4c46a0*/
}
