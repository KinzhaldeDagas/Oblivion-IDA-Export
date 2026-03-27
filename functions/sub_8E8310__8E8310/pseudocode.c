int __cdecl sub_8E8310(signed int a1, signed int a2)
{
  signed int v2; // ebx
  _DWORD *v3; // edi
  void (__cdecl *v4)(int, signed int *, int, signed int *, int); // eax
  signed int v5; // esi
  int v6; // eax
  void (__cdecl *v7)(int, int *, int, signed int *, int); // eax
  int v9; // [esp-14h] [ebp-28h]
  int v10; // [esp-14h] [ebp-28h]
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h]

  v2 = a1;
  v3 = (_DWORD *)a2;
  a2 = *(_DWORD *)(a2 + 4);
  v9 = *(_DWORD *)(a1 + 0x220);
  v4 = *(void (__cdecl **)(int, signed int *, int, signed int *, int))(v9 + 8);
  a1 = 4;
  v4(v9, &a2, 4, &a1, 1);
  v5 = 0;
  v12 = 4 * a2;
  if ( a2 <= 0 )
    return 4 * a2;
  do
  {
    v6 = *(_DWORD *)(v2 + 0x220);
    v11 = *(_DWORD *)(*v3 + 4 * v5);
    v10 = v6;
    v7 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v6 + 8);
    a1 = 4;
    v7(v10, &v11, 4, &a1, 1);
    ++v5;
  }
  while ( v5 < a2 );
  return v12;
}
