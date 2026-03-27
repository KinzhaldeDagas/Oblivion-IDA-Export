int __cdecl sub_76EB40(int a1)
{
  __int16 *v2; // edx
  float *v3; // ebx
  int v4; // ebp
  int v5; // edi
  int v6; // eax
  double v8; // st7
  __int16 *v9; // eax
  float *v10; // edi
  int v11; // ecx
  bool v12; // cf
  unsigned __int16 v13; // [esp+10h] [ebp-14h]
  int v14; // [esp+14h] [ebp-10h]
  int v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-8h]
  unsigned __int16 v17; // [esp+20h] [ebp-4h]
  unsigned __int16 v18; // [esp+28h] [ebp+4h]

  v2 = *(__int16 **)(a1 + 0x10);
  v3 = *(float **)(a1 + 0x24);
  v4 = 0;
  v14 = 0;
  if ( v2 )
  {
    v17 = *(_WORD *)a1 + 1;
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0x10 - v17) <= 0 )
      v18 = *(_WORD *)(a1 + 4) - 0x10;
    else
      v18 = *(_WORD *)a1 + 1;
    v15 = 0;
    if ( *(_WORD *)(a1 + 8) )
    {
      v8 = dbl_A3DDD0;
      do
      {
        v9 = v2;
        v10 = v3;
        v13 = 0;
        if ( v18 )
        {
          v11 = v18;
          v13 = v18;
          do
          {
            v16 = *v9;
            ++v10;
            ++v9;
            --v11;
            v10[0xFFFFFFFF] = (double)v16 / v8;
          }
          while ( v11 );
          v4 = v14;
        }
        if ( v13 < v17 )
          memset(v10, 0, 4 * (unsigned __int16)(v17 - v13));
        v4 += *(_DWORD *)(a1 + 0x1C);
        v2 = (__int16 *)((char *)v2 + *(_DWORD *)(a1 + 0x18));
        v3 = (float *)((char *)v3 + *(_DWORD *)(a1 + 0x20));
        v12 = (unsigned __int16)(v15 + 1) < *(_WORD *)(a1 + 8);
        v14 = v4;
        ++v15;
      }
      while ( v12 );
    }
    return v4;
  }
  v5 = 0;
  if ( !*(_WORD *)(a1 + 8) )
    return v4;
  v6 = *(_DWORD *)(a1 + 0x1C);
  do
  {
    _memset(v3, 0, v6);
    v6 = *(_DWORD *)(a1 + 0x1C);
    v3 = (float *)((char *)v3 + *(_DWORD *)(a1 + 0x20));
    ++v5;
    v4 += v6;
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(a1 + 8) );
  return v4;
}
