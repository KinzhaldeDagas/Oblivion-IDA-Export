float *__thiscall sub_6E72F0(_DWORD *this, float a2, int a3, int a4, char *a5, int a6)
{
  char *v7; // ebp
  float v8; // esi
  int v9; // edi
  double v10; // st7
  int v11; // eax
  int v12; // ebx
  float *result; // eax
  unsigned int v14; // edx
  unsigned int v15; // esi
  int v16; // ecx
  double v17; // st5
  double v18; // st6
  char **v19; // ebp
  unsigned int v20; // edx
  double v21; // st7
  unsigned int v22; // esi
  int v23; // ecx
  double v24; // st5
  double v25; // st6
  int v26; // [esp+1Ch] [ebp-4h] BYREF

  v7 = sub_6E78D0(a5); /*0x6e7304*/
  sub_6E6B50((float *)v7, a2, &a2, &v26); /*0x6e7316*/
  v8 = a2; /*0x6e731e*/
  a5 = *((char **)v7 + 1); /*0x6e7322*/
  v9 = a4; /*0x6e7326*/
  v10 = *(float *)&a5; /*0x6e732a*/
  v11 = *(this + 2); /*0x6e732e*/
  v12 = a3; /*0x6e7331*/
  result = (float *)(v11 + 4 * (a6 + a4 * LODWORD(a2))); /*0x6e733e*/
  v14 = 0; /*0x6e7341*/
  if ( a4 >= 4 ) /*0x6e7346*/
  {
    v15 = ((unsigned int)(a4 - 4) >> 2) + 1; /*0x6e7350*/
    v16 = a3 + 8; /*0x6e7353*/
    v14 = 4 * v15; /*0x6e7356*/
    do /*0x6e7385*/
    {
      v17 = *result; /*0x6e735d*/
      result += 4; /*0x6e735f*/
      v16 += 0x10; /*0x6e7364*/
      --v15; /*0x6e7367*/
      *(float *)(v16 - 0x18) = v17 * v10; /*0x6e736a*/
      *(float *)(v16 - 0x14) = result[0xFFFFFFFD] * v10; /*0x6e7372*/
      *(float *)(v16 - 0x10) = result[0xFFFFFFFE] * v10; /*0x6e737a*/
      *(float *)(v16 - 0xC) = result[0xFFFFFFFF] * v10; /*0x6e7382*/
    }
    while ( v15 ); /*0x6e7385*/
    v8 = a2; /*0x6e7387*/
  }
  for ( ; v14 < v9; *(float *)(v12 + 4 * v14 - 4) = v18 ) /*0x6e738f*/
  {
    ++v14; /*0x6e7393*/
    v18 = *result++ * v10; /*0x6e7396*/
  }
  a5 = (char *)(LODWORD(v8) + 1); /*0x6e73ae*/
  if ( LODWORD(v8) + 1 <= v26 ) /*0x6e73b2*/
  {
    v19 = (char **)(v7 + 8); /*0x6e73c1*/
    LODWORD(a2) = v26 - (_DWORD)a5 + 1; /*0x6e73c5*/
    do /*0x6e7453*/
    {
      v20 = 0; /*0x6e73d3*/
      a5 = *v19; /*0x6e73d8*/
      v21 = *(float *)&a5; /*0x6e73dc*/
      if ( v9 >= 4 ) /*0x6e73e0*/
      {
        v22 = ((unsigned int)(v9 - 4) >> 2) + 1; /*0x6e73ea*/
        v23 = v12 + 8; /*0x6e73ed*/
        v20 = 4 * v22; /*0x6e73f0*/
        do /*0x6e742b*/
        {
          v24 = *result; /*0x6e73f7*/
          result += 4; /*0x6e73f9*/
          v23 += 0x10; /*0x6e73fe*/
          --v22; /*0x6e7401*/
          *(float *)(v23 - 0x18) = v24 * v21 + *(float *)(v23 - 0x18); /*0x6e7407*/
          *(float *)(v23 - 0x14) = result[0xFFFFFFFD] * v21 + *(float *)(v23 - 0x14); /*0x6e7412*/
          *(float *)(v23 - 0x10) = result[0xFFFFFFFE] * v21 + *(float *)(v23 - 0x10); /*0x6e741d*/
          *(float *)(v23 - 0xC) = result[0xFFFFFFFF] * v21 + *(float *)(v23 - 0xC); /*0x6e7428*/
        }
        while ( v22 ); /*0x6e742b*/
      }
      for ( ; v20 < v9; *(float *)(v12 + 4 * v20 - 4) = v25 + *(float *)(v12 + 4 * v20 - 4) ) /*0x6e7431*/
      {
        ++v20; /*0x6e7435*/
        v25 = *result++ * v21; /*0x6e7438*/
      }
      ++v19; /*0x6e7449*/
      --LODWORD(a2); /*0x6e744e*/
    }
    while ( a2 != 0.0 ); /*0x6e7453*/
  }
  return result; /*0x6e7459*/
}
