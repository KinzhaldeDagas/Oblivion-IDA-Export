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
  _DWORD v23[5]; // [esp+58h] [ebp-218h] BYREF
  char v24[512]; // [esp+6Ch] [ebp-204h] BYREF

  v2 = (__m128 *)a2[5];
  v3 = this;
  v4 = a2 + 5;
  v5 = *a2;
  v20[0] = this;
  v21 = v2;
  v6 = (*(int (__thiscall **)(int *))(v5 + 0x10))(a2);
  v7 = 0;
  v8 = 0x80000000;
  v17 = 0;
  v18 = 0;
  v19 = 0x80000000;
  if ( v6 == 1 || v6 == 2 )
    goto LABEL_10;
  v9 = *(_DWORD *)(dword_BA8450 + 0xC);
  if ( v9 <= 0 )
  {
LABEL_7:
    v7 = 0xFFFFFFFF;
  }
  else
  {
    v10 = *(_DWORD **)(dword_BA8450 + 8);
    while ( *v10 != v6 )
    {
      ++v7;
      ++v10;
      if ( v7 >= v9 )
        goto LABEL_7;
    }
  }
  LOBYTE(v6) = v7 != 0xFFFFFFFF;
  if ( v7 != 0xFFFFFFFF )
  {
    v2 = v21;
    v3 = (const void **)v20[0];
LABEL_10:
    if ( v2 )
    {
      sub_94A520(v20);
      sub_94A530(v23, v20);
      sub_94B7E0(v23, v2, &v17);
      for ( i = v18 - 1; i >= 0; --i )
      {
        v12 = v17[i];
        if ( *(_DWORD *)(v12 + 0x54) == 6 && !*(_DWORD *)(v12 + 0x50) )
        {
          sub_8BBFB0((int)v22, (int)v4, v24, 0x200u, 1);
          sub_8BBDB0(v22, "Unable to build display geometry from hkShape geometry data");
          (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
            dword_BA7FB0,
            0,
            0xFFFFFFFF,
            v24,
            ".\\visualdebugger\\viewer\\hkPhantomDisplayViewer.cpp",
            0x92);
          sub_8BC000(v22);
          v17[i] = v17[--v18];
        }
      }
      if ( v3[3] == (const void *)((unsigned int)v3[4] & 0x3FFFFFFF) )
        sub_8A6EE0(v3 + 2, 4);
      *((_DWORD *)v3[2] + (_DWORD)v3[3]) = a2;
      v3[3] = (char *)v3[3] + 1;
      (*(void (__thiscall **)(const void *, _DWORD **, int, int *, int))(*(_DWORD *)v3[0xFFFFFFFC] + 4))(
        v3[0xFFFFFFFC],
        &v17,
        a2[7],
        a2 + 5,
        dword_BA8448);
      (*(void (__thiscall **)(const void *, int, int *, int))(*(_DWORD *)v3[0xFFFFFFFC] + 8))(
        v3[0xFFFFFFFC],
        dword_BA844C,
        v4,
        dword_BA8448);
      LOBYTE(v6) = v18;
      for ( j = 0; j < v18; ++j )
      {
        v14 = (void (__thiscall ***)(_DWORD, int))v17[j];
        if ( v14 )
          (**v14)(v14, 1);
        LOBYTE(v6) = v18;
      }
      v8 = v19;
    }
  }
  if ( v8 >= 0 )
  {
    v15 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v15 )
      v15 = dword_BA7D9C;
    LOBYTE(v6) = sub_8A75D0(v15, v17, 4 * v8, 0x14);
  }
  return v6;
}
