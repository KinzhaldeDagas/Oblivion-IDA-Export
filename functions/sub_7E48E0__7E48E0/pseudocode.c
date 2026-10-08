int sub_7E48E0()
{
  int result; // eax
  unsigned int v1; // esi
  int v2; // ecx
  int v3; // eax
  double v4; // st7
  float v5; // [esp+0h] [ebp-4h]

  result = unk_B46044; /*0x7e48e1*/
  if ( !unk_B46044 )
  {
    v1 = sub_7E2D60(); /*0x7e48f0*/
    result = FormHeapAlloc((unsigned __int64)(4 * v1) >> 0x1E != 0 ? 0xFFFFFFFF : 0x10 * v1);
    v2 = 0; /*0x7e4912*/
    unk_B46044 = result; /*0x7e4916*/
    if ( v1 ) /*0x7e491b*/
    {
      v3 = result + 8; /*0x7e491d*/
      do /*0x7e4950*/
      {
        v4 = (double)v2; /*0x7e4928*/
        if ( v2 < 0 ) /*0x7e492c*/
          v4 = v4 + flt_A2FC78; /*0x7e492e*/
        v5 = v4; /*0x7e4934*/
        ++v2; /*0x7e4938*/
        v3 += 0x10; /*0x7e493f*/
        *(float *)(v3 - 0x18) = v5; /*0x7e4944*/
        *(float *)(v3 - 0x14) = v5; /*0x7e4947*/
        *(float *)(v3 - 0x10) = v5; /*0x7e494a*/
        *(float *)(v3 - 0xC) = v5; /*0x7e494d*/
      }
      while ( v2 < v1 ); /*0x7e4950*/
      return unk_B46044; /*0x7e4952*/
    }
  }
  return result; /*0x7e4959*/
}
