int __usercall sub_746E20@<eax>(int result@<eax>)
{
  int v1; // ecx
  __int16 v2; // cx

  v1 = *(_DWORD *)(result + 0x16B4); /*0x746e20*/
  if ( v1 == 0x10 ) /*0x746e2a*/
  {
    *(_BYTE *)(*(_DWORD *)(result + 8) + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x746e39*/
    *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x746e4d*/
    ++*(_DWORD *)(result + 0x14); /*0x746e50*/
    *(_DWORD *)(result + 0x16B4) = 0; /*0x746e56*/
    *(_WORD *)(result + 0x16B0) = 0; /*0x746e5c*/
  }
  else if ( v1 >= 8 ) /*0x746e68*/
  {
    *(_BYTE *)(*(_DWORD *)(result + 8) + *(_DWORD *)(result + 0x14)) = *(_BYTE *)(result + 0x16B0); /*0x746e76*/
    v2 = *(unsigned __int8 *)(result + 0x16B1); /*0x746e79*/
    ++*(_DWORD *)(result + 0x14); /*0x746e81*/
    *(_DWORD *)(result + 0x16B4) -= 8; /*0x746e85*/
    *(_WORD *)(result + 0x16B0) = v2; /*0x746e8c*/
  }
  return result; /*0x746e63*/
}
