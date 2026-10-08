_DWORD *__thiscall sub_6F9200(_DWORD *this, int a2, char a3, int a4)
{
  if ( a4 ) /*0x6f9234*/
  {
    *this = &unk_A7CF7C; /*0x6f9236*/
    *(this + 1) = &std::ios::`vftable'; /*0x6f923c*/
  }
  *(_DWORD *)((char *)this + *(_DWORD *)(*this + 4)) = &std::ostream::`vftable'{for `std::_Iosb<int>'}; /*0x6f925c*/
  sub_6F9030((struct std::ios_base *)((char *)this + *(_DWORD *)(*this + 4)), a2, a3); /*0x6f926c*/
  return this; /*0x6f9273*/
}
