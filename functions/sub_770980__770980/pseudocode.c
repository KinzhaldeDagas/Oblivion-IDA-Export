int __cdecl sub_770980(int a1)
{
  float *v1; // ebx
  int v2; // ebp
  int v3; // edi
  int v4; // eax
  unsigned __int16 v6; // ax
  float *v7; // edx
  int v8; // ecx
  int v9; // ebp
  double v10; // st7
  int v11; // [esp+10h] [ebp-14h]
  unsigned __int16 v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+1Ch] [ebp-8h]

  v1 = *(float **)(a1 + 0x10);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 0x24);
  v11 = 0;
  if ( v1 )
  {
    if ( (__int16)(*(_WORD *)(a1 + 4) - 4) <= 0 )
      v12 = *(_WORD *)(a1 + 4);
    else
      v12 = 4;
    v13 = 0;
    if ( !*(_WORD *)(a1 + 8) )
      return v11;
    while ( 1 )
    {
      v6 = 0;
      v7 = v1;
      v8 = v3;
      if ( v12 )
      {
        v9 = v12;
        do
        {
          v10 = *v7;
          ++v8;
          ++v7;
          --v9;
          *(_BYTE *)(v8 - 1) = (int)v10;
        }
        while ( v9 );
        if ( v12 >= 4u )
          goto LABEL_16;
        v6 = v12;
      }
      _memset(v8, 0, (unsigned __int16)(4 - v6));
LABEL_16:
      v1 = (float *)((char *)v1 + *(_DWORD *)(a1 + 0x18));
      v3 += *(_DWORD *)(a1 + 0x20);
      v11 += *(_DWORD *)(a1 + 0x1C);
      if ( (unsigned __int16)++v13 >= *(_WORD *)(a1 + 8) )
        return v11;
    }
  }
  if ( !*(_WORD *)(a1 + 8) )
    return v11;
  v4 = *(_DWORD *)(a1 + 0x1C);
  do
  {
    _memset(v3, 0, v4);
    v4 = *(_DWORD *)(a1 + 0x1C);
    v3 += *(_DWORD *)(a1 + 0x20);
    v11 += v4;
    ++v2;
  }
  while ( (unsigned __int16)v2 < *(_WORD *)(a1 + 8) );
  return v11;
}
