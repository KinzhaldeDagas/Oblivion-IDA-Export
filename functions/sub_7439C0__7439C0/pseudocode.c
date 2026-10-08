int __usercall sub_7439C0@<eax>(int result@<eax>, __int16 a2@<cx>)
{
  int v2; // edi

  *(_BYTE *)(*(_DWORD *)(result + 8) + *(_DWORD *)(result + 0x14)) = HIBYTE(a2); /*0x7439cd*/
  v2 = *(_DWORD *)(result + 8); /*0x7439d0*/
  *(_BYTE *)(++*(_DWORD *)(result + 0x14) + v2) = a2; /*0x7439de*/
  ++*(_DWORD *)(result + 0x14); /*0x7439e1*/
  return result; /*0x7439e4*/
}
