_DWORD *__thiscall sub_6F9200(_DWORD *this, int a2, char a3, int a4)
{
  if ( a4 )
  {
    *this = &unk_A7CF7C;
    *(this + 1) = &std::ios::`vftable';
  }
  *(_DWORD *)((char *)this + *(_DWORD *)(*this + 4)) = &std::ostream::`vftable'{for `std::_Iosb<int>'};
  sub_6F9030((struct std::ios_base *)((char *)this + *(_DWORD *)(*this + 4)), a2, a3);
  return this;
}
