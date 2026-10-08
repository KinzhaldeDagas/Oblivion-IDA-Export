int __cdecl sub_92EA40(_DWORD *a1, int *a2, __m128 *a3)
{
  __int32 v3; // ecx
  int v4; // edx
  int v5; // eax
  int result; // eax
  int v7; // ebx
  int v8; // edi
  float x; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  double v14; // st7
  double v15; // st6
  int v16; // eax
  __m128 v17; // [esp+8h] [ebp-60h] BYREF
  float v18; // [esp+18h] [ebp-50h]
  int v19; // [esp+1Ch] [ebp-4Ch]
  int v20; // [esp+20h] [ebp-48h]
  int v21; // [esp+24h] [ebp-44h]
  float v22; // [esp+28h] [ebp-40h]
  int v23; // [esp+2Ch] [ebp-3Ch]
  int v24; // [esp+30h] [ebp-38h]
  int v25; // [esp+34h] [ebp-34h]
  __m128 v26; // [esp+38h] [ebp-30h] BYREF
  __int128 v27; // [esp+48h] [ebp-20h]
  __int128 v28; // [esp+58h] [ebp-10h]

  v3 = *a2; /*0x92ea4c*/
  v4 = a2[1]; /*0x92ea4e*/
  v5 = a2[2]; /*0x92ea51*/
  v28 = 0; /*0x92ea5c*/
  DWORD2(v28) = v5; /*0x92ea61*/
  result = a1[1]; /*0x92ea65*/
  v7 = 0; /*0x92ea68*/
  v26 = 0; /*0x92ea6c*/
  v27 = 0; /*0x92ea71*/
  v26.m128_i32[0] = v3; /*0x92ea77*/
  DWORD1(v27) = v4; /*0x92ea7b*/
  if ( result > 0 ) /*0x92ea7f*/
  {
    v8 = 0; /*0x92ea85*/
    do /*0x92eb3b*/
    {
      x = unk_BA7A40.x; /*0x92ea95*/
      v10 = v8 + *a1; /*0x92ea9b*/
      v17.m128_i32[0] = *(_DWORD *)v10; /*0x92ea9d*/
      v17.m128_u64[1] = LODWORD(x); /*0x92eaa3*/
      v11 = dword_BA7A44[0]; /*0x92eaa7*/
      v17.m128_f32[1] = x; /*0x92eaad*/
      v18 = *(float *)(v10 + 4); /*0x92eabc*/
      v12 = v11; /*0x92eac0*/
      v19 = v11; /*0x92eac2*/
      v13 = dword_BA7A44[1]; /*0x92eac6*/
      v20 = v12; /*0x92eacc*/
      v21 = 0; /*0x92ead0*/
      v22 = *(float *)(v10 + 8); /*0x92eadb*/
      v23 = v13; /*0x92eae5*/
      v24 = v13; /*0x92eaee*/
      v25 = 0; /*0x92eaf2*/
      hkMatrix3_MultiplyInPlace(&v17, &v26); /*0x92eafa*/
      v14 = v22; /*0x92eaff*/
      v15 = v18; /*0x92eb05*/
      v16 = v8 + *a1; /*0x92eb10*/
      *(_DWORD *)v16 = v17.m128_i32[0]; /*0x92eb12*/
      *(float *)(v16 + 4) = v15; /*0x92eb14*/
      *(float *)(v16 + 8) = v14; /*0x92eb17*/
      *(_DWORD *)(v16 + 0xC) = 0; /*0x92eb1a*/
      *(__m128 *)(v8 + *a1) = _mm_add_ps(*(__m128 *)(*a1 + v8), *a3); /*0x92eb2f*/
      result = a1[1]; /*0x92eb32*/
      ++v7; /*0x92eb35*/
      v8 += 0x10; /*0x92eb36*/
    }
    while ( v7 < result ); /*0x92eb3b*/
  }
  return result; /*0x92eb43*/
}
