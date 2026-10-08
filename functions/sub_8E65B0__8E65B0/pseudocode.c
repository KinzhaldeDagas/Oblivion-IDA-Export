int __cdecl sub_8E65B0(int a1, _DWORD *a2)
{
  int result; // eax
  int (__cdecl *v3)(int, int, _DWORD *); // ecx
  int v4; // ecx
  int (__cdecl *v5)(int, int, _DWORD *); // ecx

  result = a1; /*0x8e65b9*/
  if ( *(_BYTE *)a1 == 2 ) /*0x8e65c3*/
  {
LABEL_4:
    v3 = *(int (__cdecl **)(int, int, _DWORD *))(0x34 * *(unsigned __int8 *)(a1 + 1) + *a2 + 0x16B0); /*0x8e65cf*/
    if ( v3 ) /*0x8e65e4*/
      return v3(a1, a1 + 0x20, a2); /*0x8e65ec*/
    return result; /*0x8e65ec*/
  }
  if ( *(_BYTE *)a1 != 4 ) /*0x8e65c8*/
  {
    if ( *(_BYTE *)a1 != 6 ) /*0x8e65cd*/
      return result; /*0x8e65cd*/
    goto LABEL_4; /*0x8e65cd*/
  }
  v4 = 0x34 * *(unsigned __int8 *)(a1 + 1); /*0x8e65fd*/
  *(_DWORD *)(a1 + 0x1C) = 0xBF800000; /*0x8e6600*/
  *(_OWORD *)(a1 + 0x20) = 0; /*0x8e660a*/
  v5 = *(int (__cdecl **)(int, int, _DWORD *))(v4 + *a2 + 0x16B0); /*0x8e6610*/
  if ( v5 ) /*0x8e6619*/
    return v5(a1, a1 + 0x30, a2); /*0x8e6621*/
  return result; /*0x8e65f1*/
}
