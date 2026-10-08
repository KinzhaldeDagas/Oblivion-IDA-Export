unsigned int __thiscall sub_9465A0(_DWORD *this, int a2, char *a3, char a4, const void **a5)
{
  int v6; // ecx
  char *v7; // edi
  char *v8; // esi
  const void **v9; // edi
  const void *v10; // edx
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // ecx
  const void *v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  void *v18; // ecx
  char *v19; // esi
  int v20; // ebp
  int v21; // esi
  unsigned int v22; // eax
  char *v23; // ecx
  int v24; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v26; // ecx
  int v27; // ecx
  int v28; // esi
  _DWORD *v29; // edi
  int v30; // ecx
  int v31; // ecx
  int v32; // [esp+10h] [ebp-30h] BYREF
  _DWORD *v33; // [esp+14h] [ebp-2Ch] BYREF
  int v34; // [esp+18h] [ebp-28h]
  int v35; // [esp+1Ch] [ebp-24h]
  _DWORD *v36; // [esp+20h] [ebp-20h] BYREF
  int v37; // [esp+24h] [ebp-1Ch]
  int v38; // [esp+28h] [ebp-18h]
  _DWORD v39[5]; // [esp+2Ch] [ebp-14h] BYREF

  sub_90BBA0(&v32, dword_A9C288); /*0x9465b2*/
  v6 = *(this + 0xB); /*0x9465b7*/
  v7 = a3; /*0x9465ba*/
  v33 = 0; /*0x9465c4*/
  v34 = 0; /*0x9465c8*/
  v35 = 0x80000000; /*0x9465cc*/
  v8 = a3; /*0x9465d7*/
  if ( *(_DWORD *)(v6 + 0x48) ) /*0x9465d4*/
  {
    if ( *sub_90D380(a3, (bool *)&a3) ) /*0x9465e7*/
    {
      v8 = (char *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 0xB) + 0x48) + 0xC))( /*0x9465f8*/
                     *(_DWORD *)(*(this + 0xB) + 0x48),
                     a2);
      if ( !v8 ) /*0x9465fc*/
        v8 = v7; /*0x9465fe*/
    }
  }
  v9 = a5; /*0x946606*/
  if ( a4 ) /*0x94660a*/
  {
    v10 = a5[1]; /*0x946610*/
    v11 = 0; /*0x946613*/
    if ( (int)v10 > 0 ) /*0x946617*/
    {
      v12 = *a5; /*0x946619*/
      do /*0x94662b*/
      {
        if ( *v12 == a2 ) /*0x946622*/
          break; /*0x946622*/
        ++v11; /*0x946624*/
        v12 += 2; /*0x946625*/
      }
      while ( v11 < (int)a5[1] ); /*0x94662b*/
    }
    if ( v11 < (int)v10 ) /*0x94662f*/
    {
      if ( v35 >= 0 ) /*0x946637*/
      {
        v13 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x946648*/
        if ( !v13 ) /*0x946650*/
          v13 = unk_BA7D9C; /*0x946652*/
        sub_8A75D0(v13, v33, 0x18 * (v35 & 0x3FFFFFFF), 0x14); /*0x94666f*/
      }
      return 0; /*0x94667d*/
    }
    if ( v10 == (const void *)((unsigned int)a5[2] & 0x3FFFFFFF) ) /*0x94668a*/
      sub_8A6EE0(a5, 8); /*0x94668f*/
    v15 = v9[1]; /*0x946697*/
    v16 = (char *)*v9 + 8 * (_DWORD)v15; /*0x94669c*/
    v9[1] = (char *)v15 + 1; /*0x9466a0*/
    *v16 = a2; /*0x9466a3*/
    v16[1] = v8; /*0x9466a5*/
  }
  v36 = 0; /*0x9466b5*/
  v37 = 0; /*0x9466b9*/
  v38 = 0x80000000; /*0x9466bd*/
  sub_8BC030(v39, (int)&v36, 1); /*0x9466c5*/
  v17 = sub_9582E0((int)this, (int)v39, (int)&v32, a2, 0, a2, v8, (const void **)&v33); /*0x9466de*/
  if ( v17 == v37 && v17 >= 1 ) /*0x9466f5*/
  {
    v18 = (void *)*(this + 5); /*0x9466fb*/
    v19 = (char *)(v17 + 1); /*0x9466fe*/
    a3 = (char *)(v17 + 1); /*0x946702*/
    sub_918440(v18, v17 + 1); /*0x946706*/
    sub_9181B0((_DWORD **)*(this + 5), 0x24); /*0x946710*/
    sub_918390((_DWORD **)*(this + 5)); /*0x946722*/
    if ( a4 ) /*0x94672d*/
    {
      v20 = 0; /*0x946733*/
      if ( v34 > 0 ) /*0x946737*/
      {
        v21 = 0; /*0x946739*/
        do /*0x946770*/
        {
          v22 = sub_9465A0(this, v33[v21 + 2], (_DWORD *)v33[v21 + 4], 1, v9); /*0x946757*/
          v23 = &a3[v22]; /*0x946760*/
          ++v20; /*0x946766*/
          v21 += 6; /*0x946767*/
          a3 += v22; /*0x94676c*/
        }
        while ( v20 < v34 ); /*0x946770*/
        v19 = v23; /*0x946772*/
      }
    }
    sub_8BC2E0(v39); /*0x946778*/
    v24 = MEMORY[0xBA9DE4]; /*0x946783*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x946789*/
    if ( v38 >= 0 ) /*0x946790*/
    {
      v26 = *(_DWORD *)(ThreadLocalStoragePointer[v24] + 0x19C); /*0x946795*/
      if ( !v26 ) /*0x94679d*/
        v26 = unk_BA7D9C; /*0x94679f*/
      sub_8A75D0(v26, v36, v38 & 0x3FFFFFFF, 0x14); /*0x9467b2*/
    }
    if ( v35 >= 0 ) /*0x9467bd*/
    {
      v27 = *(_DWORD *)(ThreadLocalStoragePointer[v24] + 0x19C); /*0x9467c2*/
      if ( !v27 ) /*0x9467ca*/
        v27 = unk_BA7D9C; /*0x9467cc*/
      sub_8A75D0(v27, v33, 0x18 * (v35 & 0x3FFFFFFF), 0x14); /*0x9467e5*/
    }
    return (unsigned int)v19; /*0x9467ea*/
  }
  else
  {
    sub_8BC2E0(v39); /*0x9467fa*/
    v28 = MEMORY[0xBA9DE4]; /*0x946805*/
    v29 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x94680b*/
    if ( v38 >= 0 ) /*0x946812*/
    {
      v30 = *(_DWORD *)(v29[v28] + 0x19C); /*0x946817*/
      if ( !v30 ) /*0x94681f*/
        v30 = unk_BA7D9C; /*0x946821*/
      sub_8A75D0(v30, v36, v38 & 0x3FFFFFFF, 0x14); /*0x946834*/
    }
    if ( v35 >= 0 ) /*0x94683f*/
    {
      v31 = *(_DWORD *)(v29[v28] + 0x19C); /*0x946844*/
      if ( !v31 ) /*0x94684c*/
        v31 = unk_BA7D9C; /*0x94684e*/
      sub_8A75D0(v31, v33, 0x18 * (v35 & 0x3FFFFFFF), 0x14); /*0x946867*/
    }
    return 0xFFFFFFFF; /*0x94686f*/
  }
}
