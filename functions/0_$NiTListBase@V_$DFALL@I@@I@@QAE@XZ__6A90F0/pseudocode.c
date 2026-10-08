NiTListBase<DFALL<unsigned int>,unsigned int> *__thiscall NiTListBase<DFALL<unsigned int>,unsigned int>::NiTListBase<DFALL<unsigned int>,unsigned int>(
        NiTListBase<DFALL<unsigned int>,unsigned int> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<unsigned int>,unsigned int>::`vftable'; /*0x6a90f8*/
  if ( (a2 & 1) != 0 ) /*0x6a90fe*/
    FormHeapFree((unsigned int)this); /*0x6a9101*/
  return this; /*0x6a910b*/
}
