int __userpurge sub_6F8890@<eax>(void *Src, int a2, int a3, void *Dst, rsize_t DstSize)
{
  rsize_t v7; // [esp+0h] [ebp-10h]

  if ( (unsigned int)DstSize < a2 - (int)Src )
    _invalid_parameter_noinfo();
  memcpy_s(Dst, __PAIR64__((unsigned int)Src, DstSize), (const void *)(a2 - (_DWORD)Src), v7);
  return a2;
}
