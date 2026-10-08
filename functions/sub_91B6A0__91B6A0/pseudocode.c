int __thiscall sub_91B6A0(int *this, int a2)
{
  int result; // eax
  int v4; // ecx
  _DWORD **i; // edx
  int j; // esi
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  int k; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // ecx
  _DWORD *v13; // [esp+34h] [ebp-234h] BYREF
  int v14; // [esp+38h] [ebp-230h]
  int v15; // [esp+3Ch] [ebp-22Ch]
  _DWORD *v16; // [esp+40h] [ebp-228h]
  int v17; // [esp+44h] [ebp-224h] BYREF
  int *v18[3]; // [esp+48h] [ebp-220h] BYREF
  _WORD v19[8]; // [esp+54h] [ebp-214h] BYREF
  char v20[512]; // [esp+64h] [ebp-204h] BYREF

  result = *(_DWORD *)(a2 + 0x14); /*0x91b6bb*/
  if ( result ) /*0x91b6c4*/
  {
    v4 = *(this + 3); /*0x91b6ca*/
    result = 0; /*0x91b6d0*/
    if ( v4 > 0 ) /*0x91b6d4*/
    {
      for ( i = (_DWORD **)*(this + 2); **i != *(_DWORD *)(a2 + 8); ++i ) /*0x91b6da*/
      {
        if ( ++result >= v4 ) /*0x91b6ec*/
          return result; /*0x91b6ec*/
      }
      if ( result >= 0 ) /*0x91b6f7*/
      {
        v16 = *(_DWORD **)(*(this + 2) + 4 * result); /*0x91b707*/
        v13 = 0; /*0x91b70b*/
        v14 = 0; /*0x91b70f*/
        v15 = 0x80000000; /*0x91b713*/
        sub_94B840(&v17); /*0x91b71b*/
        sub_94B850(v19, &v17); /*0x91b729*/
        sub_94CC50((int)v19, *(__m128 **)(a2 + 0x14), (const void **)&v13); /*0x91b73b*/
        for ( j = v14 - 1; j >= 0; --j ) /*0x91b747*/
        {
          v7 = v13[j]; /*0x91b754*/
          if ( *(_DWORD *)(v7 + 0x54) == 6 && !*(_DWORD *)(v7 + 0x50) ) /*0x91b75c*/
          {
            sub_8BBFB0((int)v18, (int)this, v20, 0x200u, 1); /*0x91b777*/
            sub_8BBDB0(v18, "Unable to build display geometry from hkShape geometry data"); /*0x91b785*/
            (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x91b7a5*/
              unk_BA7FB0,
              0,
              0xFFFFFFFF,
              v20,
              ".\\visualdebugger\\viewer\\hkConvexRadiusViewer.cpp",
              0xA6);
            sub_8BC000(v18); /*0x91b7ac*/
            v13[j] = v13[--v14]; /*0x91b7c1*/
          }
        }
        if ( v14 > 0 ) /*0x91b7cd*/
        {
          v8 = v16 + 1; /*0x91b7d9*/
          if ( v16[2] == (v16[3] & 0x3FFFFFFF) ) /*0x91b7e6*/
            sub_8A6EE0((const void **)v16 + 1, 4); /*0x91b7eb*/
          *(_DWORD *)(*v8 + 4 * v8[1]++) = a2 + 0x17; /*0x91b7f8*/
          (*(void (__thiscall **)(_DWORD, _DWORD **, int, int, int))(*(_DWORD *)*(this + 0xFFFFFFFC) + 4))( /*0x91b817*/
            *(this + 0xFFFFFFFC),
            &v13,
            *(_DWORD *)(a2 + 0x50) + 0x10,
            a2 + 0x17,
            unk_BA842C);
          v9 = unk_BA8430; /*0x91b82a*/
          if ( !*(_BYTE *)(a2 + 0x91) ) /*0x91b820*/
            v9 = unk_BA8434; /*0x91b837*/
          (*(void (__stdcall **)(int))(*(_DWORD *)*(this + 0xFFFFFFFC) + 8))(v9); /*0x91b83e*/
        }
        for ( k = 0; k < v14; ++k ) /*0x91b849*/
        {
          v11 = (void (__thiscall ***)(_DWORD, int))v13[k]; /*0x91b854*/
          if ( v11 ) /*0x91b859*/
            (**v11)(v11, 1); /*0x91b85f*/
        }
        result = v15; /*0x91b86a*/
        if ( v15 >= 0 ) /*0x91b870*/
        {
          v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91b882*/
          if ( !v12 ) /*0x91b88a*/
            v12 = unk_BA7D9C; /*0x91b88c*/
          return sub_8A75D0(v12, v13, 4 * v15, 0x14); /*0x91b8a2*/
        }
      }
    }
  }
  return result; /*0x91b8a7*/
}
