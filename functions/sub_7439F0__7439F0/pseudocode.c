int __usercall sub_7439F0@<eax>(int a1@<eax>)
{
  int result; // eax
  unsigned int v3; // edi
  int v4; // eax
  _DWORD *v5; // esi

  result = *(_DWORD *)(a1 + 0x1C); /*0x7439f3*/
  v3 = *(_DWORD *)(result + 0x14); /*0x7439fa*/
  if ( v3 > *(_DWORD *)(a1 + 0x10) ) /*0x7439ff*/
    v3 = *(_DWORD *)(a1 + 0x10); /*0x743a01*/
  if ( v3 ) /*0x743a05*/
  {
    memcpy(*(void **)(a1 + 0xC), *(const void **)(result + 0x10), v3); /*0x743a10*/
    v4 = *(_DWORD *)(a1 + 0x1C); /*0x743a15*/
    *(_DWORD *)(a1 + 0xC) += v3; /*0x743a18*/
    *(_DWORD *)(v4 + 0x10) += v3; /*0x743a1b*/
    *(_DWORD *)(a1 + 0x14) += v3; /*0x743a1e*/
    *(_DWORD *)(a1 + 0x10) -= v3; /*0x743a21*/
    result = *(_DWORD *)(a1 + 0x1C); /*0x743a24*/
    *(_DWORD *)(result + 0x14) -= v3; /*0x743a27*/
    v5 = *(_DWORD **)(a1 + 0x1C); /*0x743a2a*/
    if ( !v5[5] ) /*0x743a30*/
      v5[4] = v5[2]; /*0x743a39*/
  }
  return result; /*0x743a3c*/
}
