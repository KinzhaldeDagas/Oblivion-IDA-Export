int __cdecl sub_8E6560(int a1, _DWORD *a2)
{
  int result; // eax
  int v3; // esi
  int (__cdecl *v4)(int, int, _DWORD, _DWORD, _DWORD *); // ecx

  result = a1; /*0x8e6560*/
  if ( *(_BYTE *)a1 == 2 ) /*0x8e656b*/
  {
LABEL_4:
    v3 = a1 + 0x20; /*0x8e6577*/
    goto LABEL_5; /*0x8e6577*/
  }
  if ( *(_BYTE *)a1 != 4 ) /*0x8e6570*/
  {
    if ( *(_BYTE *)a1 != 6 ) /*0x8e6575*/
      return result; /*0x8e6575*/
    goto LABEL_4; /*0x8e6575*/
  }
  v3 = a1 + 0x30; /*0x8e65a6*/
LABEL_5:
  v4 = *(int (__cdecl **)(int, int, _DWORD, _DWORD, _DWORD *))(0x34 * *(unsigned __int8 *)(a1 + 1) + *a2 + 0x16AC); /*0x8e657a*/
  if ( v4 ) /*0x8e6592*/
    return v4(a1, v3, *(_DWORD *)(a1 + 0x14), *(_DWORD *)(a1 + 0x18), a2); /*0x8e659f*/
  return result; /*0x8e65a4*/
}
