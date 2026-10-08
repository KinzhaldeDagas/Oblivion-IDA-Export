unsigned int __cdecl sub_72DFB0(_DWORD *a1, int a2, int a3, int a4, char a5)
{
  int v5; // esi

  v5 = 0; /*0x72dfb8*/
  if ( !a1[2] ) /*0x72dfba*/
    return 0xFFFFFFFF; /*0x72dff8*/
  while ( *(_BYTE *)(v5 + a4) != a5 || !sub_72D3E0(*(const void ***)(*a1 + 4 * v5), a2, a3) ) /*0x72dfee*/
  {
    if ( (unsigned int)++v5 >= a1[2] ) /*0x72dff6*/
      return 0xFFFFFFFF; /*0x72dff6*/
  }
  *(_BYTE *)(v5 + a4) = 1; /*0x72e005*/
  return v5; /*0x72dff8*/
}
