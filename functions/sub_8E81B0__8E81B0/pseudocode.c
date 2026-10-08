int __cdecl sub_8E81B0(int a1, _DWORD *a2)
{
  void (__cdecl *v2)(int, int *, int, int *, int); // eax
  int result; // eax
  int v4; // esi
  int v5; // eax
  void (__cdecl *v6)(int, __int128 *, int, int *, int); // eax
  int v7; // [esp-14h] [ebp-64h]
  int v8; // [esp-14h] [ebp-64h]
  int v9[5]; // [esp+10h] [ebp-40h] BYREF
  int v10; // [esp+24h] [ebp-2Ch] BYREF
  int v11; // [esp+28h] [ebp-28h] BYREF
  int v12; // [esp+2Ch] [ebp-24h]
  __int128 v13; // [esp+30h] [ebp-20h] BYREF

  v10 = a2[1]; /*0x8e81d7*/
  v7 = *(_DWORD *)(a1 + 0x220); /*0x8e81e8*/
  v2 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x8e81e9*/
  v9[0] = 4; /*0x8e81ec*/
  v2(v7, &v10, 4, v9, 1); /*0x8e81f4*/
  result = 0x10 * v10; /*0x8e81fc*/
  v4 = 0; /*0x8e81ff*/
  v12 = 0x10 * v10; /*0x8e8206*/
  if ( v10 > 0 ) /*0x8e820a*/
  {
    v9[0] = 0; /*0x8e820c*/
    do /*0x8e8250*/
    {
      v5 = *(_DWORD *)(a1 + 0x220); /*0x8e821a*/
      v13 = *(_OWORD *)(*a2 + v9[0]); /*0x8e822e*/
      v8 = v5; /*0x8e8233*/
      v6 = *(void (__cdecl **)(int, __int128 *, int, int *, int))(v5 + 8); /*0x8e8234*/
      v11 = 0x10; /*0x8e8237*/
      v6(v8, &v13, 0x10, &v11, 1); /*0x8e823f*/
      v9[0] += 0x10; /*0x8e8241*/
      ++v4; /*0x8e8246*/
    }
    while ( v4 < v10 ); /*0x8e8250*/
    return v12; /*0x8e8252*/
  }
  return result; /*0x8e8256*/
}
