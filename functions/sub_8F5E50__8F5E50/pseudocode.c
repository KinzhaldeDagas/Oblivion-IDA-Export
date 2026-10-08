int __userpurge sub_8F5E50@<eax>(int a1@<ecx>, int a2@<ebx>, char *a3, unsigned int a4, char a5)
{
  unsigned int v6; // eax

  *(_WORD *)(a1 + 6) = 1; /*0x8f5e62*/
  *(_DWORD *)a1 = &off_A9B3BC; /*0x8f5e68*/
  *(_DWORD *)(a1 + 8) = 0; /*0x8f5e6e*/
  *(_DWORD *)(a1 + 0xC) = a3; /*0x8f5e75*/
  *(_DWORD *)(a1 + 0x10) = 0; /*0x8f5e78*/
  v6 = a4 - 1; /*0x8f5e7f*/
  if ( !a5 ) /*0x8f5e82*/
    v6 = a4; /*0x8f5e84*/
  *(_DWORD *)(a1 + 0x14) = v6; /*0x8f5e88*/
  *(_BYTE *)(a1 + 0x18) = 0; /*0x8f5e8b*/
  if ( a5 ) /*0x8f5e8f*/
    sub_8B18C0(a2, a3, 0, a4); /*0x8f5e95*/
  return a1; /*0x8f5e9d*/
}
