int __cdecl sub_6BBA80(signed int a1, int a2, signed int a3)
{
  signed int v3; // ebx
  int v4; // esi
  void (__cdecl *v5)(int, int, int, signed int *, int); // eax
  int (__cdecl *v6)(int, int, int, signed int *, int); // edx
  int result; // eax
  int v8; // [esp-3Ch] [ebp-40h]
  int v9; // [esp-28h] [ebp-2Ch]

  v3 = a3;
  if ( a3 )
  {
    v4 = a2 + 0xC;
    do
    {
      sub_6BB620(a1, v4 - 0xC);
      v9 = *(_DWORD *)(a1 + 0x220);
      v5 = *(void (__cdecl **)(int, int, int, signed int *, int))(v9 + 8);
      a3 = 4;
      v5(v9, v4 - 4, 4, &a3, 1);
      v6 = *(int (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(a1 + 0x220) + 8);
      v8 = *(_DWORD *)(a1 + 0x220);
      a3 = 4;
      result = v6(v8, v4, 4, &a3, 1);
      v4 += 0x10;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
