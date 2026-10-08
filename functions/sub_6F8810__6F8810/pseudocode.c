int __userpurge sub_6F8810@<eax>(void *Src, int a2, void *Dst, rsize_t DstSize)
{
  rsize_t v5; // [esp+0h] [ebp-10h]

  if ( (unsigned int)DstSize < a2 - (int)Src ) /*0x6f8826*/
    _invalid_parameter_noinfo(); /*0x6f8828*/
  memcpy_s(Dst, __PAIR64__((unsigned int)Src, DstSize), (const void *)(a2 - (_DWORD)Src), v5); /*0x6f8835*/
  return a2; /*0x6f883f*/
}
