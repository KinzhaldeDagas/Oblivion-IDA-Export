signed int __userpurge sub_8A26F0@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v3; // eax

  if ( !a1 )
    return 1;
  v3 = *(_DWORD *)(a1 + 8);
  if ( !v3 )
    return 1;
  sub_8B6550(a2, v3, *(float *)(a3 + 4), a3);
  return 0;
}
