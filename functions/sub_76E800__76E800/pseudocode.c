int __cdecl sub_76E800(int a1)
{
  int v2; // ebp
  float *v3; // ebx
  int v4; // edi
  int v5; // eax
  unsigned __int16 v7; // ax
  double v8; // st7
  unsigned __int16 v9; // dx
  float *v10; // edi
  int v11; // eax
  double v12; // st5
  int v13; // [esp+10h] [ebp-Ch]
  unsigned __int16 v14; // [esp+14h] [ebp-8h]
  int v15; // [esp+18h] [ebp-4h]
  unsigned __int16 v16; // [esp+20h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 0x10);
  v3 = *(float **)(a1 + 0x24);
  v4 = 0;
  v13 = 0;
  if ( v2 )
  {
    v7 = *(_WORD *)a1 + 1;
    v14 = v7;
    if ( (__int16)(*(_WORD *)(a1 + 4) - 4 - v7) <= 0 )
      v16 = *(_WORD *)(a1 + 4) - 4;
    else
      v16 = *(_WORD *)a1 + 1;
    v15 = 0;
    if ( *(_WORD *)(a1 + 8) )
    {
      v8 = dbl_A89C50;
      do
      {
        v9 = 0;
        v10 = v3;
        if ( v16 )
        {
          v11 = v16;
          v9 = v16;
          do
          {
            v12 = (double)*(int *)((char *)v10++ + v2 - (_DWORD)v3);
            --v11;
            v10[0xFFFFFFFF] = v12 * v8 - 1.0;
          }
          while ( v11 );
          v7 = v14;
        }
        if ( v9 < v7 )
        {
          memset(v10, 0, 4 * (unsigned __int16)(v7 - v9));
          v7 = v14;
        }
        v13 += *(_DWORD *)(a1 + 0x1C);
        v2 += *(_DWORD *)(a1 + 0x18);
        v3 = (float *)((char *)v3 + *(_DWORD *)(a1 + 0x20));
        ++v15;
      }
      while ( (unsigned __int16)v15 < *(_WORD *)(a1 + 8) );
    }
    return v13;
  }
  if ( !*(_WORD *)(a1 + 8) )
    return v13;
  v5 = *(_DWORD *)(a1 + 0x1C);
  do
  {
    _memset(v3, 0, v5);
    v5 = *(_DWORD *)(a1 + 0x1C);
    v3 = (float *)((char *)v3 + *(_DWORD *)(a1 + 0x20));
    v13 += v5;
    ++v4;
  }
  while ( (unsigned __int16)v4 < *(_WORD *)(a1 + 8) );
  return v13;
}
