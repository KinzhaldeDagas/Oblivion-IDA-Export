int __thiscall sub_6E7470(_DWORD *this, float a2, int a3, int a4, int a5, int a6, float a7, float a8)
{
  float *v9; // ebp
  double v10; // st7
  int v11; // ecx
  unsigned int v12; // esi
  char *v13; // ebp
  unsigned int v14; // edx
  int v15; // eax
  double v16; // st5
  double v17; // st6
  int result; // eax
  float *v19; // ebp
  unsigned int v20; // edx
  double v21; // st7
  unsigned int v22; // esi
  double v23; // st5
  double v24; // st6
  float v25; // [esp+1Ch] [ebp-4Ch]
  float *v26; // [esp+20h] [ebp-48h]
  int v27; // [esp+24h] [ebp-44h] BYREF
  int v28; // [esp+28h] [ebp-40h] BYREF
  char v29[60]; // [esp+2Ch] [ebp-3Ch] BYREF

  v9 = (float *)sub_6E78D0((char *)a5); /*0x6e7486*/
  v26 = v9; /*0x6e7498*/
  sub_6E6B50(v9, a2, &a5, &v27); /*0x6e749c*/
  sub_730840(*(this + 3) + 2 * (a6 + a4 * a5), 4 * a4, a7, a8, (int)&v28, 4 * a4); /*0x6e74dd*/
  v10 = v9[1]; /*0x6e74ed*/
  v11 = 0; /*0x6e74f4*/
  v12 = 0; /*0x6e74f6*/
  if ( a4 >= 4 ) /*0x6e74fb*/
  {
    v13 = &v29[-a3 - 4]; /*0x6e7510*/
    v14 = ((unsigned int)(a4 - 4) >> 2) + 1; /*0x6e7515*/
    v15 = a3 + 8; /*0x6e7518*/
    v12 = 4 * v14; /*0x6e751f*/
    while ( 1 ) /*0x6e752c*/
    {
      v16 = *(float *)&v29[4 * v11 - 4]; /*0x6e752c*/
      v11 += 4; /*0x6e7530*/
      v15 += 0x10; /*0x6e7535*/
      --v14; /*0x6e7538*/
      *(float *)(v15 - 0x18) = v16 * v10; /*0x6e753b*/
      *(float *)(v15 - 0x14) = *(&v25 + v11) * v10; /*0x6e7544*/
      *(float *)(v15 - 0x10) = *(float *)&v13[v15 - 0x10] * v10; /*0x6e7551*/
      *(float *)(v15 - 0xC) = *(float *)&v29[v15 - a3 - 0x10] * v10; /*0x6e755a*/
      if ( !v14 ) /*0x6e755d*/
        break; /*0x6e755d*/
      v13 = &v29[-a3 - 4]; /*0x6e7528*/
    }
    v9 = v26; /*0x6e755f*/
  }
  for ( ; v12 < a4; *(float *)(a3 + 4 * v12 - 4) = v17 ) /*0x6e7567*/
  {
    ++v12; /*0x6e756d*/
    v17 = *(float *)&v29[4 * v11++ - 4] * v10; /*0x6e7570*/
  }
  result = v27; /*0x6e7583*/
  if ( a5 + 1 <= v27 ) /*0x6e758c*/
  {
    result = v27 - a5; /*0x6e759a*/
    v19 = v9 + 2; /*0x6e759d*/
    a5 = v27 - a5; /*0x6e75a1*/
    do /*0x6e762f*/
    {
      v20 = 0; /*0x6e75a8*/
      v21 = *v19; /*0x6e75b1*/
      if ( a4 >= 4 ) /*0x6e75b5*/
      {
        v22 = ((unsigned int)(a4 - 4) >> 2) + 1; /*0x6e75bf*/
        result = a3 + 8; /*0x6e75c2*/
        v20 = 4 * v22; /*0x6e75c5*/
        do /*0x6e7605*/
        {
          v23 = *(float *)&v29[4 * v11 - 4]; /*0x6e75cc*/
          v11 += 4; /*0x6e75d0*/
          result += 0x10; /*0x6e75d5*/
          --v22; /*0x6e75d8*/
          *(float *)(result - 0x18) = v23 * v21 + *(float *)(result - 0x18); /*0x6e75de*/
          *(float *)(result - 0x14) = *(&v25 + v11) * v21 + *(float *)(result - 0x14); /*0x6e75ea*/
          *(float *)(result - 0x10) = *(float *)&(&v26)[v11] * v21 + *(float *)(result - 0x10); /*0x6e75f6*/
          *(float *)(result - 0xC) = *((float *)&v27 + v11) * v21 + *(float *)(result - 0xC); /*0x6e7602*/
        }
        while ( v22 ); /*0x6e7605*/
      }
      for ( ; v20 < a4; *(float *)(a3 + 4 * v20 - 4) = v24 + *(float *)(a3 + 4 * v20 - 4) ) /*0x6e760b*/
      {
        ++v20; /*0x6e7611*/
        v24 = *(float *)&v29[4 * v11++ - 4] * v21; /*0x6e7614*/
      }
      ++v19; /*0x6e7625*/
      --a5; /*0x6e762a*/
    }
    while ( a5 ); /*0x6e762f*/
  }
  return result; /*0x6e7635*/
}
