char *__cdecl sub_9531A0(int a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // edi
  unsigned int v6; // esi
  int v7; // ebp
  int v8; // eax
  char *v9; // edi
  int j; // eax
  int k; // ebp
  unsigned int v12; // esi
  int v13; // eax
  int v14; // esi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v17; // esi
  _DWORD *v18; // edi
  _DWORD *v19; // [esp+10h] [ebp-84h] BYREF
  int v20; // [esp+14h] [ebp-80h]
  int v21; // [esp+18h] [ebp-7Ch]
  bool v22; // [esp+1Fh] [ebp-75h] BYREF
  int v23; // [esp+20h] [ebp-74h] BYREF
  int i; // [esp+24h] [ebp-70h] BYREF
  _DWORD *v25; // [esp+28h] [ebp-6Ch] BYREF
  unsigned int v26; // [esp+2Ch] [ebp-68h]
  int v27; // [esp+30h] [ebp-64h]
  char *v28[3]; // [esp+34h] [ebp-60h] BYREF
  _DWORD *v29; // [esp+40h] [ebp-54h] BYREF
  int v30; // [esp+44h] [ebp-50h]
  unsigned int v31; // [esp+48h] [ebp-4Ch]
  int v32; // [esp+4Ch] [ebp-48h]
  int v33; // [esp+50h] [ebp-44h]
  unsigned int v34; // [esp+54h] [ebp-40h]
  int v35; // [esp+58h] [ebp-3Ch]
  int v36; // [esp+5Ch] [ebp-38h]
  unsigned int v37; // [esp+60h] [ebp-34h]
  int v38; // [esp+64h] [ebp-30h]
  int v39; // [esp+68h] [ebp-2Ch]
  unsigned int v40; // [esp+6Ch] [ebp-28h]
  int v41; // [esp+70h] [ebp-24h]
  _DWORD v42[3]; // [esp+74h] [ebp-20h] BYREF
  _DWORD v43[5]; // [esp+80h] [ebp-14h] BYREF

  v2 = 0; /*0x9531ae*/
  v25 = 0; /*0x9531ba*/
  v26 = 0; /*0x9531be*/
  v27 = 0x80000000; /*0x9531c2*/
  sub_8BC270(v42, (int)&v25); /*0x9531c6*/
  v29 = 0; /*0x9531e0*/
  v30 = 0; /*0x9531e4*/
  v31 = 0x80000000; /*0x9531e8*/
  v32 = 0; /*0x9531ec*/
  v33 = 0; /*0x9531f0*/
  v34 = 0x80000000; /*0x9531f4*/
  v35 = 0; /*0x9531f8*/
  v36 = 0; /*0x9531fc*/
  v37 = 0x80000000; /*0x953200*/
  v38 = 0; /*0x953204*/
  v39 = 0; /*0x953208*/
  v40 = 0x80000000; /*0x95320c*/
  v41 = 0; /*0x953210*/
  v19 = 0; /*0x953214*/
  v20 = 0; /*0x953218*/
  v21 = 0x80000000; /*0x95321c*/
  sub_8A6EE0((const void **)&v19, 8); /*0x953220*/
  v19[2 * v20] = a1; /*0x95322d*/
  v19[2 * v20++ + 1] = a2; /*0x953238*/
  sub_8B0E10(v28, 0); /*0x95324c*/
  sub_90BBA0(&i, &dword_B2FDE4); /*0x95325a*/
  sub_90BBA0(&v23, &dword_B2FDE4); /*0x953268*/
  sub_953530(v43, &v23, &i); /*0x95327e*/
  v3 = 0; /*0x953287*/
  for ( i = 0; v3 < v20; i = v3 ) /*0x95328f*/
  {
    sub_8B0E80(v28, v19[2 * v3], v26); /*0x9532a6*/
    v4 = v33; /*0x9532b3*/
    sub_954620( /*0x9532d1*/
      (char *)v43,
      v19[2 * v3],
      (_DWORD *)v19[2 * v3 + 1],
      (_DWORD **)v42[2],
      (_DWORD *)v19[2 * v3 + 1],
      (const void **)&v29);
    v23 = v4; /*0x9532da*/
    if ( v4 < v33 ) /*0x9532de*/
    {
      v5 = 0xC * v4; /*0x9532e7*/
      do /*0x953369*/
      {
        v6 = *(_DWORD *)(v5 + v32 + 4); /*0x9532f4*/
        v7 = *(_DWORD *)(v5 + v32 + 8); /*0x9532f8*/
        v8 = sub_8B0F00((int *)v28, v6); /*0x953301*/
        sub_8B0D80(v28, &v22, v8); /*0x953310*/
        if ( !v22 ) /*0x953319*/
        {
          if ( v20 == (v21 & 0x3FFFFFFF) ) /*0x95332b*/
            sub_8A6EE0((const void **)&v19, 8); /*0x953334*/
          v19[2 * v20] = v6; /*0x953344*/
          v19[2 * v20++ + 1] = v7; /*0x95334f*/
        }
        v5 += 0xC; /*0x953360*/
        ++v23; /*0x953365*/
      }
      while ( v23 < v33 ); /*0x953369*/
      v3 = i; /*0x95336b*/
    }
    ++v3; /*0x953378*/
  }
  if ( v26 ) /*0x95338b*/
  {
    v9 = (char *)(**(int (__thiscall ***)(int, unsigned int, int))unk_BA7D98)(unk_BA7D98, v26, 5); /*0x9533a2*/
    sub_8B1890(v9, v25, v26); /*0x9533ab*/
    for ( j = 0; j < v30; ++j ) /*0x9533bb*/
      *(_DWORD *)&v9[v29[2 * j]] = &v9[v29[2 * j + 1]]; /*0x9533cd*/
    for ( k = 0; k < v33; v2 += 0xC ) /*0x9533e1*/
    {
      v12 = *(_DWORD *)(v2 + v32 + 4); /*0x9533e7*/
      v13 = sub_8B1550((int *)v28, v12, 0xFFFFFFFF); /*0x9533f2*/
      if ( v13 != 0xFFFFFFFF ) /*0x9533fa*/
        v12 = (unsigned int)&v9[v13]; /*0x9533fc*/
      *(_DWORD *)&v9[*(_DWORD *)(v2 + v32)] = v12; /*0x953406*/
      ++k; /*0x95340d*/
    }
    sub_4BFC40(v43); /*0x95341c*/
    sub_8B0E60(v28); /*0x953425*/
    v14 = MEMORY[0xBA9DE4]; /*0x953430*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x953436*/
    if ( v21 >= 0 ) /*0x95343d*/
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v14] + 0x19C), v19, 8 * v21, 0x14); /*0x953458*/
    sub_941400(&v29); /*0x953461*/
    sub_8BC000(v42); /*0x95346a*/
    if ( v27 >= 0 ) /*0x953475*/
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v14] + 0x19C), v25, v27 & 0x3FFFFFFF, 0x14); /*0x95348d*/
    return v9; /*0x953492*/
  }
  else
  {
    sub_4BFC40(v43); /*0x9534a6*/
    sub_8B0E60(v28); /*0x9534af*/
    v17 = MEMORY[0xBA9DE4]; /*0x9534ba*/
    v18 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9534c0*/
    if ( (v21 & 0x80000000) == 0 ) /*0x9534c7*/
      sub_8A75D0(*(_DWORD *)(v18[v17] + 0x19C), v19, 8 * v21, 0x14); /*0x9534e2*/
    sub_941400(&v29); /*0x9534eb*/
    sub_8BC000(v42); /*0x9534f4*/
    if ( (v27 & 0x80000000) == 0 ) /*0x9534ff*/
      sub_8A75D0(*(_DWORD *)(v18[v17] + 0x19C), v25, v27 & 0x3FFFFFFF, 0x14); /*0x953517*/
    return 0; /*0x95351f*/
  }
}
