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

  v23 = 0;
  v4 = a3 * hkFactor;
  v24 = 0;
  v25 = 0x80000000;
  v26 = v4;
  v30 = 0;
  sub_8A6E40((const void **)&v23, 0x12, 0x10);
  v5 = hkFactor;
  *(float *)&v28 = *a2 * v5;
  *((float *)&v28 + 1) = a2[1] * v5;
  *((float *)&v28 + 2) = a2[2] * v5;
  v6 = v26;
  *((float *)&v28 + 2) = *((float *)&v28 + 2) - v26;
  if ( v24 == (v25 & 0x3FFFFFFF) )
  {
    sub_8A6EE0((int)&v23, 0x10);
    v5 = hkFactor;
    v6 = v26;
  }
  v7 = v28;
  v8 = &v23[0x10 * v24];
  v9 = a4 + dbl_A2FC80 + *((float *)&v28 + 2);
  ++v24;
  *((float *)&v28 + 2) = v9;
  *(_OWORD *)v8 = v7;
  for ( i = 0; i < 0x20; i += 4 )
  {
    v11 = *(float *)(i + 0xB2E788) * v6;
    *(__int128 *)v29 = v28;
    v29[0] = v11 + *(float *)&v28;
    v29[1] = *(float *)(i + 0xB2E7A8) * v6 + *((float *)&v28 + 1);
    if ( v24 == (v25 & 0x3FFFFFFF) )
    {
      sub_8A6EE0((int)&v23, 0x10);
      v5 = hkFactor;
      v6 = v26;
    }
    v12 = &v23[0x10 * v24++];
    *(_OWORD *)v12 = *(_OWORD *)v29;
  }
  v13 = 0;
  *(float *)&v28 = *a1 * v5;
  *((float *)&v28 + 1) = a1[1] * v5;
  v14 = v6;
  v15 = v5 * a1[2];
  v16 = v14;
  *((float *)&v28 + 2) = v15;
  v27 = dbl_A2FAA0 * v14;
  *((float *)&v28 + 2) = v27 + *((float *)&v28 + 2);
  do
  {
    v17 = *(float *)(v13 + 0xB2E788) * v16;
    *(__int128 *)v29 = v28;
    v29[0] = v17;
    v29[1] = *(float *)(v13 + 0xB2E7A8) * v16;
    if ( v24 == (v25 & 0x3FFFFFFF) )
    {
      sub_8A6EE0((int)&v23, 0x10);
      v16 = v26;
    }
    v18 = &v23[0x10 * v24];
    v13 += 4;
    ++v24;
    *(_OWORD *)v18 = *(_OWORD *)v29;
  }
  while ( v13 < 0x20 );
  *((float *)&v28 + 2) = *((float *)&v28 + 2) + v27;
  if ( v24 == (v25 & 0x3FFFFFFF) )
    sub_8A6EE0((int)&v23, 0x10);
  v19 = &v23[0x10 * v24++];
  *(__int128 *)v19 = v28;
  v20 = sub_8D2770((int *)&v23);
  v30 = 0xFFFFFFFF;
  if ( v25 >= 0 )
  {
    v21 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v21 )
      v21 = dword_BA7D9C;
    sub_8A75D0(v21, v23, 0x10 * v25, 0x14);
  }
  return v20;
}
