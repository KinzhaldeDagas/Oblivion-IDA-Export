_DWORD *__cdecl sub_6BB960(signed int a1, int size)
{
  int v2; // ebp
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // esi
  int v6; // esi
  void (__cdecl *v7)(int, int, int, int *, int); // eax
  void (__cdecl *v8)(int, int, int, int *, int); // edx
  int v10; // [esp-28h] [ebp-50h]
  int v11; // [esp-14h] [ebp-3Ch]
  int v12; // [esp+14h] [ebp-14h] BYREF
  int v13; // [esp+18h] [ebp-10h] BYREF
  unsigned int v14; // [esp+24h] [ebp-4h]
  int sizea; // [esp+30h] [ebp+8h]

  v2 = size; /*0x6bb987*/
  v3 = (unsigned __int64)(unsigned int)size >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * size;
  v4 = FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  v14 = 0; /*0x6bb9be*/
  if ( v4 ) /*0x6bb9c2*/
  {
    v5 = v4 + 4; /*0x6bb9cf*/
    *(_DWORD *)v4 = size; /*0x6bb9d5*/
    ArrayConstructor( /*0x6bb9d7*/
      (char *)(v4 + 4),
      0x10u,
      size,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
    sizea = v5; /*0x6bb9dc*/
  }
  else
  {
    sizea = 0; /*0x6bb9e2*/
    v5 = 0; /*0x6bb9e6*/
  }
  v14 = 0xFFFFFFFF; /*0x6bb9ea*/
  if ( !v2 ) /*0x6bb9f2*/
    return (_DWORD *)v5; /*0x6bba61*/
  v6 = v5 + 0xC; /*0x6bb9f8*/
  do /*0x6bba47*/
  {
    sub_6BB5E0((char *)(v6 - 0xC), a1); /*0x6bba04*/
    v11 = *(_DWORD *)(a1 + 0x21C); /*0x6bba1b*/
    v7 = *(void (__cdecl **)(int, int, int, int *, int))(v11 + 4); /*0x6bba1c*/
    v12 = 4; /*0x6bba1f*/
    v7(v11, v6 - 4, 4, &v12, 1); /*0x6bba23*/
    v8 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(a1 + 0x21C) + 4); /*0x6bba2b*/
    v10 = *(_DWORD *)(a1 + 0x21C); /*0x6bba37*/
    v13 = 4; /*0x6bba38*/
    v8(v10, v6, 4, &v13, 1); /*0x6bba3c*/
    v6 += 0x10; /*0x6bba41*/
    --v2; /*0x6bba44*/
  }
  while ( v2 ); /*0x6bba47*/
  return (_DWORD *)sizea; /*0x6bba4d*/
}
