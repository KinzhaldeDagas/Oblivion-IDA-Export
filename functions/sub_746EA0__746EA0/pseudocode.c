int __usercall sub_746EA0@<eax>(int result@<eax>)
{
  int v1; // edx
  char v2; // bl
  int v3; // edx

  v1 = *(_DWORD *)(result + 0x16B4); /*0x746ea0*/
  if ( v1 <= 8 ) /*0x746eab*/
  {
    if ( v1 > 0 ) /*0x746eee*/
      *(_BYTE *)(*(_DWORD *)(result + 8) + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x746efc*/
    *(_WORD *)(result + 0x16B0) = 0; /*0x746f04*/
    *(_DWORD *)(result + 0x16B4) = 0; /*0x746f0b*/
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)(result + 8) + *(_DWORD *)(result + 0x14)) = *(_BYTE *)(result + 0x16B0); /*0x746eba*/
    v2 = *(_BYTE *)(result + 0x16B1); /*0x746ebd*/
    v3 = *(_DWORD *)(result + 8); /*0x746ec4*/
    *(_BYTE *)(++*(_DWORD *)(result + 0x14) + v3) = v2; /*0x746ed2*/
    ++*(_DWORD *)(result + 0x14); /*0x746ed5*/
    *(_WORD *)(result + 0x16B0) = 0; /*0x746edb*/
    *(_DWORD *)(result + 0x16B4) = 0; /*0x746ee2*/
  }
  return result; /*0x746eda*/
}
