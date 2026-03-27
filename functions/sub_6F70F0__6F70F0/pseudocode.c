char *__thiscall sub_6F70F0(struct std::ios_base *this, char a2)
{
  char *v2; // esi

  v2 = (char *)this + 0xFFFFFFFC;
  *(_DWORD *)((char *)this + 0xFFFFFFFC + *(_DWORD *)(*((_DWORD *)this + 0xFFFFFFFF) + 4)) = &std::ostream::`vftable'{for `std::_Iosb<int>'};
  *(_DWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)v2);
  return v2;
}
