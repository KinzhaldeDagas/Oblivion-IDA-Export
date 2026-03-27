void __thiscall sub_6F6EB0(_DWORD *this)
{
  *(_DWORD *)((char *)this + *(_DWORD *)(*this + 4)) = &std::ostream::`vftable'{for `std::_Iosb<int>'};
  *(this + 1) = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((struct std::ios_base *)(this + 1));
}
