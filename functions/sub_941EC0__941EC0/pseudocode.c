int __usercall sub_941EC0@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // esi
  int v4; // eax

  v3 = a1 + 8; /*0x941ec4*/
  *(_WORD *)(a1 + 6) = 1; /*0x941ec7*/
  *(_DWORD *)a1 = &off_AA22B8; /*0x941ecd*/
  *(_DWORD *)(a1 + 8) = a1 + 0x14; /*0x941ed9*/
  *(_DWORD *)(a1 + 0xC) = 0; /*0x941edb*/
  *(_DWORD *)(a1 + 0x10) = 0x80000010; /*0x941ee2*/
  sub_8B0E10((char **)(a1 + 0x24), a2); /*0x941ee9*/
  if ( *(_DWORD *)(v3 + 4) == (*(_DWORD *)(v3 + 8) & 0x3FFFFFFF) ) /*0x941efc*/
    sub_8A6EE0((const void **)v3, 1); /*0x941f01*/
  *(_BYTE *)(*(_DWORD *)(v3 + 4) + *(_DWORD *)v3) = 0; /*0x941f0e*/
  v4 = *(_DWORD *)(v3 + 4); /*0x941f18*/
  *(_DWORD *)(v3 + 4) = v4 + 1; /*0x941f19*/
  *(_DWORD *)(v3 + 4) = v4; /*0x941f1c*/
  return a1; /*0x941f21*/
}
