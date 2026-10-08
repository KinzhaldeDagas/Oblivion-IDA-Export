char __thiscall sub_91D040(const void **this, int *a2)
{
  __m128 *v2; // esi
  const void **v3; // edi
  int *v4; // ebx
  int v5; // eax
  int v6; // eax
  signed int v7; // ecx
  int v8; // edx
  int v9; // edi
  _DWORD *v10; // esi
  int i; // esi
  int v12; // eax
  int j; // esi
  void (__thiscall ***v14)(_DWORD, int); // ecx
  int v15; // ecx
  _DWORD *v17; // [esp+34h] [ebp-23Ch] BYREF
  int v18; // [esp+38h] [ebp-238h]
  unsigned int v19; // [esp+3Ch] [ebp-234h]
  _DWORD v20[2]; // [esp+40h] [ebp-230h] BYREF
  __m128 *v21; // [esp+48h] [ebp-228h]
  int *v22[3]; // [esp+4Ch] [ebp-224h] BYREF
  int v23[5]; // [esp+58h] [ebp-218h] BYREF
  char v24[512]; // [esp+6Ch] [ebp-204h] BYREF

  v2 = (__m128 *)a2[5]; /*0x91d055*/
  v3 = this; /*0x91d059*/
  v4 = a2 + 5; /*0x91d05b*/
  v5 = *a2; /*0x91d065*/
  v20[0] = this; /*0x91d06a*/
  v21 = v2; /*0x91d06e*/
  v6 = (*(int (__thiscall **)(int *))(v5 + 0x10))(a2); /*0x91d072*/
  v7 = 0; /*0x91d075*/
  v8 = 0x80000000; /*0x91d07a*/
  v17 = 0; /*0x91d07f*/
  v18 = 0; /*0x91d083*/
  v19 = 0x80000000; /*0x91d087*/
  if ( v6 == 1 || v6 == 2 ) /*0x91d090*/
    goto LABEL_10; /*0x91d090*/
  v9 = *(_DWORD *)(unk_BA8450 + 0xC); /*0x91d098*/
  if ( v9 <= 0 ) /*0x91d09d*/
  {
LABEL_7:
    v7 = 0xFFFFFFFF; /*0x91d0ae*/
  }
  else
  {
    v10 = *(_DWORD **)(unk_BA8450 + 8); /*0x91d09f*/
    while ( *v10 != v6 ) /*0x91d0a4*/
    {
      ++v7; /*0x91d0a6*/
      ++v10; /*0x91d0a7*/
      if ( v7 >= v9 ) /*0x91d0ac*/
        goto LABEL_7; /*0x91d0ac*/
    }
  }
  LOBYTE(v6) = v7 != 0xFFFFFFFF; /*0x91d0b4*/
  if ( v7 != 0xFFFFFFFF ) /*0x91d0b9*/
  {
    v2 = v21; /*0x91d0bf*/
    v3 = (const void **)v20[0]; /*0x91d0c3*/
LABEL_10:
    if ( v2 ) /*0x91d0c9*/
    {
      sub_94A520(v20); /*0x91d0d3*/
      sub_94A530(v23, v20); /*0x91d0e1*/
      sub_94B7E0(v23, v2, (const void **)&v17); /*0x91d0f0*/
      for ( i = v18 - 1; i >= 0; --i ) /*0x91d0fa*/
      {
        v12 = v17[i]; /*0x91d104*/
        if ( *(_DWORD *)(v12 + 0x54) == 6 && !*(_DWORD *)(v12 + 0x50) ) /*0x91d10d*/
        {
          sub_8BBFB0((int)v22, (int)v4, v24, 0x200u, 1); /*0x91d128*/
          sub_8BBDB0(v22, "Unable to build display geometry from hkShape geometry data"); /*0x91d136*/
          (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x91d156*/
            unk_BA7FB0,
            0,
            0xFFFFFFFF,
            v24,
            ".\\visualdebugger\\viewer\\hkPhantomDisplayViewer.cpp",
            0x92);
          sub_8BC000(v22); /*0x91d15d*/
          v17[i] = v17[--v18]; /*0x91d172*/
        }
      }
      if ( v3[3] == (const void *)((unsigned int)v3[4] & 0x3FFFFFFF) ) /*0x91d188*/
        sub_8A6EE0(v3 + 2, 4); /*0x91d18d*/
      *((_DWORD *)v3[2] + (_DWORD)v3[3]) = a2; /*0x91d19a*/
      v3[3] = (char *)v3[3] + 1; /*0x91d19d*/
      (*(void (__thiscall **)(const void *, _DWORD **, int, int *, int))(*(_DWORD *)v3[0xFFFFFFFC] + 4))( /*0x91d1b6*/
        v3[0xFFFFFFFC],
        &v17,
        a2[7],
        a2 + 5,
        unk_BA8448);
      (*(void (__thiscall **)(const void *, int, int *, int))(*(_DWORD *)v3[0xFFFFFFFC] + 8))( /*0x91d1cd*/
        v3[0xFFFFFFFC],
        unk_BA844C,
        v4,
        unk_BA8448);
      LOBYTE(v6) = v18; /*0x91d1d0*/
      for ( j = 0; j < v18; ++j ) /*0x91d1d8*/
      {
        v14 = (void (__thiscall ***)(_DWORD, int))v17[j]; /*0x91d1e4*/
        if ( v14 ) /*0x91d1e9*/
          (**v14)(v14, 1); /*0x91d1ef*/
        LOBYTE(v6) = v18; /*0x91d1f1*/
      }
      v8 = v19; /*0x91d1fa*/
    }
  }
  if ( v8 >= 0 ) /*0x91d200*/
  {
    v15 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91d211*/
    if ( !v15 ) /*0x91d219*/
      v15 = unk_BA7D9C; /*0x91d21b*/
    LOBYTE(v6) = sub_8A75D0(v15, v17, 4 * v8, 0x14); /*0x91d232*/
  }
  return v6; /*0x91d237*/
}
