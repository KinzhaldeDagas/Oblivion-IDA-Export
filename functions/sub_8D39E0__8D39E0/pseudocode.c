int __cdecl sub_8D39E0(int *a1, _DWORD *a2, int *a3, int *a4, signed int a5, _DWORD *a6, _DWORD *a7, const void **a8)
{
  int v8; // eax
  _DWORD *v9; // ecx
  __int128 *v10; // edx
  unsigned int v11; // ebx
  _DWORD *v12; // edi
  char *v13; // esi
  int v14; // esi
  __m128 *v15; // ecx
  int v16; // eax
  _OWORD *v17; // edx
  __m128 v18; // xmm0
  int *v19; // eax
  int v20; // ebx
  int v21; // edi
  int v22; // eax
  int v23; // edi
  int v24; // ebx
  int v25; // ecx
  int *v26; // eax
  int *v27; // ecx
  int v28; // edi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int *v33; // eax
  int *v34; // ecx
  int v35; // edi
  int v36; // edx
  int v37; // ecx
  bool v38; // cc
  int result; // eax
  int v40; // esi
  __int128 *i; // ecx
  __int128 v42; // xmm0
  int v43; // eax
  __int128 *v44; // ecx
  __int128 v45; // xmm0
  _DWORD *v46; // ecx
  bool v47; // zf
  int v48; // [esp+0h] [ebp-440h]
  int v49; // [esp+4h] [ebp-43Ch]
  int v50; // [esp+8h] [ebp-438h]
  float v51; // [esp+Ch] [ebp-434h]
  float v52; // [esp+10h] [ebp-430h]
  float v53; // [esp+14h] [ebp-42Ch]
  int v54; // [esp+14h] [ebp-42Ch]
  int v55; // [esp+18h] [ebp-428h]
  int v56; // [esp+1Ch] [ebp-424h]
  int v57; // [esp+20h] [ebp-420h] BYREF
  int v58; // [esp+24h] [ebp-41Ch]
  int v59; // [esp+28h] [ebp-418h]
  int v60; // [esp+2Ch] [ebp-414h]
  int v61; // [esp+30h] [ebp-410h]
  int v62; // [esp+34h] [ebp-40Ch]
  int v63; // [esp+38h] [ebp-408h]
  int v64; // [esp+3Ch] [ebp-404h]
  int v65[256]; // [esp+40h] [ebp-400h] BYREF

  v8 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v9 = *(_DWORD **)(v8 + 0x19C);
  v10 = (__int128 *)v9[8];
  v11 = v9[0xB];
  v64 = v8;
  v12 = a7;
  v13 = (char *)v10 + ((0x20 * a7[1] + 0x10) & 0xFFFFFFF0);
  if ( (unsigned int)v13 > v11 )
  {
    v55 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v9 + 0xC))(v9, (0x20 * a7[1] + 0x10) & 0xFFFFFFF0);
    v10 = (__int128 *)v55;
  }
  else
  {
    v9[8] = v13;
    v55 = (int)v10;
  }
  v14 = 0;
  if ( (int)a7[1] > 0 )
  {
    do
    {
      v15 = *(__m128 **)(*(_DWORD *)(*a7 + 4 * v14) + 0x50);
      v16 = a1[3] + v15->m128_i32[2];
      *v10 = *(_OWORD *)(v16 + 0x10);
      v17 = v10 + 1;
      *v17 = *(_OWORD *)(v16 + 0x20);
      v18 = _mm_sub_ps(v15[6], v15[5]);
      *(__m128 *)(v16 + 0x10) = v18;
      *(__m128 *)(v16 + 0x10) = _mm_mul_ps(
                                  _mm_shuffle_ps((__m128)v15[6].m128_u32[3], (__m128)v15[6].m128_u32[3], 0),
                                  v18);
      v10 = v17 + 1;
      *(__m128 *)(v16 + 0x20) = _mm_mul_ps(
                                  _mm_shuffle_ps((__m128)v15[6].m128_u32[3], (__m128)v15[6].m128_u32[3], 0),
                                  v15[0xA]);
      ++v14;
    }
    while ( v14 < a7[1] );
    v10 = (__int128 *)v55;
  }
  v19 = a3;
  v56 = *a4;
  if ( *a4 < a3[1] )
  {
    v20 = 0xC * *a4;
    v53 = *(float *)&v20;
    do
    {
      v21 = *v19;
      v22 = *(_DWORD *)(*v19 + v20);
      v23 = v20 + v21;
      if ( a5 <= *(unsigned __int8 *)(v22 + 0x18) )
      {
        v24 = *(_DWORD *)(*(_DWORD *)(v22 + 0x24)
                        + 4
                        + 4
                        * (*(_BYTE *)(*(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(v22 + 0x24) + 4) + 0x8C) + *a6) == 8));
        if ( *(_BYTE *)(*(unsigned __int16 *)(v24 + 0x8C) + *a6) == 4 )
        {
          v25 = *a4;
          v20 = LODWORD(v53);
          ++*a4;
          v26 = (int *)(LODWORD(v53) + *a3);
          v27 = (int *)(*a3 + 0xC * v25);
          v58 = *v27;
          v28 = v27[1];
          v60 = v27[2];
          v59 = v28;
          *v27 = *v26;
          v27[1] = v26[1];
          v27[2] = v26[2];
          v29 = v59;
          *v26 = v58;
          v30 = v60;
          v26[1] = v29;
          v26[2] = v30;
        }
        else
        {
          v31 = sub_91FF70(a1[1], *(_DWORD **)(v23 + 4), 0x100, (int)v65, v48, v49, v50, v51, v52, v53, v55);
          sub_8D3980(&v57, *(float *)(*a1 + 8), (float *)v23, (int)v65, v31, a2);
          if ( (_BYTE)v57 )
          {
            v20 = v54;
          }
          else
          {
            *(_BYTE *)(*(unsigned __int16 *)(v24 + 0x8C) + *a6) = 4;
            if ( a8[1] == (const void *)((unsigned int)a8[2] & 0x3FFFFFFF) )
              sub_8A6EE0(a8, 4);
            *((_DWORD *)*a8 + (_DWORD)a8[1]) = v24;
            v20 = v54;
            a8[1] = (char *)a8[1] + 1;
            v32 = (*a4)++;
            v33 = (int *)(v54 + *a3);
            v34 = (int *)(*a3 + 0xC * v32);
            v61 = *v34;
            v35 = v34[1];
            v63 = v34[2];
            v62 = v35;
            *v34 = *v33;
            v34[1] = v33[1];
            v34[2] = v33[2];
            v36 = v62;
            *v33 = v61;
            v37 = v63;
            v33[1] = v36;
            v33[2] = v37;
          }
        }
      }
      v19 = a3;
      v20 += 0xC;
      v38 = ++v56 < a3[1];
      v53 = *(float *)&v20;
    }
    while ( v38 );
    v10 = (__int128 *)v55;
    v12 = a7;
  }
  result = v12[1];
  v40 = 0;
  for ( i = v10; v40 < result; ++v40 )
  {
    v42 = *i;
    v43 = a1[3] + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*v12 + 4 * v40) + 0x50) + 8);
    v44 = i + 1;
    *(_OWORD *)(v43 + 0x10) = v42;
    v45 = *v44;
    i = v44 + 1;
    *(_OWORD *)(v43 + 0x20) = v45;
    result = v12[1];
  }
  v46 = *(_DWORD **)(v64 + 0x19C);
  v47 = v10 == (__int128 *)v46[0xA];
  v46[8] = v10;
  if ( v47 )
    return (*(int (__thiscall **)(_DWORD *, __int128 *))(*v46 + 0x10))(v46, v10);
  return result;
}
