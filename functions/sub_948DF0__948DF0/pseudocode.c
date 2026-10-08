int __usercall sub_948DF0@<eax>(int a1@<esi>, int a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax

  v2 = *(_DWORD *)(a1 + 4); /*0x948df0*/
  if ( v2 <= 0 ) /*0x948df7*/
  {
    if ( v2 == (*(_DWORD *)(a1 + 8) & 0x3FFFFFFF) ) /*0x948e0a*/
      sub_8A6EE0((const void **)a1, 1); /*0x948e0f*/
    v4 = *(_DWORD *)(a1 + 4); /*0x948e17*/
    v3 = v4 + *(_DWORD *)a1; /*0x948e1c*/
    *(_DWORD *)(a1 + 4) = v4 + 1; /*0x948e1f*/
    *(_DWORD *)(a1 + 4) = 0; /*0x948e44*/
  }
  else
  {
    v3 = v2 + *(_DWORD *)a1; /*0x948dfb*/
  }
  v5 = a2 + *(_DWORD *)(a1 + 4) + 6; /*0x948e52*/
  v6 = *(_DWORD *)(a1 + 8) & 0x3FFFFFFF; /*0x948e59*/
  if ( v6 < v5 ) /*0x948e60*/
  {
    v7 = 2 * v6; /*0x948e62*/
    if ( v5 >= v7 ) /*0x948e66*/
      v7 = a2 + *(_DWORD *)(a1 + 4) + 6; /*0x948e68*/
    sub_8A6E40((const void **)a1, v7, 1); /*0x948e6e*/
  }
  *(_DWORD *)(a1 + 4) = v5; /*0x948e76*/
  return v3; /*0x948e79*/
}
