int __cdecl sub_8E66D0(int a1, int a2)
{
  int v2; // ecx
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  _DWORD *i; // edx

  if ( *(_DWORD *)(a1 + 0x28) > *(_DWORD *)(a2 + 0x28) ) /*0x8e66e0*/
  {
    v2 = a2; /*0x8e66e8*/
    v3 = a1; /*0x8e66ea*/
  }
  else
  {
    v2 = a1; /*0x8e66e2*/
    v3 = a2; /*0x8e66e4*/
  }
  v4 = *(_DWORD *)(v2 + 0x28); /*0x8e66ec*/
  v5 = 0; /*0x8e66ef*/
  if ( v4 <= 0 ) /*0x8e66f3*/
    return 0; /*0x8e670c*/
  v6 = *(_DWORD *)(v2 + 0x24); /*0x8e66f5*/
  for ( i = (_DWORD *)(v6 + 4); *i != v3; i += 2 ) /*0x8e66f8*/
  {
    if ( ++v5 >= v4 ) /*0x8e670a*/
      return 0; /*0x8e670a*/
  }
  return *(_DWORD *)(v6 + 8 * v5); /*0x8e670c*/
}
