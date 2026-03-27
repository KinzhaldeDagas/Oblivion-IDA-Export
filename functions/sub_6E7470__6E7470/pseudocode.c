int __thiscall sub_6E7470(_DWORD *this, float a2, int a3, unsigned int a4, int a5, int a6, float a7, float a8)
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

  v9 = (float *)sub_6E78D0((char *)a5);
  v26 = v9;
  sub_6E6B50(v9, a2, &a5, &v27);
  sub_730840(*(this + 3) + 2 * (a6 + a4 * a5), 4 * a4, a7, a8, (int)&v28, 4 * a4);
  v10 = v9[1];
  v11 = 0;
  v12 = 0;
  if ( (int)a4 >= 4 )
  {
    v13 = &v29[-a3 - 4];
    v14 = ((a4 - 4) >> 2) + 1;
    v15 = a3 + 8;
    v12 = 4 * v14;
    while ( 1 )
    {
      v16 = *(float *)&v29[4 * v11 - 4];
      v11 += 4;
      v15 += 0x10;
      --v14;
      *(float *)(v15 - 0x18) = v16 * v10;
      *(float *)(v15 - 0x14) = *(&v25 + v11) * v10;
      *(float *)(v15 - 0x10) = *(float *)&v13[v15 - 0x10] * v10;
      *(float *)(v15 - 0xC) = *(float *)&v29[v15 - a3 - 0x10] * v10;
      if ( !v14 )
        break;
      v13 = &v29[-a3 - 4];
    }
    v9 = v26;
  }
  for ( ; v12 < a4; *(float *)(a3 + 4 * v12 - 4) = v17 )
  {
    ++v12;
    v17 = *(float *)&v29[4 * v11++ - 4] * v10;
  }
  result = v27;
  if ( a5 + 1 <= v27 )
  {
    result = v27 - a5;
    v19 = v9 + 2;
    a5 = v27 - a5;
    do
    {
      v20 = 0;
      v21 = *v19;
      if ( (int)a4 >= 4 )
      {
        v22 = ((a4 - 4) >> 2) + 1;
        result = a3 + 8;
        v20 = 4 * v22;
        do
        {
          v23 = *(float *)&v29[4 * v11 - 4];
          v11 += 4;
          result += 0x10;
          --v22;
          *(float *)(result - 0x18) = v23 * v21 + *(float *)(result - 0x18);
          *(float *)(result - 0x14) = *(&v25 + v11) * v21 + *(float *)(result - 0x14);
          *(float *)(result - 0x10) = *(float *)&(&v26)[v11] * v21 + *(float *)(result - 0x10);
          *(float *)(result - 0xC) = *((float *)&v27 + v11) * v21 + *(float *)(result - 0xC);
        }
        while ( v22 );
      }
      for ( ; v20 < a4; *(float *)(a3 + 4 * v20 - 4) = v24 + *(float *)(a3 + 4 * v20 - 4) )
      {
        ++v20;
        v24 = *(float *)&v29[4 * v11++ - 4] * v21;
      }
      ++v19;
      --a5;
    }
    while ( a5 );
  }
  return result;
}
