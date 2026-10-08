int __userpurge sub_6F8890@<eax>(void *Src, int a2, int a3, void *Dst, rsize_t DstSize)
{
  rsize_t v6; // [esp+0h] [ebp-10h]

  if ( (unsigned int)DstSize < a2 - (int)Src ) /*0x6f88a6*/
    _invalid_parameter_noinfo(); /*0x6f88a8*/
  memcpy_s(Dst, __PAIR64__((unsigned int)Src, DstSize), (const void *)(a2 - (_DWORD)Src), v6); /*0x6f88b5*/
  return a2; /*0x6f88bf*/
}
