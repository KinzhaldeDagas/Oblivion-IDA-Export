NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>> *__thiscall NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>>::NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>>(
        NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
