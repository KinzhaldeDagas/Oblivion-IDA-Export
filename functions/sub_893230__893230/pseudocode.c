bhkRefObject *__cdecl sub_893230(float *a1, float *a2, float a3, float a4)
{
  double v4; // st7
  double v5; // st7
  double v6; // st6
  __int128 v7; // xmm0
  char *v8; // eax
  double v9; // st5
  unsigned int i; // esi
  double v11; // st5
  char *v12; // eax
  unsigned int v13; // esi
  double v14; // rt2
  double v15; // st6
  double v16; // st7
  double v17; // st6
  char *v18; // eax
  char *v19; // eax
  bhkRefObject *v20; // esi
  int v21; // ecx
  char *v23; // [esp+Ch] [ebp-58h] BYREF
  int v24; // [esp+10h] [ebp-54h]
  int v25; // [esp+14h] [ebp-50h]
  float v26; // [esp+18h] [ebp-4Ch]
  double v27; // [esp+1Ch] [ebp-48h]
  __int128 v28; // [esp+24h] [ebp-40h]
  float v29[7]; // [esp+34h] [ebp-30h]
  unsigned int v30; // [esp+60h] [ebp-4h]

  v23 = 0; /*0x893268*/
  v4 = a3 * hkFactor; /*0x893270*/
  v24 = 0; /*0x893276*/
  v25 = 0x80000000; /*0x89327e*/
  v26 = v4; /*0x893286*/
  v30 = 0; /*0x893293*/
  sub_8A6E40((const void **)&v23, 0x12, 0x10); /*0x89329b*/
  v5 = hkFactor; /*0x8932be*/
  *(float *)&v28 = *a2 * v5; /*0x8932c0*/
  *((float *)&v28 + 1) = a2[1] * v5; /*0x8932c9*/
  *((float *)&v28 + 2) = a2[2] * v5; /*0x8932d2*/
  v6 = v26; /*0x8932e2*/
  *((float *)&v28 + 2) = *((float *)&v28 + 2) - v26; /*0x8932e4*/
  if ( v24 == (v25 & 0x3FFFFFFF) ) /*0x8932e8*/
  {
    sub_8A6EE0((const void **)&v23, 0x10); /*0x8932f5*/
    v5 = hkFactor; /*0x8932fa*/
    v6 = v26; /*0x893300*/
  }
  v7 = v28; /*0x893314*/
  v8 = &v23[0x10 * v24]; /*0x89331e*/
  v9 = a4 + dbl_A2FC80 + *((float *)&v28 + 2); /*0x893322*/
  ++v24; /*0x893329*/
  *((float *)&v28 + 2) = v9; /*0x89332d*/
  *(_OWORD *)v8 = v7; /*0x893331*/
  for ( i = 0; i < 0x20; i += 4 ) /*0x893334*/
  {
    v11 = *(float *)(i + 0xB2E788) * v6; /*0x893345*/
    *(__int128 *)v29 = v28; /*0x893347*/
    v29[0] = v11 + *(float *)&v28; /*0x893359*/
    v29[1] = *(float *)(i + 0xB2E7A8) * v6 + *((float *)&v28 + 1); /*0x893369*/
    if ( v24 == (v25 & 0x3FFFFFFF) ) /*0x89336d*/
    {
      sub_8A6EE0((const void **)&v23, 0x10); /*0x89337a*/
      v5 = hkFactor; /*0x89337f*/
      v6 = v26; /*0x893385*/
    }
    v12 = &v23[0x10 * v24++]; /*0x89339a*/
    *(_OWORD *)v12 = *(_OWORD *)v29; /*0x8933ab*/
  }
  v13 = 0; /*0x8933b5*/
  *(float *)&v28 = *a1 * v5; /*0x8933b9*/
  *((float *)&v28 + 1) = a1[1] * v5; /*0x8933c2*/
  v14 = v6; /*0x8933cb*/
  v15 = v5 * a1[2]; /*0x8933cb*/
  v16 = v14; /*0x8933cb*/
  *((float *)&v28 + 2) = v15; /*0x8933cd*/
  v27 = dbl_A2FAA0 * v14; /*0x8933d9*/
  *((float *)&v28 + 2) = v27 + *((float *)&v28 + 2); /*0x8933e1*/
  do /*0x89344e*/
  {
    v17 = *(float *)(v13 + 0xB2E788) * v16; /*0x8933f4*/
    *(__int128 *)v29 = v28; /*0x8933f6*/
    v29[0] = v17; /*0x893405*/
    v29[1] = *(float *)(v13 + 0xB2E7A8) * v16; /*0x893411*/
    if ( v24 == (v25 & 0x3FFFFFFF) ) /*0x893415*/
    {
      sub_8A6EE0((const void **)&v23, 0x10); /*0x893420*/
      v16 = v26; /*0x893425*/
    }
    v18 = &v23[0x10 * v24]; /*0x89343a*/
    v13 += 4; /*0x893441*/
    ++v24; /*0x893447*/
    *(_OWORD *)v18 = *(_OWORD *)v29; /*0x89344b*/
  }
  while ( v13 < 0x20 ); /*0x89344e*/
  *((float *)&v28 + 2) = *((float *)&v28 + 2) + v27; /*0x893468*/
  if ( v24 == (v25 & 0x3FFFFFFF) ) /*0x89346c*/
    sub_8A6EE0((const void **)&v23, 0x10); /*0x893475*/
  v19 = &v23[0x10 * v24++]; /*0x89348b*/
  *(__int128 *)v19 = v28; /*0x893496*/
  v20 = sub_8D2770((int *)&v23); /*0x8934a3*/
  v30 = 0xFFFFFFFF; /*0x8934ae*/
  if ( v25 >= 0 ) /*0x8934b6*/
  {
    v21 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8934c8*/
    if ( !v21 ) /*0x8934d0*/
      v21 = unk_BA7D9C; /*0x8934d2*/
    sub_8A75D0(v21, v23, 0x10 * v25, 0x14); /*0x8934e8*/
  }
  return v20; /*0x8934ef*/
}
