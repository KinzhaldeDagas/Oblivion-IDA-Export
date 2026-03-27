int __cdecl sub_8E6560(int a1, _DWORD *a2)
{
  int result; // eax
  int v3; // esi
  int (__cdecl *v4)(int, int, _DWORD, _DWORD, _DWORD *); // ecx

  result = a1;
  if ( *(_BYTE *)a1 == 2 )
  {
LABEL_4:
    v3 = a1 + 0x20;
    goto LABEL_5;
  }
  if ( *(_BYTE *)a1 != 4 )
  {
    if ( *(_BYTE *)a1 != 6 )
      return result;
    goto LABEL_4;
  }
  v3 = a1 + 0x30;
LABEL_5:
  v4 = *(int (__cdecl **)(int, int, _DWORD, _DWORD, _DWORD *))(0x34 * *(unsigned __int8 *)(a1 + 1) + *a2 + 0x16AC);
  if ( v4 )
    return v4(a1, v3, *(_DWORD *)(a1 + 0x14), *(_DWORD *)(a1 + 0x18), a2);
  return result;
}
