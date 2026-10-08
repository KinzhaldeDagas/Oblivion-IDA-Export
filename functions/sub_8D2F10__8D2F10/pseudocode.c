int *__cdecl sub_8D2F10(int a1, int a2, int *a3)
{
  int v3; // esi
  __m128 *v4; // ecx
  int v5; // edi
  __m128 *v6; // edx
  __int128 v7; // xmm0
  float v8; // edx
  double v9; // st7
  int *result; // eax
  int v11; // edx
  int v12; // ecx
  __m128 *v13; // [esp-8h] [ebp-58h]
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

  v3 = *(_DWORD *)(a2 + 4); /*0x8d2f21*/
  v4 = *(__m128 **)(v3 + 0x50); /*0x8d2f24*/
  v5 = *(_DWORD *)(a2 + 8); /*0x8d2f28*/
  v6 = *(__m128 **)(v5 + 0x50); /*0x8d2f2b*/
  v7 = *(_OWORD *)(a2 + 0x30); /*0x8d2f2e*/
  v21 = *(_DWORD *)(a2 + 0xC); /*0x8d2f32*/
  v23 = *(_DWORD *)(a1 + 0xB0); /*0x8d2f3f*/
  v14 = *(unsigned __int8 *)(a2 + 0x16); /*0x8d2f53*/
  v13 = v6; /*0x8d2f62*/
  v8 = *(float *)a2; /*0x8d2f63*/
  v19 = (double)*(unsigned __int16 *)(a2 + 0x14) * flt_A9A028; /*0x8d2f65*/
  v9 = (double)v14 * flt_A9A02C; /*0x8d2f74*/
  v18 = v7; /*0x8d2f7e*/
  v20 = v9; /*0x8d2f83*/
  v22 = 0x3DCCCCCD; /*0x8d2f87*/
  sub_91F770((int)&v15, v5, v3, (__m128 *)(a2 + 0x20), v8, (float *)&v18, v4, v13, (int)&v15); /*0x8d2f8f*/
  if ( v16 >= (double)*(float *)&SrcStr ) /*0x8d2fa6*/
  {
    if ( v17 < (double)*(float *)&SrcStr ) /*0x8d3038*/
    {
      result = a3; /*0x8d3042*/
      v11 = *a3; /*0x8d3045*/
      v12 = a3[1]; /*0x8d3047*/
      if ( *(_BYTE *)(v5 + 0x92) ) /*0x8d303a*/
      {
        *(_DWORD *)(v11 + 4 * v12) = v3; /*0x8d304c*/
        ++a3[1]; /*0x8d304f*/
        return result; /*0x8d3058*/
      }
      goto LABEL_18; /*0x8d304a*/
    }
    if ( !*(_BYTE *)(v3 + 0x92) && (*(_BYTE *)(v5 + 0x92) || v16 <= (double)v17) ) /*0x8d307a*/
    {
      *(_DWORD *)(*a3 + 4 * a3[1]++) = v3; /*0x8d3084*/
      return a3; /*0x8d3090*/
    }
    result = a3; /*0x8d3091*/
    goto LABEL_17; /*0x8d3091*/
  }
  if ( v17 >= (double)*(float *)&SrcStr ) /*0x8d2fb7*/
  {
    result = a3; /*0x8d2ffd*/
    v11 = *a3; /*0x8d3000*/
    v12 = a3[1]; /*0x8d3002*/
    if ( !*(_BYTE *)(v3 + 0x92) ) /*0x8d2ff5*/
    {
      *(_DWORD *)(v11 + 4 * v12) = v3; /*0x8d300b*/
      ++a3[1]; /*0x8d300e*/
      return result; /*0x8d3017*/
    }
    goto LABEL_18; /*0x8d3005*/
  }
  result = a3; /*0x8d2fc1*/
  if ( !*(_BYTE *)(v3 + 0x92) ) /*0x8d2fb9*/
    *(_DWORD *)(*a3 + 4 * a3[1]++) = v3; /*0x8d2fcb*/
  if ( !*(_BYTE *)(v5 + 0x92) ) /*0x8d2fd1*/
  {
LABEL_17:
    v11 = *result; /*0x8d3094*/
    v12 = result[1]; /*0x8d3096*/
LABEL_18:
    *(_DWORD *)(v11 + 4 * v12) = v5; /*0x8d3099*/
    ++result[1]; /*0x8d309c*/
  }
  return result; /*0x8d3011*/
}
