char *__thiscall sub_6F70F0(struct std::ios_base *this, char a2)
{
  char *v2; // esi

  v2 = (char *)this + 0xFFFFFFFC; /*0x6f70f1*/
  *(_DWORD *)((char *)this + 0xFFFFFFFC + *(_DWORD *)(*((_DWORD *)this + 0xFFFFFFFF) + 4)) = &std::ostream::`vftable'{for `std::_Iosb<int>'}; /*0x6f70fc*/
  *(_DWORD *)this = &std::ios_base::`vftable'; /*0x6f7105*/
  std::ios_base::_Ios_base_dtor((int ***)this); /*0x6f710b*/
  if ( (a2 & 1) != 0 ) /*0x6f7118*/
    FormHeapFree((unsigned int)v2); /*0x6f711b*/
  return v2; /*0x6f7125*/
}
