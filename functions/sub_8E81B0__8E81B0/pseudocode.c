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

  v10 = a2[1];
  v7 = *(_DWORD *)(a1 + 0x220);
  v2 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
  v9[0] = 4;
  v2(v7, &v10, 4, v9, 1);
  result = 0x10 * v10;
  v4 = 0;
  v12 = 0x10 * v10;
  if ( v10 > 0 )
  {
    v9[0] = 0;
    do
    {
      v5 = *(_DWORD *)(a1 + 0x220);
      v13 = *(_OWORD *)(*a2 + v9[0]);
      v8 = v5;
      v6 = *(void (__cdecl **)(int, __int128 *, int, int *, int))(v5 + 8);
      v11 = 0x10;
      v6(v8, &v13, 0x10, &v11, 1);
      v9[0] += 0x10;
      ++v4;
    }
    while ( v4 < v10 );
    return v12;
  }
  return result;
}
