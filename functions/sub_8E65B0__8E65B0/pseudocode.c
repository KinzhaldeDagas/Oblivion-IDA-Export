int __cdecl sub_8E65B0(int a1, _DWORD *a2)
{
  int result; // eax
  int (__cdecl *v3)(int, int, _DWORD *); // ecx
  int v4; // ecx
  int (__cdecl *v5)(int, int, _DWORD *); // ecx

  result = a1;
  if ( *(_BYTE *)a1 == 2 )
  {
LABEL_4:
    v3 = *(int (__cdecl **)(int, int, _DWORD *))(0x34 * *(unsigned __int8 *)(a1 + 1) + *a2 + 0x16B0);
    if ( v3 )
      return v3(a1, a1 + 0x20, a2);
    return result;
  }
  if ( *(_BYTE *)a1 != 4 )
  {
    if ( *(_BYTE *)a1 != 6 )
      return result;
    goto LABEL_4;
  }
  v4 = 0x34 * *(unsigned __int8 *)(a1 + 1);
  *(_DWORD *)(a1 + 0x1C) = 0xBF800000;
  *(_OWORD *)(a1 + 0x20) = 0;
  v5 = *(int (__cdecl **)(int, int, _DWORD *))(v4 + *a2 + 0x16B0);
  if ( v5 )
    return v5(a1, a1 + 0x30, a2);
  return result;
}
