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

  result = *(_DWORD *)(a2 + 0x14);
  if ( result )
  {
    v4 = *(this + 3);
    result = 0;
    if ( v4 > 0 )
    {
      for ( i = (_DWORD **)*(this + 2); **i != *(_DWORD *)(a2 + 8); ++i )
      {
        if ( ++result >= v4 )
          return result;
      }
      if ( result >= 0 )
      {
        v16 = *(_DWORD **)(*(this + 2) + 4 * result);
        v13 = 0;
        v14 = 0;
        v15 = 0x80000000;
        sub_94B840(&v17);
        sub_94B850(v19, &v17);
        sub_94CC50((int)v19, *(__m128 **)(a2 + 0x14), &v13);
        for ( j = v14 - 1; j >= 0; --j )
        {
          v7 = v13[j];
          if ( *(_DWORD *)(v7 + 0x54) == 6 && !*(_DWORD *)(v7 + 0x50) )
          {
            sub_8BBFB0((int)v18, (int)this, v20, 0x200u, 1);
            sub_8BBDB0(v18, "Unable to build display geometry from hkShape geometry data");
            (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
              dword_BA7FB0,
              0,
              0xFFFFFFFF,
              v20,
              ".\\visualdebugger\\viewer\\hkConvexRadiusViewer.cpp",
              0xA6);
            sub_8BC000(v18);
            v13[j] = v13[--v14];
          }
        }
        if ( v14 > 0 )
        {
          v8 = v16 + 1;
          if ( v16[2] == (v16[3] & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)v16 + 1, 4);
          *(_DWORD *)(*v8 + 4 * v8[1]++) = a2 + 0x17;
          (*(void (__thiscall **)(_DWORD, _DWORD **, int, int, int))(*(_DWORD *)*(this + 0xFFFFFFFC) + 4))(
            *(this + 0xFFFFFFFC),
            &v13,
            *(_DWORD *)(a2 + 0x50) + 0x10,
            a2 + 0x17,
            dword_BA842C);
          v9 = dword_BA8430;
          if ( !*(_BYTE *)(a2 + 0x91) )
            v9 = dword_BA8434;
          (*(void (__stdcall **)(int))(*(_DWORD *)*(this + 0xFFFFFFFC) + 8))(v9);
        }
        for ( k = 0; k < v14; ++k )
        {
          v11 = (void (__thiscall ***)(_DWORD, int))v13[k];
          if ( v11 )
            (**v11)(v11, 1);
        }
        result = v15;
        if ( v15 >= 0 )
        {
          v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
          if ( !v12 )
            v12 = dword_BA7D9C;
          return sub_8A75D0(v12, v13, 4 * v15, 0x14);
        }
      }
    }
  }
  return result;
}
