int __cdecl sub_8E77F0(int a1, float a2, int a3, _DWORD *a4)
{
  int result; // eax
  int i; // ebp
  unsigned __int8 *v6; // esi
  int v7; // edi
  unsigned __int8 *j; // edi

  result = *(_DWORD *)(a1 + 0x48); /*0x8e77f5*/
  for ( i = 0; i < result; result = *(_DWORD *)(a1 + 0x48) ) /*0x8e77fd*/
  {
    v6 = *(unsigned __int8 **)(*(_DWORD *)(a1 + 0x44) + 4 * i++); /*0x8e7804*/
    if ( i == result ) /*0x8e780a*/
      v7 = *(_DWORD *)(a1 + 0x54); /*0x8e780c*/
    else
      v7 = *(unsigned __int16 *)(a1 + 0x5A); /*0x8e7811*/
    for ( j = &v6[v7]; v6 < j; v6 += v6[3] ) /*0x8e7819*/
      sub_8E6630(v6, a2, a3, a4); /*0x8e7830*/
  }
  return result; /*0x8e784b*/
}
