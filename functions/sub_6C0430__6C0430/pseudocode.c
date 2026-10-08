double __cdecl sub_6C0430(float *a1, int a2)
{
  int v3; // eax
  int v4; // edi
  double v5; // st7
  bool v6; // zf
  float v8; // [esp+1Ch] [ebp-4Ch]
  int v9; // [esp+20h] [ebp-48h]
  float v10; // [esp+20h] [ebp-48h]
  float v11; // [esp+20h] [ebp-48h]
  float v12; // [esp+20h] [ebp-48h]
  float v13; // [esp+20h] [ebp-48h]
  float v14; // [esp+20h] [ebp-48h]
  int v15; // [esp+24h] [ebp-44h]
  float v16; // [esp+44h] [ebp-24h]
  float v17; // [esp+48h] [ebp-20h]
  float v18; // [esp+4Ch] [ebp-1Ch]
  int v19; // [esp+50h] [ebp-18h] BYREF
  float v20; // [esp+54h] [ebp-14h]
  float v21; // [esp+58h] [ebp-10h]
  int v22; // [esp+5Ch] [ebp-Ch] BYREF
  float v23; // [esp+60h] [ebp-8h]
  float v24; // [esp+64h] [ebp-4h]

  v8 = 0.0; /*0x6c0441*/
  if ( a2 != 1 ) /*0x6c0447*/
  {
    v15 = a2 - 1; /*0x6c0450*/
    v3 = dword_B23D84; /*0x6c0454*/
    do /*0x6c0595*/
    {
      v4 = 0; /*0x6c0459*/
      v9 = 0; /*0x6c0460*/
      if ( v3 >= 0 ) /*0x6c0464*/
      {
        do /*0x6c0588*/
        {
          v10 = (double)v9 * unk_B3C2F4; /*0x6c0482*/
          sub_6BFDB0(v10, a1, (int)(a1 + 0x13), (float *)&v22); /*0x6c048d*/
          sub_6BFE90(v10, a1, (int)(a1 + 0x13), (float *)&v19); /*0x6c04a4*/
          v16 = v23 * v21 - v24 * v20; /*0x6c04cc*/
          v17 = v24 * *(float *)&v19 - v21 * *(float *)&v22; /*0x6c04e8*/
          v18 = v20 * *(float *)&v22 - *(float *)&v19 * v23; /*0x6c04fa*/
          v11 = v18 * v18 + v16 * v16 + v17 * v17; /*0x6c052a*/
          v12 = sqrt(v11); /*0x6c0537*/
          v5 = v12; /*0x6c053b*/
          v13 = *(float *)&v22 * *(float *)&v22 + v23 * v23 + v24 * v24; /*0x6c0555*/
          v14 = v5 / v13; /*0x6c055d*/
          if ( v8 < (double)v14 ) /*0x6c0570*/
            v8 = v14; /*0x6c0572*/
          v3 = dword_B23D84; /*0x6c057a*/
          v9 = ++v4; /*0x6c0584*/
        }
        while ( v4 <= dword_B23D84 ); /*0x6c0588*/
      }
      v6 = v15-- == 1; /*0x6c058e*/
      a1 += 0x13; /*0x6c0593*/
    }
    while ( !v6 ); /*0x6c0595*/
  }
  return v8; /*0x6c05a2*/
}
