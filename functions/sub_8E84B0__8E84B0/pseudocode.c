int __cdecl sub_8E84B0(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  int result; // eax
  void (__cdecl *v6)(int, _BYTE *, int, int *, int); // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // ecx
  int v10; // [esp-14h] [ebp-54h]
  int v11; // [esp-14h] [ebp-54h]
  int v12; // [esp+18h] [ebp-28h] BYREF
  int v13; // [esp+1Ch] [ebp-24h] BYREF
  _BYTE v14[32]; // [esp+20h] [ebp-20h] BYREF

  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x30, 0x25);
  *(_WORD *)(v2 + 4) = 0x30;
  *(_WORD *)(v2 + 6) = 1;
  *(_DWORD *)v2 = &hkMoppCode::`vftable';
  *(_DWORD *)(v2 + 0x28) = 0x80000000;
  *(_DWORD *)(v2 + 0x20) = 0;
  *(_DWORD *)(v2 + 0x24) = 0;
  *(_OWORD *)(v2 + 0x10) = 0;
  *(_DWORD *)a2 = v2;
  v3 = *(_DWORD *)(a1 + 0x21C);
  v12 = 0;
  v10 = v3;
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v3 + 4);
  v13 = 4;
  v4(v10, &v12, 4, &v13, 1);
  (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(a1 + 0x21C) + 4))(
    *(_DWORD *)(a1 + 0x21C),
    *(_DWORD *)a2 + 0x10,
    0x10,
    0,
    0);
  if ( *(_DWORD *)(a1 + 4) < 6u )
  {
    result = v12;
    if ( !v12 )
      return result;
    v12 -= 0x30;
    v11 = *(_DWORD *)(a1 + 0x21C);
    v6 = *(void (__cdecl **)(int, _BYTE *, int, int *, int))(v11 + 4);
    v13 = 4;
    v6(v11, v14, 0x20, &v13, 1);
  }
  result = v12;
  if ( v12 )
  {
    v7 = *(_DWORD *)a2 + 0x20;
    v8 = *(_DWORD *)(*(_DWORD *)a2 + 0x28) & 0x3FFFFFFF;
    v13 = v12;
    if ( v8 < v12 )
    {
      v9 = 2 * v8;
      if ( v12 < v9 )
        result = v9;
      sub_8A6E40((const void **)v7, result, 1);
    }
    *(_DWORD *)(v7 + 4) = v13;
    (*(void (__cdecl **)(_DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)(a1 + 0x21C) + 4))(
      *(_DWORD *)(a1 + 0x21C),
      *(_DWORD *)(*(_DWORD *)a2 + 0x20),
      v12,
      0,
      0);
    return v12;
  }
  return result;
}
