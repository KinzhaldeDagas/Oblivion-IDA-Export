int __userpurge sub_8F5E50@<eax>(int a1@<ecx>, int a2@<ebx>, char *a3, unsigned int a4, char a5)
{
  unsigned int v6; // eax

  *(_WORD *)(a1 + 6) = 1;
  *(_DWORD *)a1 = &off_A9B3BC;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 0xC) = a3;
  *(_DWORD *)(a1 + 0x10) = 0;
  v6 = a4 - 1;
  if ( !a5 )
    v6 = a4;
  *(_DWORD *)(a1 + 0x14) = v6;
  *(_BYTE *)(a1 + 0x18) = 0;
  if ( a5 )
    sub_8B18C0(a2, a3, 0, a4);
  return a1;
}
