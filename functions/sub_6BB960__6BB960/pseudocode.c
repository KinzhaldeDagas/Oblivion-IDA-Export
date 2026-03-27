_DWORD *__cdecl sub_6BB960(signed int a1, unsigned int size)
{
  unsigned int v2; // ebp
  unsigned int v3; // ecx
  unsigned int *v4; // eax
  _DWORD *v5; // esi
  char *v6; // esi
  void (__cdecl *v7)(int, char *, int, int *, int); // eax
  void (__cdecl *v8)(int, char *, int, int *, int); // edx
  int v10; // [esp-28h] [ebp-50h]
  int v11; // [esp-14h] [ebp-3Ch]
  int v12; // [esp+14h] [ebp-14h] BYREF
  int v13; // [esp+18h] [ebp-10h] BYREF
  unsigned int v14; // [esp+24h] [ebp-4h]
  int sizea; // [esp+30h] [ebp+8h]

  v2 = size;
  v3 = (unsigned __int64)size >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * size;
  v4 = (unsigned int *)FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  v14 = 0;
  if ( v4 )
  {
    v5 = v4 + 1;
    *v4 = size;
    ArrayConstructor(v4 + 1, 0x10u, size, (int)sub_7616D0, TESTexture::ClearComponentReferences);
    sizea = (int)v5;
  }
  else
  {
    sizea = 0;
    v5 = 0;
  }
  v14 = 0xFFFFFFFF;
  if ( !v2 )
    return v5;
  v6 = (char *)(v5 + 3);
  do
  {
    sub_6BB5E0(v6 + 0xFFFFFFF4, a1);
    v11 = *(_DWORD *)(a1 + 0x21C);
    v7 = *(void (__cdecl **)(int, char *, int, int *, int))(v11 + 4);
    v12 = 4;
    v7(v11, v6 + 0xFFFFFFFC, 4, &v12, 1);
    v8 = *(void (__cdecl **)(int, char *, int, int *, int))(*(_DWORD *)(a1 + 0x21C) + 4);
    v10 = *(_DWORD *)(a1 + 0x21C);
    v13 = 4;
    v8(v10, v6, 4, &v13, 1);
    v6 += 0x10;
    --v2;
  }
  while ( v2 );
  return (_DWORD *)sizea;
}
