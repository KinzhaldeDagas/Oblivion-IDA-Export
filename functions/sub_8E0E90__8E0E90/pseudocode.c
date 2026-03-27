unsigned int __thiscall sub_8E0E90(_DWORD *this, int a2, int a3, int a4, __int16 a5, _OWORD *a6)
{
  _DWORD *v6; // ebx
  _OWORD *v7; // ecx
  int v8; // eax
  _OWORD *v9; // esi
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // ecx
  unsigned __int16 *v15; // esi
  bool v16; // zf
  int v17; // edi
  int v18; // esi
  int v19; // eax
  int v20; // ecx
  int v21; // edi
  unsigned int v22; // esi
  unsigned int v23; // eax
  int v24; // eax
  int v25; // ebx
  int v26; // ecx
  int v27; // esi
  unsigned int result; // eax
  unsigned int k; // edi
  _WORD *v30; // [esp+Ch] [ebp-14h]
  int v31; // [esp+10h] [ebp-10h]
  unsigned int i; // [esp+10h] [ebp-10h]
  int v34; // [esp+18h] [ebp-8h]
  unsigned int j; // [esp+18h] [ebp-8h]
  int v36; // [esp+1Ch] [ebp-4h]

  v6 = this;
  v36 = *(unsigned __int16 *)(a4 + 0xA);
  v34 = *(unsigned __int16 *)(a4 + 8);
  v7 = a6;
  if ( a2 >> 7 >= 0 )
  {
    v8 = (a2 >> 7) + 1;
    do
    {
      v9 = v7++;
      --v8;
      *v9 = 0;
    }
    while ( v8 );
  }
  v10 = v6[0x13] + 4;
  if ( v6[0x1C] )
  {
    v11 = 0x10 - v6[0x1D];
    if ( a3 >> v11 > 0 )
    {
      v12 = v6[0x1E];
      v13 = 0x10 * (a3 >> v11);
      v14 = *(unsigned __int16 *)(v13 + v12 - 0x10);
      v15 = (unsigned __int16 *)(v13 + v12 - 0x10);
      *((_DWORD *)a6 + (v14 >> 5)) ^= 1 << (v14 & 0x1F);
      v30 = *((_WORD **)v15 + 1);
      if ( *((_DWORD *)v15 + 2) - 1 >= 0 )
      {
        v31 = *((_DWORD *)v15 + 2);
        do
        {
          if ( *v30 != a5 )
            *((_DWORD *)a6 + ((int)(unsigned __int16)*v30 >> 5)) ^= 1 << (*v30 & 0x1F);
          v16 = v31 == 1;
          ++v30;
          --v31;
        }
        while ( !v16 );
      }
      v17 = *v15;
      v18 = v6[0x10];
      v19 = v6[0x13];
      v17 *= 0x10;
      v20 = *(unsigned __int16 *)(v17 + v18 + 8);
      v21 = v18 + v17;
      v22 = v19 + 4 * v20 + 4;
      v23 = v19 + 4 * *(unsigned __int16 *)(v21 + 0xA);
      for ( i = v23; v22 < v23; v22 += 4 )
      {
        if ( (*(_BYTE *)v22 & 1) == 0 )
        {
          v24 = *(unsigned __int16 *)(v22 + 2);
          v25 = 1 << (v24 & 0x1F);
          v24 >>= 5;
          v26 = ~v25 & *((_DWORD *)a6 + v24);
          v6 = this;
          *((_DWORD *)a6 + v24) = v26;
          v23 = i;
        }
      }
      v10 = v6[0x13] + 4 * *(unsigned __int16 *)(v21 + 8) + 4;
    }
  }
  for ( j = v6[0x13] + 4 * v34; v10 < j; *((_DWORD *)a6 + (v27 >> 5)) ^= 1 << (v27 & 0x1F) )
  {
    v27 = *(unsigned __int16 *)(v10 + 2);
    v10 += 4;
  }
  result = v10 + 4;
  for ( k = v6[0x13] + 4 * v36; result < k; result += 4 )
  {
    if ( (*(_BYTE *)result & 1) == 0 )
      *((_DWORD *)a6 + ((int)*(unsigned __int16 *)(result + 2) >> 5)) ^= 1 << (*(_WORD *)(result + 2) & 0x1F);
  }
  return result;
}
