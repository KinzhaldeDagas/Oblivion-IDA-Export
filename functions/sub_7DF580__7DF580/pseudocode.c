double __cdecl sub_7DF580(float a1, float a2)
{
  int v2; // esi
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st5
  float v8; // [esp+4h] [ebp-4h]
  float v9; // [esp+4h] [ebp-4h]
  float v10; // [esp+4h] [ebp-4h]

  v2 = 0; /*0x7df582*/
  v8 = (double)rand() / dbl_A3D5A8; /*0x7df597*/
  v3 = v8; /*0x7df5a9*/
  if ( v8 < (double)kHeadBodyNormalMatchRadius ) /*0x7df5ae*/
  {
    v9 = 1.0 - v3; /*0x7df5e5*/
    if ( flt_B2D63C < (double)v9 ) /*0x7df5fa*/
    {
      do /*0x7df60d*/
        v6 = *(float *)(8 * v2++ + 0xB2D644); /*0x7df5fc*/
      while ( v6 < v9 ); /*0x7df60d*/
    }
    v5 = 1.0 - *(float *)(8 * v2 + 0xB2D630); /*0x7df611*/
  }
  else
  {
    if ( flt_B2D63C < v3 ) /*0x7df5bd*/
    {
      do /*0x7df5d0*/
        v4 = *(float *)(8 * v2++ + 0xB2D644); /*0x7df5bf*/
      while ( v4 < v3 ); /*0x7df5d0*/
    }
    v5 = *(float *)(8 * v2 + 0xB2D630); /*0x7df5d4*/
  }
  v10 = v5; /*0x7df618*/
  return (float)(v10 * a2 + a1); /*0x7df630*/
}
