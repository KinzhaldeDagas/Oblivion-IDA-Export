int *__cdecl sub_8D2F10(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // edx
  __int128 v7; // xmm0
  float v8; // edx
  double v9; // st7
  int *result; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // [esp-8h] [ebp-58h]
  int v14; // [esp+10h] [ebp-40h]
  int v15; // [esp+14h] [ebp-3Ch] BYREF
  float v16; // [esp+18h] [ebp-38h]
  float v17; // [esp+1Ch] [ebp-34h]
  __int128 v18; // [esp+20h] [ebp-30h] BYREF
  float v19; // [esp+30h] [ebp-20h]
  float v20; // [esp+34h] [ebp-1Ch]
  int v21; // [esp+38h] [ebp-18h]
  int v22; // [esp+3Ch] [ebp-14h]
  int v23; // [esp+40h] [ebp-10h]

  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(v3 + 0x50);
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(_DWORD *)(v5 + 0x50);
  v7 = *(_OWORD *)(a2 + 0x30);
  v21 = *(_DWORD *)(a2 + 0xC);
  v23 = *(_DWORD *)(a1 + 0xB0);
  v14 = *(unsigned __int8 *)(a2 + 0x16);
  v13 = v6;
  v8 = *(float *)a2;
  v19 = (double)*(unsigned __int16 *)(a2 + 0x14) * flt_A9A028;
  v9 = (double)v14 * flt_A9A02C;
  v18 = v7;
  v20 = v9;
  v22 = 0x3DCCCCCD;
  sub_91F770((int)&v15, v5, v3, a2 + 0x20, v8, (int)&v18, v4, v13, (int)&v15);
  if ( v16 >= (double)*(float *)&SrcStr )
  {
    if ( v17 < (double)*(float *)&SrcStr )
    {
      result = a3;
      v11 = *a3;
      v12 = a3[1];
      if ( *(_BYTE *)(v5 + 0x92) )
      {
        *(_DWORD *)(v11 + 4 * v12) = v3;
        ++a3[1];
        return result;
      }
      goto LABEL_18;
    }
    if ( !*(_BYTE *)(v3 + 0x92) && (*(_BYTE *)(v5 + 0x92) || v16 <= (double)v17) )
    {
      *(_DWORD *)(*a3 + 4 * a3[1]++) = v3;
      return a3;
    }
    result = a3;
    goto LABEL_17;
  }
  if ( v17 >= (double)*(float *)&SrcStr )
  {
    result = a3;
    v11 = *a3;
    v12 = a3[1];
    if ( !*(_BYTE *)(v3 + 0x92) )
    {
      *(_DWORD *)(v11 + 4 * v12) = v3;
      ++a3[1];
      return result;
    }
    goto LABEL_18;
  }
  result = a3;
  if ( !*(_BYTE *)(v3 + 0x92) )
    *(_DWORD *)(*a3 + 4 * a3[1]++) = v3;
  if ( !*(_BYTE *)(v5 + 0x92) )
  {
LABEL_17:
    v11 = *result;
    v12 = result[1];
LABEL_18:
    *(_DWORD *)(v11 + 4 * v12) = v5;
    ++result[1];
  }
  return result;
}
