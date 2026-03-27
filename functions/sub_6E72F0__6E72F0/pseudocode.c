float *__thiscall sub_6E72F0(_DWORD *this, float a2, int a3, int a4, char *a5, int a6)
{
  int v7; // ebp
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

  v7 = sub_6E78D0(a5);
  sub_6E6B50((float *)v7, a2, &a2, &v26);
  v8 = a2;
  a5 = *(char **)(v7 + 4);
  v9 = a4;
  v10 = *(float *)&a5;
  v11 = *(this + 2);
  v12 = a3;
  result = (float *)(v11 + 4 * (a6 + a4 * LODWORD(a2)));
  v14 = 0;
  if ( a4 >= 4 )
  {
    v15 = ((unsigned int)(a4 - 4) >> 2) + 1;
    v16 = a3 + 8;
    v14 = 4 * v15;
    do
    {
      v17 = *result;
      result += 4;
      v16 += 0x10;
      --v15;
      *(float *)(v16 - 0x18) = v17 * v10;
      *(float *)(v16 - 0x14) = result[0xFFFFFFFD] * v10;
      *(float *)(v16 - 0x10) = result[0xFFFFFFFE] * v10;
      *(float *)(v16 - 0xC) = result[0xFFFFFFFF] * v10;
    }
    while ( v15 );
    v8 = a2;
  }
  for ( ; v14 < v9; *(float *)(v12 + 4 * v14 - 4) = v18 )
  {
    ++v14;
    v18 = *result++ * v10;
  }
  a5 = (char *)(LODWORD(v8) + 1);
  if ( LODWORD(v8) + 1 <= v26 )
  {
    v19 = (char **)(v7 + 8);
    LODWORD(a2) = v26 - (_DWORD)a5 + 1;
    do
    {
      v20 = 0;
      a5 = *v19;
      v21 = *(float *)&a5;
      if ( v9 >= 4 )
      {
        v22 = ((unsigned int)(v9 - 4) >> 2) + 1;
        v23 = v12 + 8;
        v20 = 4 * v22;
        do
        {
          v24 = *result;
          result += 4;
          v23 += 0x10;
          --v22;
          *(float *)(v23 - 0x18) = v24 * v21 + *(float *)(v23 - 0x18);
          *(float *)(v23 - 0x14) = result[0xFFFFFFFD] * v21 + *(float *)(v23 - 0x14);
          *(float *)(v23 - 0x10) = result[0xFFFFFFFE] * v21 + *(float *)(v23 - 0x10);
          *(float *)(v23 - 0xC) = result[0xFFFFFFFF] * v21 + *(float *)(v23 - 0xC);
        }
        while ( v22 );
      }
      for ( ; v20 < v9; *(float *)(v12 + 4 * v20 - 4) = v25 + *(float *)(v12 + 4 * v20 - 4) )
      {
        ++v20;
        v25 = *result++ * v21;
      }
      ++v19;
      --LODWORD(a2);
    }
    while ( a2 != 0.0 );
  }
  return result;
}
