int __usercall sub_941EC0@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // esi
  int v4; // eax

  v3 = a1 + 8;
  *(_WORD *)(a1 + 6) = 1;
  *(_DWORD *)a1 = &off_AA22B8;
  *(_DWORD *)(a1 + 8) = a1 + 0x14;
  *(_DWORD *)(a1 + 0xC) = 0;
  *(_DWORD *)(a1 + 0x10) = 0x80000010;
  sub_8B0E10((char **)(a1 + 0x24), a2);
  if ( *(_DWORD *)(v3 + 4) == (*(_DWORD *)(v3 + 8) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v3, 1);
  *(_BYTE *)(*(_DWORD *)(v3 + 4) + *(_DWORD *)v3) = 0;
  v4 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 4) = v4 + 1;
  *(_DWORD *)(v3 + 4) = v4;
  return a1;
}
