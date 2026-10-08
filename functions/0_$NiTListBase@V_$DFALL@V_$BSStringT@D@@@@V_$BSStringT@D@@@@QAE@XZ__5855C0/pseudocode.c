NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>> *__thiscall NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>>::NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>>(
        NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>>::`vftable'; /*0x5855c8*/
  if ( (a2 & 1) != 0 ) /*0x5855ce*/
    FormHeapFree((unsigned int)this); /*0x5855d1*/
  return this; /*0x5855db*/
}
