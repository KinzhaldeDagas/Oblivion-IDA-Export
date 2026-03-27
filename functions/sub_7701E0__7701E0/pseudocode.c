int __cdecl sub_7701E0(int a1)
{
  float *v2; // ebx
  _WORD *v3; // ebp
  int v4; // edi
  int v5; // eax
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // ax
  _WORD *v11; // edi
  unsigned int v12; // ecx
  char v13; // cf
  _WORD *v14; // edi
  int i; // ecx
  int v16; // [esp+10h] [ebp-18h]
  int v17; // [esp+14h] [ebp-14h]
  unsigned __int16 v18; // [esp+18h] [ebp-10h]
  float *v19; // [esp+1Ch] [ebp-Ch]
  int v20; // [esp+20h] [ebp-8h]
  unsigned __int16 v21; // [esp+24h] [ebp-4h]
  unsigned __int16 v22; // [esp+2Ch] [ebp+4h]

  v2 = *(float **)(a1 + 0x10);
  v3 = *(_WORD **)(a1 + 0x24);
  v4 = 0;
  v16 = 0;
  v19 = v2;
  if ( v2 )
  {
    v7 = *(_WORD *)(a1 + 4);
    v8 = 2 * (*(_DWORD *)a1 != 6) + 2;
    v18 = v8;
    if ( (__int16)(v7 - v8) <= 0 )
    {
      v22 = *(_WORD *)(a1 + 4);
      v9 = v7;
    }
    else
    {
      v9 = 2 * (*(_DWORD *)a1 != 6) + 2;
      v22 = v9;
    }
    v20 = 0;
    if ( *(_WORD *)(a1 + 8) )
    {
      do
      {
        v10 = 0;
        v11 = v3;
        if ( v9 )
        {
          v17 = v9;
          v21 = v9;
          do
          {
            *v11++ = Double_To_SInt32(*v2++);
            --v17;
          }
          while ( v17 );
          v10 = v21;
          v9 = v22;
          v2 = v19;
          v8 = v18;
        }
        if ( v10 < v8 )
        {
          v12 = (unsigned __int16)(v8 - v10);
          v13 = v12 & 1;
          v12 >>= 1;
          memset(v11, 0, 4 * v12);
          v14 = &v11[2 * v12];
          for ( i = v13; i; --i )
            *v14++ = 0;
          v8 = v18;
        }
        v16 += *(_DWORD *)(a1 + 0x1C);
        v2 = (float *)((char *)v2 + *(_DWORD *)(a1 + 0x18));
        v3 = (_WORD *)((char *)v3 + *(_DWORD *)(a1 + 0x20));
        v13 = (unsigned __int16)(v20 + 1) < *(_WORD *)(a1 + 8);
        v19 = v2;
        ++v20;
      }
      while ( v13 );
      return v16;
    }
    return v4;
  }
  if ( !*(_WORD *)(a1 + 8) )
    return v4;
  v5 = *(_DWORD *)(a1 + 0x1C);
  do
  {
    _memset(v3, 0, v5);
    v5 = *(_DWORD *)(a1 + 0x1C);
    v3 = (_WORD *)((char *)v3 + *(_DWORD *)(a1 + 0x20));
    v2 = (float *)((char *)v2 + 1);
    v4 += v5;
  }
  while ( (unsigned __int16)v2 < *(_WORD *)(a1 + 8) );
  return v4;
}
